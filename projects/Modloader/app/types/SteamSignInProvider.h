#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamSignInProvider {
        inline app::SteamSignInProvider__Class** type_info = (app::SteamSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x04796C60));
        inline app::SteamSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::SteamSignInProvider__Class>(type_info, "SystemIntegration", "SteamSignInProvider");
        }
        inline app::SteamSignInProvider* create() {
            return il2cpp::create_object<app::SteamSignInProvider>(get_class());
        }
    } // namespace SteamSignInProvider
} // namespace app::classes::types
