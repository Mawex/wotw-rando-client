#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_Name {
        inline app::Datatype_Name__Class** type_info = (app::Datatype_Name__Class**)(modloader::win::memory::resolve_rva(0x04723408));
        inline app::Datatype_Name__Class* get_class() {
            return il2cpp::get_class<app::Datatype_Name__Class>(type_info, "System.Xml.Schema", "Datatype_Name");
        }
        inline app::Datatype_Name* create() {
            return il2cpp::create_object<app::Datatype_Name>(get_class());
        }
    } // namespace Datatype_Name
} // namespace app::classes::types
