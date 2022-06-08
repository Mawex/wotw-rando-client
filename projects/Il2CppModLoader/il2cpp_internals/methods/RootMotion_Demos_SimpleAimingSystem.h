#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::SimpleAimingSystem {
IL2CPP_REGISTER_METHOD(0x02230240, void, Start, (SimpleAimingSystem * __this));
IL2CPP_REGISTER_METHOD(0x02230300, void, LateUpdate, (SimpleAimingSystem * __this));
IL2CPP_REGISTER_METHOD(0x022304F0, void, Pose, (SimpleAimingSystem * __this));
IL2CPP_REGISTER_METHOD(0x02230AA0, void, LimitAimTarget, (SimpleAimingSystem * __this));
IL2CPP_REGISTER_METHOD(0x02230EA0, void, DirectCrossFade, (SimpleAimingSystem * __this, String * state, float target));
IL2CPP_REGISTER_METHOD(0x022310A0, void, __ctor, (SimpleAimingSystem * __this));
}
