#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Plasma {
        inline app::ShaderID_CameraFilterPack_Vision_Plasma__Class** type_info = (app::ShaderID_CameraFilterPack_Vision_Plasma__Class**)(modloader::win::memory::resolve_rva(0x047902B8));
        inline app::ShaderID_CameraFilterPack_Vision_Plasma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Plasma__Class>(type_info, "", "ShaderID_CameraFilterPack_Vision_Plasma");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Plasma* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Plasma>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Plasma
} // namespace app::classes::types
