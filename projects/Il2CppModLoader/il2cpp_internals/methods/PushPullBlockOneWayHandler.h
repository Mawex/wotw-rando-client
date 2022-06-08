#include <interception_macros.h>

namespace app::methods::PushPullBlockOneWayHandler {
IL2CPP_REGISTER_METHOD(0x00E844A0, Rigidbody *, get_Body, (PushPullBlockOneWayHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E84570, void, OnTriggerEnter, (PushPullBlockOneWayHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E84570, void, OnTriggerStay, (PushPullBlockOneWayHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E84580, void, OnTriggerExit, (PushPullBlockOneWayHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E84680, void, OnTrigger, (PushPullBlockOneWayHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E848F0, void, __ctor, (PushPullBlockOneWayHandler * __this));
}
