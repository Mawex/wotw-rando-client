using namespace app;

namespace app::methods::ExplodingRigidbody {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (ExplodingRigidbody * __this));
IL2CPP_REGISTER_METHOD(0x00987410, void, Start, (ExplodingRigidbody * __this));
IL2CPP_REGISTER_METHOD(0x009876D0, void, OnRecieveDamage, (ExplodingRigidbody * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00987C70, void, OnReceiveContext, (ExplodingRigidbody * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ExplodingRigidbody * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (ExplodingRigidbody * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (ExplodingRigidbody * __this));
}
