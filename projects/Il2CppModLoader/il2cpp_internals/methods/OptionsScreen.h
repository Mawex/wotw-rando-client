#include <interception_macros.h>

namespace app::methods::OptionsScreen {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsDarkBackground, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, MenuTabBackground__Enum, get_BackgroundMode, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_BackgroundMode, (OptionsScreen * __this, MenuTabBackground__Enum value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617D50, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00617DD0, void, Awake, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617EA0, void, OnDestroy, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, SetDirty, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617EC0, void, FixedUpdate, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00617ED0, void, Hide, (OptionsScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00618120, void, ShowImmediate, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618170, void, PreWarmMenu, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x006181B0, void, HideImmediate, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x006181E0, void, RegisterCallbacks, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618420, void, DeregisterCallbacks, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618690, void, Show, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x006187D0, void, Refresh, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618990, void, OnBackPressed, (OptionsScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04715AE8, OptionsScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (OptionsScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618B00, void, set_Mask, (OptionsScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00618BB0, void, OnPostTimeSlicedEnable, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618CC0, void, OnInstantiate, (OptionsScreen * __this));
IL2CPP_REGISTER_METHOD(0x00618EF0, void, __ctor, (OptionsScreen * __this));
}
