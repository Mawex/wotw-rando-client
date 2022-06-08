#include <interception_macros.h>

namespace app::methods::TriggerColliderCallback {
IL2CPP_REGISTER_METHOD(0x00B13DA0, void, OnTriggerEnter, (TriggerColliderCallback * __this, Collider * c));
IL2CPP_REGISTER_METHOD(0x00B13DC0, void, OnTriggerStay, (TriggerColliderCallback * __this, Collider * c));
IL2CPP_REGISTER_METHOD(0x00B13DE0, void, OnTriggerExit, (TriggerColliderCallback * __this, Collider * c));
IL2CPP_REGISTER_METHOD(0x00B13E00, void, __ctor, (TriggerColliderCallback * __this));
}
