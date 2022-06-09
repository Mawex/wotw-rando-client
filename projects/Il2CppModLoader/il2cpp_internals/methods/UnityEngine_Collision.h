#include <interception_macros.h>

namespace app::methods::UnityEngine::Collision {
IL2CPP_REGISTER_METHOD(0x030A0120, ContactPoint__Array *, GetContacts_Internal, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x030A0130, Vector3, get_relativeVelocity, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F234C0, Rigidbody *, get_rigidbody, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F22F90, Collider *, get_collider, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x030A0150, Transform *, get_transform, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x030A0230, GameObject *, get_gameObject, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F22020, int32_t, get_contactCount, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x030A0310, ContactPoint__Array *, get_contacts, (app::Collision * this_ptr));
IL2CPP_REGISTER_METHOD(0x030A03C0, ContactPoint, GetContact, (app::Collision * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0475A870, Collision_GetContact__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030A0520, Vector3, get_impulse, (app::Collision * this_ptr));
}
