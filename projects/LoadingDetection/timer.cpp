#include <Modloader/windows_api/memory.h>
#include <Modloader/windows_api/sleep.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/interception.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/Moon/SerializedBooleanUberState.h>
#include <Modloader/app/methods/NewGameSetDifficultyAction.h>
#include <LoadingDetection/loading_detection.h>

#include <thread>
#include <chrono>
#include <unordered_map>
#include <fmt/format.h>

using namespace app::classes;

namespace {
    constexpr long SAMPLING_RATE_US = 1000000L / 60L; // 60 Hz sample rate

    std::mutex timer_mutex;
    bool timer_active = false;
    std::unordered_map<LoadingState, float> states;

    void initialize() {
        modloader::win::console::console_send("New timer initialized. Start new save file to start timer.");
    }

    CALL_ON_INIT(initialize);

    void reset() {
        timer_mutex.lock();
        timer_active = true;
        states = {};
        timer_mutex.unlock();
    }

    void on_async_update(float delta) {
        if (!timer_active) {
            return;
        }

        timer_mutex.lock();

        states[loading_detection::get_loading_state()] += delta;

        timer_mutex.unlock();
    }

    std::string format_time(float total_seconds) {
        int h = std::floor(total_seconds / 3600.0);
        int m = std::floor((std::fmod(total_seconds, 3600.0)) / 60.0);
        int s = std::floor(std::fmod(total_seconds, 60.0));
        int ms = std::floor(std::fmod(total_seconds, 1.0) * 1000.0);

        return fmt::format("{}:{:02d}:{:02d}.{:03d}", h, m, s, ms);
    }

    void print_state_to_console() {
        modloader::win::console::console_send("Detected loading times:");

        float total_time = 0.f;
        float loading_time = 0.f;

        for (const auto &item: states) {
            nlohmann::json state = item.first; // Convert LoadingState to its JSON enum string
            modloader::win::console::console_send(fmt::format(" - {}  {}", format_time(item.second), state));

            total_time += item.second;
            if (item.first != LoadingState::NotLoading) {
                loading_time += item.second;
            }
        }

        modloader::win::console::console_send("--------");
        modloader::win::console::console_send(fmt::format("RTA: {}", format_time(total_time)));
        modloader::win::console::console_send(fmt::format("IGT: {}", format_time(total_time - loading_time)));
        modloader::win::console::console_send(fmt::format("LDT: {}", format_time(loading_time)));
    }

    IL2CPP_INTERCEPT(NewGameSetDifficultyAction, void, Perform, (app::NewGameSetDifficultyAction * this_ptr, app::IContext* context)) {
        next::NewGameSetDifficultyAction::Perform(this_ptr, context);
        reset();
        modloader::win::console::console_send("New game started: Timer started");
        modloader::win::console::console_flush();
    }

    IL2CPP_INTERCEPT(Moon::SerializedBooleanUberState, void, set_Value, (app::SerializedBooleanUberState * this_ptr, bool value)) {
        auto group_id = this_ptr->fields.Group->fields._.m_id->fields.m_id;
        auto state_id = this_ptr->fields._.m_id->fields.m_id;

        if (group_id == 34543 && state_id == 11226 && value == true) {
            timer_mutex.lock();

            timer_active = false;
            modloader::win::console::console_send("Timer stopped.");
            print_state_to_console();
            modloader::win::console::console_send("");
            modloader::win::console::console_send("Start new save file to restart timer.");
            modloader::win::console::console_flush();

            timer_mutex.unlock();
        }

        next::Moon::SerializedBooleanUberState::set_Value(this_ptr, value);
    }

    namespace {
        void initialize() {
            std::thread([]() {
                auto last_iteration_time = std::chrono::steady_clock::now();

                while (!modloader::shutdown_requested) {
                    modloader::win::sleep(SAMPLING_RATE_US);
                    auto now = std::chrono::steady_clock::now();
                    auto delta = std::chrono::duration_cast<std::chrono::duration<float>>(now - last_iteration_time);
                    last_iteration_time = now;

                    on_async_update(delta.count());
                }
            }).detach();
        }

        CALL_ON_INIT(initialize);
    }
}