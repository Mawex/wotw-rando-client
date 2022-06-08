#include <interception_macros.h>

namespace app::methods::UpgradableShardItem {
IL2CPP_REGISTER_METHOD(0x013AE4A0, PlayerUberStateShards_Shard *, get_ShardState, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AE670, MessageProvider *, get_ItemName, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AE750, MessageProvider *, get_ItemDescription, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AE890, MessageProvider *, get_ItemNextLevelDescription, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEA20, Texture2D *, get_ItemIcon, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEB90, int32_t, get_DisplayLevel, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEBB0, int32_t, get_ItemCurrentLevel, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowNextLevel, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEBD0, int32_t, get_ItemMaxLevel, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEC00, bool, get_IsVisible, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEC30, bool, get_IsLocked, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEC60, bool, get_IsOwned, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AECC0, bool, get_IsAffordable, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEC60, bool, get_IsMaxLevel, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AEC00, bool, get_IsUpgradable, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AECF0, bool, TryPurchase, (UpgradableShardItem * __this, Action_1_MessageProvider_ * ShowHint, UISoundSettingsAsset * Sounds, ShopKeeperHints * Hints));
IL2CPP_REGISTER_METHOD(0x013AEF00, void, DoPurchase, (UpgradableShardItem * __this, PurchaseContext * context));
IL2CPP_REGISTER_METHOD(0x013AF2A0, int32_t, GetCostForLevel, (UpgradableShardItem * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x013AF2D0, float, get_GameModeBasedCostMultiplier, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UpgradableShardItem * __this));
IL2CPP_REGISTER_METHOD(0x013AF390, bool, _get_ShardState_b__2_0, (UpgradableShardItem * __this, PlayerUberStateShards_Shard * x));
IL2CPP_REGISTER_METHODINFO(0x0470E4A8, UpgradableShardItem__get_ShardState_b__2_0__MethodInfo);
}
