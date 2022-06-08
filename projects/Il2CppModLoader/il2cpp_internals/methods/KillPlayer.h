using namespace app;

namespace app::methods::KillPlayer {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (KillPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00E743F0, void, OnTriggerEnter, (KillPlayer * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00E74480, void, OnCollisionEnter, (KillPlayer * __this, Collision * other));
IL2CPP_REGISTER_METHOD(0x00E744C0, void, DealDamage, (KillPlayer * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (KillPlayer * __this));
}
