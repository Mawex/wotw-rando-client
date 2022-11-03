#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppDomainUnloadedException {
        inline app::AppDomainUnloadedException__Class** type_info = (app::AppDomainUnloadedException__Class**)(modloader::win::memory::resolve_rva(0x04765190));
        inline app::AppDomainUnloadedException__Class* get_class() {
            return il2cpp::get_class<app::AppDomainUnloadedException__Class>(type_info, "System", "AppDomainUnloadedException");
        }
        inline app::AppDomainUnloadedException* create() {
            return il2cpp::create_object<app::AppDomainUnloadedException>(get_class());
        }
    } // namespace AppDomainUnloadedException
} // namespace app::classes::types
