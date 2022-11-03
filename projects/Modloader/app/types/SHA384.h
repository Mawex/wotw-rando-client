#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SHA384 {
        inline app::SHA384__Class** type_info = (app::SHA384__Class**)(modloader::win::memory::resolve_rva(0x04757830));
        inline app::SHA384__Class* get_class() {
            return il2cpp::get_class<app::SHA384__Class>(type_info, "System.Security.Cryptography", "SHA384");
        }
        inline app::SHA384* create() {
            return il2cpp::create_object<app::SHA384>(get_class());
        }
    } // namespace SHA384
} // namespace app::classes::types
