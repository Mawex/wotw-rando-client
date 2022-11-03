#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSyntaxException {
        inline app::XmlSyntaxException__Class** type_info = (app::XmlSyntaxException__Class**)(modloader::win::memory::resolve_rva(0x04770078));
        inline app::XmlSyntaxException__Class* get_class() {
            return il2cpp::get_class<app::XmlSyntaxException__Class>(type_info, "System.Security", "XmlSyntaxException");
        }
        inline app::XmlSyntaxException* create() {
            return il2cpp::create_object<app::XmlSyntaxException>(get_class());
        }
    } // namespace XmlSyntaxException
} // namespace app::classes::types
