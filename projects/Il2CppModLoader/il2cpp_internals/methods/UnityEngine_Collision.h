#include <interception_macros.h>

namespace app::methods::UnityEngine::Collision {
IL2CPP_REGISTER_METHOD(0x030A0120, ContactPoint__Array *, GetContacts_Internal, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x030A0130, Vector3, get_relativeVelocity, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x01F234C0, Rigidbody *, get_rigidbody, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x01F22F90, Collider *, get_collider, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x030A0150, Transform *, get_transform, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x030A0230, GameObject *, get_gameObject, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x01F22020, int32_t, get_contactCount, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x030A0310, ContactPoint__Array *, get_contacts, (Collision * __this));
IL2CPP_REGISTER_METHOD(0x030A03C0, ContactPoint, GetContact, (Collision * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0475A870, Collision_GetContact__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030A0520, Vector3, get_impulse, (Collision * __this));
}
