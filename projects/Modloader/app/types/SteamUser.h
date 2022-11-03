#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamUser {
        inline app::SteamUser__Class** type_info = (app::SteamUser__Class**)(modloader::win::memory::resolve_rva(0x0478EA28));
        inline app::SteamUser__Class* get_class() {
            return il2cpp::get_class<app::SteamUser__Class>(type_info, "SystemIntegration", "SteamUser");
        }
        inline app::SteamUser* create() {
            return il2cpp::create_object<app::SteamUser>(get_class());
        }
    } // namespace SteamUser
} // namespace app::classes::types
