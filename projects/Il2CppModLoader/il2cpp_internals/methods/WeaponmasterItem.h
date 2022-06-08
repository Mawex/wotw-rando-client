using namespace app;

namespace app::methods::WeaponmasterItem {
IL2CPP_REGISTER_METHOD(0x004173F0, MessageProvider *, get_ItemName, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x005712D0, MessageProvider *, get_ItemDescription, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571410, MessageProvider *, get_ItemNextLevelDescription, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571550, int32_t, get_DescriptionLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571640, int32_t, get_NextDescriptionLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571730, Texture2D *, get_ItemIcon, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571750, int32_t, get_DisplayLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571790, int32_t, get_ItemCurrentLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x005717D0, int32_t, get_ItemMaxLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571800, bool, get_IsLocked, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571910, bool, get_MissingRequiredAbility, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571AB0, bool, get_MissingRequiredCondition, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571BB0, bool, get_IsOwned, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571C10, bool, get_IsAffordable, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571BB0, bool, get_IsMaxLevel, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571D50, bool, get_IsUpgradable, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571D80, bool, get_UsesEnergy, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00571DF0, bool, TryPurchase, (WeaponmasterItem * __this, Action_1_MessageProvider_ * ShowHint, UISoundSettingsAsset * Sounds, ShopKeeperHints * Hints));
IL2CPP_REGISTER_METHOD(0x00572220, void, DoPurchase, (WeaponmasterItem * __this, PurchaseContext * context));
IL2CPP_REGISTER_METHOD(0x00572750, float, GetAllUpgradesProgress, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x00572780, int32_t, GetCostForLevel, (WeaponmasterItem * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x00572910, float, get_GameModeBasedCostMultiplier, (WeaponmasterItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WeaponmasterItem * __this));
}
