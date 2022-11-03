#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Divide {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class**)(modloader::win::memory::resolve_rva(0x04718810));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Divide");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Divide* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Divide>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Divide
} // namespace app::classes::types
