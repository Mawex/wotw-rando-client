#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeReader {
        namespace {
            inline app::XmlNodeReader__Class* type_info_ref = nullptr;
        }
        inline app::XmlNodeReader__Class** type_info = &type_info_ref;
        inline app::XmlNodeReader__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReader__Class>(type_info, "System.Xml", "XmlNodeReader");
        }
        inline app::XmlNodeReader* create() {
            return il2cpp::create_object<app::XmlNodeReader>(get_class());
        }
    } // namespace XmlNodeReader
} // namespace app::classes::types
