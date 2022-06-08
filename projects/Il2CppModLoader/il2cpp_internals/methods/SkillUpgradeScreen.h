#include <interception_macros.h>

namespace app::methods::SkillUpgradeScreen {
IL2CPP_REGISTER_METHOD(0x006B88C0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x006B8940, CleverMenuItemSelectionManager *, get_NavigationManager, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_PurchasedSkillUpgrade, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8970, void, set_PurchasedSkillUpgrade, (SkillUpgradeScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417920, MenuTabBackground__Enum, get_BackgroundMode, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8980, void, HideExistingHint, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8A70, void, ShowHint, (SkillUpgradeScreen * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x006B8C90, void, Awake, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8D60, void, OnDestroy, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8E00, void, OnNewItemHighlighted, (SkillUpgradeScreen * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x04711910, SkillUpgradeScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B8E10, void, OnItemActivatedCallback, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04746678, SkillUpgradeScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B8EC0, SkillUpgradeShopUIItem *, get_SelectedSkillUpgradeUIItem, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8FC0, UpgradeAbilityItem *, get_SelectedUpgradeItem, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9090, bool, get_IsSuspended, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B90A0, void, set_IsSuspended, (SkillUpgradeScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006B90B0, SuspendableMask__Enum, get_Mask, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B90C0, void, set_Mask, (SkillUpgradeScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x006B9180, void, Hide, (SkillUpgradeScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9420, void, Show, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9670, void, FocusOnPreviousSelection, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B98D0, void, FixedUpdate, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9A90, void, OnCategoryChanged, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9D20, void, UpdateContextCanvasShards, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9EA0, void, PopulateInventoryCanvasWithUpgrades, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BA290, PlayerUberStateShards_Shard *, GetActualInventoryItem, (SkillUpgradeScreen * __this, SpiritShardType__Enum typ));
IL2CPP_REGISTER_METHOD(0x006BA480, void, OnPostTimeSlicedEnable, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BA590, void, Init, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BA8F0, void, OnInstantiate, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, GameObject *, get_EffectTarget, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C50, Event_1 *, get_PurchaseCompleteSound, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C30, Event_1 *, get_PurchaseBeginSound, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C70, RTPC *, get_PurchaseRTPC, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BAF50, void, PurchaseUpdate, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BB1D0, bool, CanPurchase, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BB440, void, CompletePurchase, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BB970, float, GetAllUpgradesProgress, (SkillUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BBAB0, void, __ctor, (SkillUpgradeScreen * __this));
}
