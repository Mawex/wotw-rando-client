#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_union {
        inline app::Datatype_union__Class** type_info = (app::Datatype_union__Class**)(modloader::win::memory::resolve_rva(0x04776020));
        inline app::Datatype_union__Class* get_class() {
            return il2cpp::get_class<app::Datatype_union__Class>(type_info, "System.Xml.Schema", "Datatype_union");
        }
        inline app::Datatype_union* create() {
            return il2cpp::create_object<app::Datatype_union>(get_class());
        }
    } // namespace Datatype_union
} // namespace app::classes::types
