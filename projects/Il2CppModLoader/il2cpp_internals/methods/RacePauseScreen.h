#include <interception_macros.h>

namespace app::methods::RacePauseScreen {
IL2CPP_REGISTER_METHOD(0x007118D0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711950, void, Awake, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711A20, void, OnDestroy, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711C20, void, OnBackPressed, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A6A8, RacePauseScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (RacePauseScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711CD0, void, Show, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711D10, void, ShowImmediate, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711D50, void, OnShow, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711DD0, void, OnPostTimeSlicedEnable, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x00711EE0, void, OnInstantiate, (RacePauseScreen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RacePauseScreen * __this));
}
