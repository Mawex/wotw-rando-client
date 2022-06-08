#include <interception_macros.h>

namespace app::methods::GardenerItem {
IL2CPP_REGISTER_METHOD(0x004173F0, MessageProvider *, get_ItemName, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417410, MessageProvider *, get_ItemDescription, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417550, MessageProvider *, get_ItemNextLevelDescription, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417690, int32_t, get_DescriptionLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417780, int32_t, get_NextDescriptionLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417880, Texture2D *, get_ItemIcon, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x004178A0, int32_t, get_DisplayLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x004178E0, int32_t, get_ItemCurrentLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ItemMaxLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417930, bool, get_IsLocked, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsOwned, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x004179B0, bool, get_IsAffordable, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsMaxLevel, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUpgradable, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x004179F0, bool, TryPurchase, (GardenerItem * __this, Action_1_MessageProvider_ * ShowHint, UISoundSettingsAsset * Sounds, ShopKeeperHints * Hints));
IL2CPP_REGISTER_METHOD(0x00417BB0, void, DoPurchase, (GardenerItem * __this, PurchaseContext * context));
IL2CPP_REGISTER_METHOD(0x00417EC0, float, GetAllProjectsProgress, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x00417EF0, int32_t, GetCostForLevel, (GardenerItem * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GameModeBasedCostMultiplier, (GardenerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GardenerItem * __this));
}
