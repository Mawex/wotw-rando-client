#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnauthorizedAccessException {
        inline app::UnauthorizedAccessException__Class** type_info = (app::UnauthorizedAccessException__Class**)(modloader::win::memory::resolve_rva(0x04733DE8));
        inline app::UnauthorizedAccessException__Class* get_class() {
            return il2cpp::get_class<app::UnauthorizedAccessException__Class>(type_info, "System", "UnauthorizedAccessException");
        }
        inline app::UnauthorizedAccessException* create() {
            return il2cpp::create_object<app::UnauthorizedAccessException>(get_class());
        }
    } // namespace UnauthorizedAccessException
} // namespace app::classes::types
