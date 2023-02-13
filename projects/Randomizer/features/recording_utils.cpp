#include <Common/ext.h>
#include <Modloader/app/methods/CameraOffsetController.h>
#include <Modloader/app/methods/CameraPostProcessing.h>
#include <Modloader/app/methods/CameraTarget.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/Moon/Rendering/ShaderTime.h>
#include <Modloader/app/methods/UberPostProcess.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/methods/UnityEngine/Color.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;
using namespace modloader::win;

namespace {
    app::Color default_background_color;
    bool enable_vignette = true;
    bool camera_locked = false;

    IL2CPP_INTERCEPT(UberPostProcess, void, ApplySettings_2, (app::UberPostProcess * this_ptr, app::CameraSettings* settingsAsset)) {
        next::UberPostProcess::ApplySettings_2(this_ptr, settingsAsset);

        if (!enable_vignette) {
            this_ptr->fields.Vignetting->fields.Intensity = 0.0f;
            this_ptr->fields.Vignetting->fields.SecondVignetteAmount = 0.0f;
        }
    }

    IL2CPP_INTERCEPT(CameraOffsetController, void, UpdateOffset, (app::CameraOffsetController * this_ptr, bool instant, float time_delta)) {
        if (!camera_locked) {
            next::CameraOffsetController::UpdateOffset(this_ptr, instant, time_delta);
        }
    }

    IL2CPP_INTERCEPT(CameraTarget, void, UpdateTargetPosition, (app::CameraTarget * this_ptr)) {
        if (!camera_locked) {
            next::CameraTarget::UpdateTargetPosition(this_ptr);
        }
    }

    bool read_single_bool_from_command(std::vector<console::CommandParam> const& params, bool& boolean) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return false;
        }

        if (!console::try_get_bool(params[0], boolean)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return false;
        }

        return true;
    }

    void set_background_color(app::Color color) {
        auto camera = UnityEngine::Camera::get_main();
        UnityEngine::Camera::set_backgroundColor(camera, color);
    }

    void set_background_color_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 3) {
            console::console_send("Invalid number of arguments. Expected 3");
            return;
        }

        float r = 0.f;
        float g = 0.f;
        float b = 0.f;

        if (!console::try_get_float(params[0], r)) {
            console::console_send(fmt::format("Invalid argument. Expected float, got '{}'", params[0].value.data()));
            return;
        }

        if (!console::try_get_float(params[1], r)) {
            console::console_send(fmt::format("Invalid argument. Expected float, got '{}'", params[1].value.data()));
            return;
        }

        if (!console::try_get_float(params[2], r)) {
            console::console_send(fmt::format("Invalid argument. Expected float, got '{}'", params[2].value.data()));
            return;
        }

        set_background_color(app::Color{ r, g, b });

        console::console_send("Background color set");
    }

    void reset_background_color_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        set_background_color(default_background_color);
        console::console_send("Background color reset");
    }

    void set_vignette_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (read_single_bool_from_command(params, enable_vignette)) {
            auto const gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
            auto const camera_post_processing = GameplayCamera::get_CameraPostProcessing(gameplay_camera);
            auto uber_post_process = camera_post_processing->fields.UberPostProcess;
            UberPostProcess::ApplySettings_2(uber_post_process, CameraPostProcessing::get_CameraSettingsToUse(camera_post_processing));

            console::console_send(fmt::format("Vignette {}", enable_vignette ? "enabled" : "disabled"));
        }
    }

    void set_camera_swaying_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        bool enable = false;
        if (read_single_bool_from_command(params, enable)) {
            Moon::Rendering::ShaderTime::set_freezeCameraSwaying(!enable);
            console::console_send(fmt::format("Camera swaying {}", enable ? "enabled" : "disabled"));
        }
    }

    void set_camera_locked_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (read_single_bool_from_command(params, camera_locked)) {
            console::console_send(fmt::format("Camera {}", camera_locked ? "locked" : "unlocked"));
        }
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto camera = UnityEngine::Camera::get_main();
        default_background_color = UnityEngine::Camera::get_backgroundColor(camera);

        console::register_command({ "recording_utils", "set_background_color" }, set_background_color_command);
        console::register_command({ "recording_utils", "reset_background_color" }, reset_background_color_command);
        console::register_command({ "recording_utils", "set_vignette" }, set_vignette_command);
        console::register_command({ "recording_utils", "set_camera_swaying" }, set_camera_swaying_command);
        console::register_command({ "recording_utils", "set_camera_locked" }, set_camera_locked_command);
    });
} // namespace