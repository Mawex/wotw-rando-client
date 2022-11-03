#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingTicketCompletePayload {
        namespace {
            inline app::MatchmakingTicketCompletePayload__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingTicketCompletePayload__Class** type_info = &type_info_ref;
        inline app::MatchmakingTicketCompletePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingTicketCompletePayload__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingTicketCompletePayload");
        }
        inline app::MatchmakingTicketCompletePayload* create() {
            return il2cpp::create_object<app::MatchmakingTicketCompletePayload>(get_class());
        }
    } // namespace MatchmakingTicketCompletePayload
} // namespace app::classes::types
