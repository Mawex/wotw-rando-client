using namespace app;

namespace app::methods::RigidbodyReactToDamage {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (RigidbodyReactToDamage * __this));
IL2CPP_REGISTER_METHOD(0x01351160, void, OnRecieveDamage, (RigidbodyReactToDamage * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x013513C0, void, __ctor, (RigidbodyReactToDamage * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (RigidbodyReactToDamage * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (RigidbodyReactToDamage * __this));
}
