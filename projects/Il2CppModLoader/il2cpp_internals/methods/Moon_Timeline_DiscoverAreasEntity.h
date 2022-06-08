#include <interception_macros.h>

namespace app::methods::Moon::Timeline::DiscoverAreasEntity {
IL2CPP_REGISTER_METHOD(0x00764800, SpellUIExperience *, get_Experience, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHOD(0x00764930, void, ReleaseTexture, (DiscoverAreasEntity * __this, AreaMapCanvas * canvas));
IL2CPP_REGISTER_METHOD(0x00764C30, void, ChangeState, (DiscoverAreasEntity * __this, DiscoverAreasEntity_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00765210, void, OnUpdateEntity, (DiscoverAreasEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x007659F0, void, OnStartPlayback, (DiscoverAreasEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00765B80, void, SetCursorPosition, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHOD(0x00765C40, bool, HasFinished, (DiscoverAreasEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00765D00, void, __ctor, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHOD(0x00765DF0, void, _ChangeState_b__22_0, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A198, DiscoverAreasEntity__ChangeState_b__22_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00765EB0, void, _OnStartPlayback_b__24_0, (DiscoverAreasEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FD40, DiscoverAreasEntity__OnStartPlayback_b__24_0__MethodInfo);
}
