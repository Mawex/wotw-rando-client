#include <interception_macros.h>

namespace app::methods::SpiderBatPlatformMovement {
IL2CPP_REGISTER_METHOD(0x0095DF10, void, set_IsDeathFalling, (SpiderBatPlatformMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0095DF20, bool, get_IsSuspended, (SpiderBatPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0095DF30, void, set_IsSuspended, (SpiderBatPlatformMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0095E220, bool, OnUpdate, (SpiderBatPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0095E240, void, OnSuspend, (SpiderBatPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0095E3C0, void, OnResume, (SpiderBatPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x0095E530, void, __ctor, (SpiderBatPlatformMovement * __this));
}
