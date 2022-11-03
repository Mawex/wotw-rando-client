#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_nonPositiveInteger {
        inline app::Datatype_nonPositiveInteger__Class** type_info = (app::Datatype_nonPositiveInteger__Class**)(modloader::win::memory::resolve_rva(0x0476D250));
        inline app::Datatype_nonPositiveInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_nonPositiveInteger__Class>(type_info, "System.Xml.Schema", "Datatype_nonPositiveInteger");
        }
        inline app::Datatype_nonPositiveInteger* create() {
            return il2cpp::create_object<app::Datatype_nonPositiveInteger>(get_class());
        }
    } // namespace Datatype_nonPositiveInteger
} // namespace app::classes::types
