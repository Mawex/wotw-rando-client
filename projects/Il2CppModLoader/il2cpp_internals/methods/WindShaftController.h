#include <interception_macros.h>

namespace app::methods::WindShaftController {
IL2CPP_REGISTER_METHOD(0x00578CD0, void, Awake, (WindShaftController * __this));
IL2CPP_REGISTER_METHOD(0x00578D60, void, OnDestroy, (WindShaftController * __this));
IL2CPP_REGISTER_METHOD(0x00578DE0, WindSegment *, FindPrevious, (WindShaftController * __this, WindSegment * windSegment));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WindShaftController * __this));
}
