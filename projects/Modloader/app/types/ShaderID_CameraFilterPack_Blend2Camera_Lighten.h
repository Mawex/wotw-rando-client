#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Lighten {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class**)(modloader::win::memory::resolve_rva(0x0477A568));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Lighten");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Lighten* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Lighten>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Lighten
} // namespace app::classes::types
