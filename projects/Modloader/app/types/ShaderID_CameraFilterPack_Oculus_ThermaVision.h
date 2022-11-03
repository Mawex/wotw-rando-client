#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Oculus_ThermaVision {
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class** type_info = (app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class**)(modloader::win::memory::resolve_rva(0x04705E88));
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class>(type_info, "", "ShaderID_CameraFilterPack_Oculus_ThermaVision");
        }
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Oculus_ThermaVision>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Oculus_ThermaVision
} // namespace app::classes::types
