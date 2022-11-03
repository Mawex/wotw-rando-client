#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Noise {
        inline app::ShaderID_Noise__Class** type_info = (app::ShaderID_Noise__Class**)(modloader::win::memory::resolve_rva(0x0476A400));
        inline app::ShaderID_Noise__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Noise__Class>(type_info, "Colorful", "ShaderID_Noise");
        }
        inline app::ShaderID_Noise* create() {
            return il2cpp::create_object<app::ShaderID_Noise>(get_class());
        }
    } // namespace ShaderID_Noise
} // namespace app::classes::types
