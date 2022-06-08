using namespace app;

namespace app::methods::EntityControllerBT {
IL2CPP_REGISTER_METHOD(0x00C8E0A0, void, FixedUpdate, (EntityControllerBT * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (EntityControllerBT * __this, TextureAnimation * anim));
IL2CPP_REGISTER_METHOD(0x00C8E230, void, OnRecieveDamage, (EntityControllerBT * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeached, (EntityControllerBT * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C8E440, void, OnCollisionEnter, (EntityControllerBT * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollisionStay, (EntityControllerBT * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollisionExit, (EntityControllerBT * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (EntityControllerBT * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00C8E640, void, __ctor, (EntityControllerBT * __this));
}
