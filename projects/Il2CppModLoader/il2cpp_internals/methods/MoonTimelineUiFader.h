#include <interception_macros.h>

namespace app::methods::MoonTimelineUiFader {
IL2CPP_REGISTER_METHOD(0x01473C40, bool, get_IsPlaying, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473C80, bool, get_IsFadingOut, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x013163D0, bool, get_IsFadingIn, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473CA0, void, FadeIn, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473E60, void, FadeOut, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473EE0, void, FadeInImmediate, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473F40, void, FadeOutImmediate, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473FA0, void, Stop, (MoonTimelineUiFader * __this));
IL2CPP_REGISTER_METHOD(0x01473FE0, void, DisableAndEnableNextFrame, (MoonTimelineUiFader * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x01474110, void, EnableAndDisableNextFrame, (MoonTimelineUiFader * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x01474240, void, __ctor, (MoonTimelineUiFader * __this));
}
