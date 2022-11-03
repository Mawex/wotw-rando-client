#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerRealMoneyPurchaseEventData {
        namespace {
            inline app::PlayerRealMoneyPurchaseEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerRealMoneyPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRealMoneyPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRealMoneyPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRealMoneyPurchaseEventData");
        }
        inline app::PlayerRealMoneyPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerRealMoneyPurchaseEventData>(get_class());
        }
    } // namespace PlayerRealMoneyPurchaseEventData
} // namespace app::classes::types
