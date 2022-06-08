using namespace app;

namespace app::methods::StatsScreen {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD150, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009BD1D0, CleverMenuItemSelectionManager *, get_Navigation, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD1F0, StatUISlot *, get_SelectedItem, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD2E0, void, Awake, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD410, void, OnDestroy, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD5D0, void, Hide, (StatsScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00950610, void, ShowImmediate, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009503F0, void, HideImmediate, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD610, void, Show, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BD770, void, OnBackPressed, (StatsScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A0E0, StatsScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BD940, void, PopulateItems, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BDA00, void, PopulateItems, (StatsScreen * __this, List_1_StatSetting_ * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (StatsScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BDC60, void, set_Mask, (StatsScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x009BDD20, void, OnPostTimeSlicedEnable, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BDE30, void, OnInstantiate, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BE2F0, void, FixedUpdate, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BE3D0, void, UpdateLabel, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BE770, void, PreviousFilter, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BE790, void, NextFilter, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BE7B0, void, UpdateScreenFilter, (StatsScreen * __this));
IL2CPP_REGISTER_METHOD(0x009BEA80, StatSetting_StatDisplayCategory__Enum, GetPreviousFilter, (StatsScreen * __this, StatSetting_StatDisplayCategory__Enum filter));
IL2CPP_REGISTER_METHOD(0x009BEA90, StatSetting_StatDisplayCategory__Enum, GetNextFilter, (StatsScreen * __this, StatSetting_StatDisplayCategory__Enum filter));
IL2CPP_REGISTER_METHOD(0x009BEAA0, MessageProvider *, GetFilterMessageProvider, (StatsScreen * __this, StatSetting_StatDisplayCategory__Enum filter));
IL2CPP_REGISTER_METHOD(0x009BECA0, void, __ctor, (StatsScreen * __this));
}
