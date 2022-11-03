#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaContent {
        namespace {
            inline app::XmlSchemaContent__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaContent__Class** type_info = &type_info_ref;
        inline app::XmlSchemaContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaContent");
        }
        inline app::XmlSchemaContent* create() {
            return il2cpp::create_object<app::XmlSchemaContent>(get_class());
        }
    } // namespace XmlSchemaContent
} // namespace app::classes::types
