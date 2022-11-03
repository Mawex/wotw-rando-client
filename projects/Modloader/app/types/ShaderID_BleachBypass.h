#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_BleachBypass {
        inline app::ShaderID_BleachBypass__Class** type_info = (app::ShaderID_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x04746408));
        inline app::ShaderID_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BleachBypass__Class>(type_info, "Colorful", "ShaderID_BleachBypass");
        }
        inline app::ShaderID_BleachBypass* create() {
            return il2cpp::create_object<app::ShaderID_BleachBypass>(get_class());
        }
    } // namespace ShaderID_BleachBypass
} // namespace app::classes::types
