#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GaussianBlur {
        inline app::ShaderID_GaussianBlur__Class** type_info = (app::ShaderID_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x047380F8));
        inline app::ShaderID_GaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GaussianBlur__Class>(type_info, "Colorful", "ShaderID_GaussianBlur");
        }
        inline app::ShaderID_GaussianBlur* create() {
            return il2cpp::create_object<app::ShaderID_GaussianBlur>(get_class());
        }
    } // namespace ShaderID_GaussianBlur
} // namespace app::classes::types
