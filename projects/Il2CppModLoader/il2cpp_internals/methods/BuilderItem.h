#include <interception_macros.h>

namespace app::methods::BuilderItem {
IL2CPP_REGISTER_METHOD(0x004173F0, MessageProvider *, get_ItemName, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00818320, MessageProvider *, get_ItemDescription, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00818460, MessageProvider *, get_ItemNextLevelDescription, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x008185A0, int32_t, get_DescriptionLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00818690, int32_t, get_NextDescriptionLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowNextLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417880, Texture2D *, get_ItemIcon, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x004178A0, int32_t, get_DisplayLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x004178E0, int32_t, get_ItemCurrentLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ItemMaxLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsVisible, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417930, bool, get_IsLocked, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsOwned, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00818780, bool, get_IsAffordable, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417970, bool, get_IsMaxLevel, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUpgradable, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesEnergy, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x008188D0, bool, TryPurchase, (BuilderItem * __this, Action_1_MessageProvider_ * ShowHint, UISoundSettingsAsset * Sounds, ShopKeeperHints * Hints));
IL2CPP_REGISTER_METHOD(0x00818B90, void, DoPurchase, (BuilderItem * __this, PurchaseContext * context));
IL2CPP_REGISTER_METHOD(0x00417EC0, float, GetAllProjectsProgress, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x00818F40, int32_t, GetCostForLevel, (BuilderItem * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GameModeBasedCostMultiplier, (BuilderItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BuilderItem * __this));
}
