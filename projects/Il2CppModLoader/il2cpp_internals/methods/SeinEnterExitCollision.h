#include <interception_macros.h>

namespace app::methods::SeinEnterExitCollision {
IL2CPP_REGISTER_METHOD(0x00AD0BD0, void, OnTriggerEnter, (SeinEnterExitCollision * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00AD0BE0, void, OnTriggerExit, (SeinEnterExitCollision * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00AD0BF0, void, OnCollisionEnter, (SeinEnterExitCollision * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00AD0C20, void, OnCollisionExit, (SeinEnterExitCollision * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00AD0C50, void, OnEnter, (SeinEnterExitCollision * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00AD0D90, void, OnExit, (SeinEnterExitCollision * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00AD0ED0, bool, IsPlayer, (SeinEnterExitCollision * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x005D1790, void, __ctor, (SeinEnterExitCollision * __this));
}
