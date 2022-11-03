#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystonePickup {
        inline app::KeystonePickup__Class** type_info = (app::KeystonePickup__Class**)(modloader::win::memory::resolve_rva(0x0470B3E8));
        inline app::KeystonePickup__Class* get_class() {
            return il2cpp::get_class<app::KeystonePickup__Class>(type_info, "", "KeystonePickup");
        }
        inline app::KeystonePickup* create() {
            return il2cpp::create_object<app::KeystonePickup>(get_class());
        }
    } // namespace KeystonePickup
} // namespace app::classes::types
