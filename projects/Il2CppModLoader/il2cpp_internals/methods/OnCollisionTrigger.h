using namespace app;

namespace app::methods::OnCollisionTrigger {
IL2CPP_REGISTER_METHOD(0x00610F80, void, OnCollisionEnter, (OnCollisionTrigger * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00611140, void, OnCollisionExit, (OnCollisionTrigger * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00611300, void, OnTriggerEnter, (OnCollisionTrigger * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x006114B0, void, OnTriggerExit, (OnCollisionTrigger * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00611660, void, OnTriggerStay, (OnCollisionTrigger * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (OnCollisionTrigger * __this));
}
