#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Atmosphere_Rain_Pro {
        namespace {
            inline app::CameraFilterPack_Atmosphere_Rain_Pro__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Atmosphere_Rain_Pro__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Atmosphere_Rain_Pro__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Atmosphere_Rain_Pro__Class>(type_info, "", "CameraFilterPack_Atmosphere_Rain_Pro");
        }
        inline app::CameraFilterPack_Atmosphere_Rain_Pro* create() {
            return il2cpp::create_object<app::CameraFilterPack_Atmosphere_Rain_Pro>(get_class());
        }
    } // namespace CameraFilterPack_Atmosphere_Rain_Pro
} // namespace app::classes::types
