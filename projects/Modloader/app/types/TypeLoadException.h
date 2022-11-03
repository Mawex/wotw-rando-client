#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeLoadException {
        inline app::TypeLoadException__Class** type_info = (app::TypeLoadException__Class**)(modloader::win::memory::resolve_rva(0x04719D48));
        inline app::TypeLoadException__Class* get_class() {
            return il2cpp::get_class<app::TypeLoadException__Class>(type_info, "System", "TypeLoadException");
        }
        inline app::TypeLoadException* create() {
            return il2cpp::create_object<app::TypeLoadException>(get_class());
        }
    } // namespace TypeLoadException
} // namespace app::classes::types
