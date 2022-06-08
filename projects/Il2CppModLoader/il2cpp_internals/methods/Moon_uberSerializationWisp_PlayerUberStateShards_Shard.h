#include <interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateShards_Shard {
IL2CPP_REGISTER_METHOD(0x00F41E60, void, __ctor, (PlayerUberStateShards_Shard * __this, SpiritShardType__Enum type, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F420B0, void, Save, (PlayerUberStateShards_Shard * __this, UberStateArchive * archive));
IL2CPP_REGISTER_METHOD(0x00F420C0, void, Load, (PlayerUberStateShards_Shard * __this, UberStateArchive * archive));
IL2CPP_REGISTER_METHOD(0x00F42120, void, Serialize, (PlayerUberStateShards_Shard * __this, UberStateArchive * archive));
IL2CPP_REGISTER_METHOD(0x0052B590, SpiritShardType__Enum, get_Type, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F421C0, void, set_Type, (PlayerUberStateShards_Shard * __this, SpiritShardType__Enum value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Level, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F421D0, void, set_Level, (PlayerUberStateShards_Shard * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F421E0, int32_t, get_DisplayLevel, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F421F0, int32_t, get_MaxLevel, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42350, int32_t, get_UpgradeCost, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsNew, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F424F0, void, set_IsNew, (PlayerUberStateShards_Shard * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00533160, bool, get_Gained, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42500, void, set_Gained, (PlayerUberStateShards_Shard * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F42510, float, get_GameModeBasedCostMultiplier, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F425D0, int32_t, GetCostForLevel, (PlayerUberStateShards_Shard * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x00F427F0, bool, get_UpgradeAffordable, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42990, bool, get_InitialPurchaseAffordable, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42AD0, bool, get_Upgradable, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42BD0, bool, get_VisibleInShop, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42D10, bool, get_PurchasableInShop, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F42E50, State *, get_OnState, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F430B0, State *, get_OffState, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_EquipOnStart, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F43320, void, set_EquipOnStart, (PlayerUberStateShards_Shard * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Index, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F43330, void, set_Index, (PlayerUberStateShards_Shard * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F43340, bool, get_Equipped, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F43350, void, Equip, (PlayerUberStateShards_Shard * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00F433B0, void, Unequip, (PlayerUberStateShards_Shard * __this));
IL2CPP_REGISTER_METHOD(0x00F43410, void, RunSetDirtyCallback, (PlayerUberStateShards_Shard * __this));
}
