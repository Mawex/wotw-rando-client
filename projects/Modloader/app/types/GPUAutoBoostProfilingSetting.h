#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoBoostProfilingSetting {
        namespace {
            inline app::GPUAutoBoostProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::GPUAutoBoostProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GPUAutoBoostProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoBoostProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GPUAutoBoostProfilingSetting");
        }
        inline app::GPUAutoBoostProfilingSetting* create() {
            return il2cpp::create_object<app::GPUAutoBoostProfilingSetting>(get_class());
        }
    } // namespace GPUAutoBoostProfilingSetting
} // namespace app::classes::types
