#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowFPSGraphProfilingSetting {
        namespace {
            inline app::ShowFPSGraphProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ShowFPSGraphProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowFPSGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowFPSGraphProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowFPSGraphProfilingSetting");
        }
        inline app::ShowFPSGraphProfilingSetting* create() {
            return il2cpp::create_object<app::ShowFPSGraphProfilingSetting>(get_class());
        }
    } // namespace ShowFPSGraphProfilingSetting
} // namespace app::classes::types
