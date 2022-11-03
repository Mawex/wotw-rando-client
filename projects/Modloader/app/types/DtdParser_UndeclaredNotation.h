#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdParser_UndeclaredNotation {
        inline app::DtdParser_UndeclaredNotation__Class** type_info = (app::DtdParser_UndeclaredNotation__Class**)(modloader::win::memory::resolve_rva(0x04731360));
        inline app::DtdParser_UndeclaredNotation__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_UndeclaredNotation__Class>(type_info, "System.Xml", "DtdParser", "UndeclaredNotation");
        }
        inline app::DtdParser_UndeclaredNotation* create() {
            return il2cpp::create_object<app::DtdParser_UndeclaredNotation>(get_class());
        }
        inline app::DtdParser_UndeclaredNotation__Array* create_array(int size) {
            return il2cpp::array_new<app::DtdParser_UndeclaredNotation__Array>(get_class(), size);
        }
        inline app::DtdParser_UndeclaredNotation__Array* create_array(const std::vector<app::DtdParser_UndeclaredNotation*>& items) {
            return il2cpp::array_new<app::DtdParser_UndeclaredNotation__Array>(get_class(), items);
        }
    } // namespace DtdParser_UndeclaredNotation
} // namespace app::classes::types
