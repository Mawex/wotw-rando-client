#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Dithering {
        inline app::ShaderID_Dithering__Class** type_info = (app::ShaderID_Dithering__Class**)(modloader::win::memory::resolve_rva(0x04748750));
        inline app::ShaderID_Dithering__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Dithering__Class>(type_info, "Colorful", "ShaderID_Dithering");
        }
        inline app::ShaderID_Dithering* create() {
            return il2cpp::create_object<app::ShaderID_Dithering>(get_class());
        }
    } // namespace ShaderID_Dithering
} // namespace app::classes::types
