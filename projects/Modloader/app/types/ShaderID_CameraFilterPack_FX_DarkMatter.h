#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_DarkMatter {
        inline app::ShaderID_CameraFilterPack_FX_DarkMatter__Class** type_info = (app::ShaderID_CameraFilterPack_FX_DarkMatter__Class**)(modloader::win::memory::resolve_rva(0x04761D48));
        inline app::ShaderID_CameraFilterPack_FX_DarkMatter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_DarkMatter__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_DarkMatter");
        }
        inline app::ShaderID_CameraFilterPack_FX_DarkMatter* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_DarkMatter>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_DarkMatter
} // namespace app::classes::types
