#include <interception_macros.h>

namespace app::methods::Reflector {
IL2CPP_REGISTER_METHOD(0x008FC8E0, void, OnTriggerEnter, (Reflector * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x008FC8E0, void, OnTriggerStay, (Reflector * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x008FC970, void, OnCollisionEnter, (Reflector * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x008FC970, void, OnCollisionStay, (Reflector * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x008FC9B0, void, OnCollision, (Reflector * __this, GameObject * collidingGameObject));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStick, (Reflector * __this, SpiritFlameProjectile * spiritFlameProjectile));
IL2CPP_REGISTER_METHOD(0x008FCE70, void, __ctor, (Reflector * __this));
}
