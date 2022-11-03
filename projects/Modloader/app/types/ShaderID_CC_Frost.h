#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_Frost {
        inline app::ShaderID_CC_Frost__Class** type_info = (app::ShaderID_CC_Frost__Class**)(modloader::win::memory::resolve_rva(0x0475A8D8));
        inline app::ShaderID_CC_Frost__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Frost__Class>(type_info, "", "ShaderID_CC_Frost");
        }
        inline app::ShaderID_CC_Frost* create() {
            return il2cpp::create_object<app::ShaderID_CC_Frost>(get_class());
        }
    } // namespace ShaderID_CC_Frost
} // namespace app::classes::types
