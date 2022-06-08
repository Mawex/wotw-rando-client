#include <interception_macros.h>

namespace app::methods::JumpShotShield {
IL2CPP_REGISTER_METHOD(0x00E508D0, void, add_OnCollision, (JumpShotShield * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x00E509C0, void, remove_OnCollision, (JumpShotShield * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x00E50AB0, void, OnTriggerEnter, (JumpShotShield * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E50B50, void, __ctor, (JumpShotShield * __this));
}
