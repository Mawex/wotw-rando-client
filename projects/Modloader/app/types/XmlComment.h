#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlComment {
        inline app::XmlComment__Class** type_info = (app::XmlComment__Class**)(modloader::win::memory::resolve_rva(0x047486E8));
        inline app::XmlComment__Class* get_class() {
            return il2cpp::get_class<app::XmlComment__Class>(type_info, "System.Xml", "XmlComment");
        }
        inline app::XmlComment* create() {
            return il2cpp::create_object<app::XmlComment>(get_class());
        }
    } // namespace XmlComment
} // namespace app::classes::types
