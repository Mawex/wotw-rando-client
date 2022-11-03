#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_SuperHexagon {
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class** type_info = (app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class**)(modloader::win::memory::resolve_rva(0x04714720));
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class>(type_info, "", "ShaderID_CameraFilterPack_AAA_SuperHexagon");
        }
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_SuperHexagon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_SuperHexagon
} // namespace app::classes::types
