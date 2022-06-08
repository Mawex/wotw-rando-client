#include <interception_macros.h>

namespace app::methods::OneWayCapsuleCollider {
IL2CPP_REGISTER_METHOD(0x00615290, void, OnValidate, (OneWayCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x00615370, void, Start, (OneWayCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x006159C0, void, OnTriggerStay, (OneWayCapsuleCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00615F70, void, OnTriggerExit, (OneWayCapsuleCollider * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00616150, Vector3, get_CollisionDirection, (OneWayCapsuleCollider * __this));
IL2CPP_REGISTER_METHODINFO(0x047725B8, OneWayCapsuleCollider_get_CollisionDirection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00616370, Vector3, get_CapsuleDirection, (OneWayCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x00616460, bool, IsInLayerMask, (OneWayCapsuleCollider * __this, int32_t layer, LayerMask layermask));
IL2CPP_REGISTER_METHOD(0x00616480, void, OnDrawGizmosSelected, (OneWayCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x00617040, void, __ctor, (OneWayCapsuleCollider * __this));
}
