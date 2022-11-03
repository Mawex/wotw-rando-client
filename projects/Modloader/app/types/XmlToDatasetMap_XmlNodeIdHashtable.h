#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_XmlNodeIdHashtable {
        inline app::XmlToDatasetMap_XmlNodeIdHashtable__Class** type_info = (app::XmlToDatasetMap_XmlNodeIdHashtable__Class**)(modloader::win::memory::resolve_rva(0x04776598));
        inline app::XmlToDatasetMap_XmlNodeIdHashtable__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_XmlNodeIdHashtable__Class>(type_info, "System.Data", "XmlToDatasetMap", "XmlNodeIdHashtable");
        }
        inline app::XmlToDatasetMap_XmlNodeIdHashtable* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_XmlNodeIdHashtable>(get_class());
        }
    } // namespace XmlToDatasetMap_XmlNodeIdHashtable
} // namespace app::classes::types
