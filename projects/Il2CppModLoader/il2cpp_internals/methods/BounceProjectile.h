using namespace app;

namespace app::methods::BounceProjectile {
IL2CPP_REGISTER_METHOD(0x00D3F910, void, FixedUpdate, (BounceProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00D3FA70, void, OnCollisionStay, (BounceProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00D3FF60, void, OnCollisionEnter, (BounceProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00D404B0, void, __ctor, (BounceProjectile * __this));
}
