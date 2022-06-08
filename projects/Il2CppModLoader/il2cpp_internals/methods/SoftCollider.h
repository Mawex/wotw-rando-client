#include <interception_macros.h>

namespace app::methods::SoftCollider {
IL2CPP_REGISTER_METHOD(0x00EE29E0, void, OnEnable, (SoftCollider * __this));
IL2CPP_REGISTER_METHOD(0x00EE2AF0, void, OnTriggerEnter, (SoftCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00EE2C00, void, OnTriggerStay, (SoftCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00EE2D10, void, OnTriggerExit, (SoftCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00EE2DB0, bool, Collide, (SoftCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00EE33F0, void, __ctor, (SoftCollider * __this));
}
