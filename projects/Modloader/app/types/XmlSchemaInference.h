#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaInference {
        inline app::XmlSchemaInference__Class** type_info = (app::XmlSchemaInference__Class**)(modloader::win::memory::resolve_rva(0x04714ED0));
        inline app::XmlSchemaInference__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInference__Class>(type_info, "System.Xml.Schema", "XmlSchemaInference");
        }
        inline app::XmlSchemaInference* create() {
            return il2cpp::create_object<app::XmlSchemaInference>(get_class());
        }
    } // namespace XmlSchemaInference
} // namespace app::classes::types
