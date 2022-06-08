using namespace app;

namespace app::methods::ApplyForceOnDamage {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (ApplyForceOnDamage * __this));
IL2CPP_REGISTER_METHOD(0x00505D80, void, OnRecieveDamage, (ApplyForceOnDamage * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00506050, void, OnReceiveContext, (ApplyForceOnDamage * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00506160, void, __ctor, (ApplyForceOnDamage * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (ApplyForceOnDamage * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (ApplyForceOnDamage * __this));
}
