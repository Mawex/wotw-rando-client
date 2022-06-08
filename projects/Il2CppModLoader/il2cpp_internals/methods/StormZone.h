#include <interception_macros.h>

namespace app::methods::StormZone {
IL2CPP_REGISTER_METHOD(0x0065CEC0, void, OnTriggerEnter, (StormZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0065CFA0, void, OnTriggerExit, (StormZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0065D070, void, FixedUpdate, (StormZone * __this));
IL2CPP_REGISTER_METHOD(0x0065D270, void, __ctor, (StormZone * __this));
}
