#include <Modloader/interception_macros.h>
#include <dev/object_visualizer.h>
#include <uber_states/uber_state_interface.h>
#include <uber_states/uber_states.h>

#include <Common/ext.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/types/UberStateController.h>
#include <Modloader/app/types/UberStateCollection.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/windows_api/clipboard.h>

#include <algorithm>
#include <array>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;

namespace {
    void visualizer_setup(dev::Visualizer &visualizer, std::vector<console::CommandParam> const &params,
                          int default_level = 1, int default_depth = 200000) {
        int value = default_level;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "level"; });
        if (value_it != params.end())
            if (!console::try_get_int(*value_it, value) || value < 0 || value > 3)
                console::console_send("invalid value parameter not an int in range 0 - 3, using default level");

        visualizer.level = static_cast<dev::Visualizer::InfoLevel>(std::clamp(value, 0, 3));
        visualizer.initial_depth = -1;
        value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "depth"; });
        if (value_it != params.end())
            if (!console::try_get_int(*value_it, visualizer.initial_depth) || visualizer.initial_depth < 0)
                console::console_send("invalid value parameter not a positive int, using default depth");

        if (visualizer.initial_depth < 0)
            visualizer.initial_depth = default_depth;
    }

    void output_visualizer(dev::Visualizer &visualizer, std::vector<console::CommandParam> const &params) {
        std::ofstream str;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "file"; });
        if (value_it != params.end())
            str.open(value_it->value);

        if (str.is_open()) {
            str << dev::visualize::get_string(visualizer) << std::endl;
            console::console_send("finished writing to file.");
            str.close();
        } else
            console::console_send(dev::visualize::get_string(visualizer));
    }

    bool find_state_group(std::vector<console::CommandParam> const &params, int &state, int &group) {
        auto state_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "state"; });
        auto group_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "group"; });
        if (state_it == params.end()) {
            console::console_send("state parameter not found");
            return false;
        }

        if (group_it == params.end()) {
            console::console_send("group parameter not found");
            return false;
        }

        if (!console::try_get_int(*state_it, state)) {
            console::console_send("invalid state parameter not an int");
            return false;
        }

        if (!console::try_get_int(*group_it, group)) {
            console::console_send("invalid group parameter not an int");
            return false;
        }

        return true;
    }

    void set_us_bool(std::string const &command, std::vector<console::CommandParam> const &params) {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        bool value = false;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end()) {
            console::console_send("value parameter not found");
            return;
        }

        if (!console::try_get_bool(*value_it, value)) {
            console::console_send("invalid value parameter not a bool");
            return;
        }

        uber_states::UberState(static_cast<UberStateGroup>(group), state).set(value);
    }

    void set_us_int(std::string const &command, std::vector<console::CommandParam> const &params) {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        int value = 0;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end()) {
            console::console_send("value parameter not found");
            return;
        }

        if (!console::try_get_int(*value_it, value)) {
            console::console_send("invalid value parameter not an int");
            return;
        }

        uber_states::UberState(static_cast<UberStateGroup>(group), state).set(value);
    }

    void check_appliers(std::vector<console::CommandParam> const &params) {
        auto uber_state_controller = types::UberStateController::get_class();
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        uber_states::UberState uber_state(static_cast<UberStateGroup>(group), state);
        if (uber_state.valid()) {
            console::console_send("uber_state not found");
            return;
        }

        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        auto list = uber_state_controller->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i) {
            auto item = list->fields._items->vector[i];
            if (Moon::UberStateController::ApplierIsAffectedByUberState(item, uber_state.ptr()))
                dev::visualize::visualize_object(visualizer, reinterpret_cast<Il2CppObject *>(item));
        }

        output_visualizer(visualizer, params);
    }

    void check_all_appliers(std::vector<console::CommandParam> const &params) {
        auto uber_state_controller = types::UberStateController::get_class();
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        console::console_send("start visualizing.");
        auto list = uber_state_controller->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i) {
            console::console_send(fmt::format("visualizing applier ({} / {})", i + 1, list->fields._size));
            console::console_flush();

            auto item = list->fields._items->vector[i];
            dev::visualize::visualize_object(visualizer, item);
        }

        console::console_send("finished visualizing, outputting.\n");
        output_visualizer(visualizer, params);
    }

    void dump_scene(std::vector<console::CommandParam> const &params) {
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params);

        auto count = il2cpp::unity::get_scene_count();
        console::console_send("start visualizing.");
        for (auto i = 0; i < count; ++i) {
            console::console_send(fmt::format("visualizing scene ({} / {})", i + 1, count));
            console::console_flush();

            auto scene = il2cpp::unity::get_scene_at(i);
            dev::visualize::visualize_scene(visualizer, scene);
        }

        console::console_send("finished visualizing, outputting.\n");
        output_visualizer(visualizer, params);
    }

    void dump_uber_states(std::vector<console::CommandParam> const &params) {
        auto collection = types::UberStateCollection::get_class()
                ->static_fields->m_instance->fields.m_descriptors->fields;

        nlohmann::json j = nlohmann::json::object();

        j["groups"] = nlohmann::json::object();

        for (auto i = 0; i < collection._size; ++i) {
            uber_states::UberState uber_state(reinterpret_cast<app::IUberState *>(collection._items->vector[i]));

            auto group_key = std::to_string(static_cast<int>(uber_state.group()));
            auto state_key = std::to_string(static_cast<int>(uber_state.state()));

            if (!j["groups"].contains(group_key)) {
                j["groups"][group_key] = nlohmann::json::object(
                        {
                                {"name",   uber_state.group_name()},
                                {"states", nlohmann::json::object()},
                        }
                );
            }

            j["groups"][group_key]["states"][state_key] = nlohmann::json::object(
                    {
                            {"name",   uber_state.state_name()},
                            {"type",   uber_state.type()},
                            {"value",  uber_state.get<double>()},
                    }
            );
        }

        modloader::win::copy_text_to_clipboard(j.dump(2));
        console::console_send("Copied states to clipboard");
    }

    void add_uber_state_commands() {
        console::register_command({"uber_state", "set_bool"}, set_us_bool);
        console::register_command({"uber_state", "set_int"}, set_us_int);

        console::register_command({"debug", "check_appliers"}, [](auto command, auto params) {
            check_appliers(params);
        }, true);

        console::register_command({"debug", "check_all_appliers"}, [](auto command, auto params) {
            check_all_appliers(params);
        }, true);

        console::register_command({"debug", "dump_scene"}, [](auto command, auto params) {
            dump_scene(params);
        }, true);

        console::register_command({"debug", "dump_uber_states"}, [](auto command, auto params) {
            dump_uber_states(params);
        }, true);
    }

    CALL_ON_INIT(add_uber_state_commands);
} // namespace
