#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_VTable {
        inline app::ISteamMatchmakingServerListResponse_VTable__Class** type_info = (app::ISteamMatchmakingServerListResponse_VTable__Class**)(modloader::win::memory::resolve_rva(0x0478A6A8));
        inline app::ISteamMatchmakingServerListResponse_VTable__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_VTable__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "VTable");
        }
        inline app::ISteamMatchmakingServerListResponse_VTable* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_VTable>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_VTable
} // namespace app::classes::types
