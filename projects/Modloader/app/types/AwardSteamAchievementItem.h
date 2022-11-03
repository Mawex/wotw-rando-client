#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem {
        namespace {
            inline app::AwardSteamAchievementItem__Class* type_info_ref = nullptr;
        }
        inline app::AwardSteamAchievementItem__Class** type_info = &type_info_ref;
        inline app::AwardSteamAchievementItem__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementItem");
        }
        inline app::AwardSteamAchievementItem* create() {
            return il2cpp::create_object<app::AwardSteamAchievementItem>(get_class());
        }
        inline app::AwardSteamAchievementItem__Array* create_array(int size) {
            return il2cpp::array_new<app::AwardSteamAchievementItem__Array>(get_class(), size);
        }
        inline app::AwardSteamAchievementItem__Array* create_array(const std::vector<app::AwardSteamAchievementItem*>& items) {
            return il2cpp::array_new<app::AwardSteamAchievementItem__Array>(get_class(), items);
        }
    } // namespace AwardSteamAchievementItem
} // namespace app::classes::types
