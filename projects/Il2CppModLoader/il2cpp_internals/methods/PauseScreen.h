#include <interception_macros.h>

namespace app::methods::PauseScreen {
IL2CPP_REGISTER_METHOD(0x0044A9D0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044AA50, void, Awake, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044AB20, void, OnDestroy, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044AD20, void, OnBackPressed, (PauseScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04769288, PauseScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044AF50, void, Hide, (PauseScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x0044AF80, void, DeregisterCallbacks, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044B250, void, HideImmediate, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044B280, void, Show, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044B510, void, RegisterCallbacks, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044B7E0, void, ShowImmediate, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044B820, void, OnNavigate, (PauseScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04746978, PauseScreen_OnNavigate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044B910, void, OnShow, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044BB40, void, OnPressed, (PauseScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D9F0, PauseScreen_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044BB70, void, OnPostTimeSlicedEnable, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x0044BC80, void, OnInstantiate, (PauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PauseScreen * __this));
}
