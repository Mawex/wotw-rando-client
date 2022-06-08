#include <interception_macros.h>

namespace app::methods::SeinLaunch {
IL2CPP_REGISTER_METHOD(0x01020FB0, void, OnSetReferenceToSein, (SeinLaunch * __this));
IL2CPP_REGISTER_METHOD(0x01021090, void, StartLaunch, (SeinLaunch * __this, Vector3 velocity));
IL2CPP_REGISTER_METHOD(0x010210E0, void, Hide, (SeinLaunch * __this));
IL2CPP_REGISTER_METHOD(0x01021110, void, Release, (SeinLaunch * __this, Vector3 position, float angle, Vector3 velocity));
IL2CPP_REGISTER_METHOD(0x005E1300, bool, ContinuePlayingRelease, (SeinLaunch * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C198, SeinLaunch_ContinuePlayingRelease__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010219B0, void, __ctor, (SeinLaunch * __this));
}
