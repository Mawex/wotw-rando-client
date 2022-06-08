#include <interception_macros.h>

namespace app::methods::EntityControllerSM {
IL2CPP_REGISTER_METHOD(0x00C8E790, void, FixedUpdate, (EntityControllerSM * __this));
IL2CPP_REGISTER_METHOD(0x00C8EA10, void, OnAnimationEnd, (EntityControllerSM * __this, TextureAnimation * anim));
IL2CPP_REGISTER_METHOD(0x00C8EB00, void, OnRecieveDamage, (EntityControllerSM * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C8EC70, void, OnSpiritLeached, (EntityControllerSM * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C8EDE0, void, OnCollisionEnter, (EntityControllerSM * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C8EF40, void, OnCollisionStay, (EntityControllerSM * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00C8F0A0, void, OnCollisionExit, (EntityControllerSM * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowCurrentStateClassName, (EntityControllerSM * __this));
IL2CPP_REGISTER_METHOD(0x00C8F200, void, Serialize, (EntityControllerSM * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006C51F0, void, __ctor, (EntityControllerSM * __this));
}
