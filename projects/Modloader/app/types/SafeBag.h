#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeBag {
        inline app::SafeBag__Class** type_info = (app::SafeBag__Class**)(modloader::win::memory::resolve_rva(0x04780DA0));
        inline app::SafeBag__Class* get_class() {
            return il2cpp::get_class<app::SafeBag__Class>(type_info, "Mono.Security.X509", "SafeBag");
        }
        inline app::SafeBag* create() {
            return il2cpp::create_object<app::SafeBag>(get_class());
        }
    } // namespace SafeBag
} // namespace app::classes::types
