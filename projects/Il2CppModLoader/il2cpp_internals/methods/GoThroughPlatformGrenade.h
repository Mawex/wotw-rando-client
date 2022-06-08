#include <interception_macros.h>

namespace app::methods::GoThroughPlatformGrenade {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (GoThroughPlatformGrenade * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (GoThroughPlatformGrenade * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007FC170, bool, get_IsFalling, (GoThroughPlatformGrenade * __this));
IL2CPP_REGISTER_METHOD(0x007FC1F0, void, OnEnable, (GoThroughPlatformGrenade * __this));
IL2CPP_REGISTER_METHOD(0x007FC220, void, SetFallingState, (GoThroughPlatformGrenade * __this, bool isFalling));
IL2CPP_REGISTER_METHOD(0x007FC2E0, void, FixedUpdate, (GoThroughPlatformGrenade * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (GoThroughPlatformGrenade * __this));
}
