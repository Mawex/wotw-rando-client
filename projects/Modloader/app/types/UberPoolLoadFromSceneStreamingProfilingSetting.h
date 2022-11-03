#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolLoadFromSceneStreamingProfilingSetting {
        namespace {
            inline app::UberPoolLoadFromSceneStreamingProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolLoadFromSceneStreamingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "UberPoolLoadFromSceneStreamingProfilingSetting");
        }
        inline app::UberPoolLoadFromSceneStreamingProfilingSetting* create() {
            return il2cpp::create_object<app::UberPoolLoadFromSceneStreamingProfilingSetting>(get_class());
        }
    } // namespace UberPoolLoadFromSceneStreamingProfilingSetting
} // namespace app::classes::types
