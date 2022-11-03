#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsContext {
        inline app::fsContext__Class** type_info = (app::fsContext__Class**)(modloader::win::memory::resolve_rva(0x04789140));
        inline app::fsContext__Class* get_class() {
            return il2cpp::get_class<app::fsContext__Class>(type_info, "FullSerializer", "fsContext");
        }
        inline app::fsContext* create() {
            return il2cpp::create_object<app::fsContext>(get_class());
        }
    } // namespace fsContext
} // namespace app::classes::types
