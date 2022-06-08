#include <interception_macros.h>

namespace app::methods::EntityPlatformingMovement {
IL2CPP_REGISTER_METHOD(0x00C9E760, void, OnAwake, (EntityPlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C9E8D0, void, Start, (EntityPlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C9EB60, void, ApplyKickback, (EntityPlatformingMovement * __this, float kickbackMultiplier));
IL2CPP_REGISTER_METHOD(0x00C9EBA0, void, ApplyKickup, (EntityPlatformingMovement * __this, float strength));
IL2CPP_REGISTER_METHOD(0x00C9EBE0, void, OnRecieveDamage, (EntityPlatformingMovement * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C9ED50, void, OnCollisionEnter, (EntityPlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C9ED50, void, OnCollisionStay, (EntityPlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C9ED80, void, MovingGroundCollision, (EntityPlatformingMovement * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C9EF30, void, FixedUpdate, (EntityPlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00C9F580, void, __ctor, (EntityPlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (EntityPlatformingMovement * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (EntityPlatformingMovement * __this));
}
