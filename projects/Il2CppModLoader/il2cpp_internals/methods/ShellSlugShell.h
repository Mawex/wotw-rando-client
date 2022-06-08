using namespace app;

namespace app::methods::ShellSlugShell {
IL2CPP_REGISTER_METHOD(0x005B3ED0, void, ShatterEffectPrefabsInstantiation, (ShellSlugShell * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x005B4110, void, SetForce, (ShellSlugShell * __this, Vector2 velocity, float angularVelocity));
IL2CPP_REGISTER_METHOD(0x005B43D0, void, Awake, (ShellSlugShell * __this));
IL2CPP_REGISTER_METHOD(0x005B4550, void, OnRecieveDamage, (ShellSlugShell * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x005B4940, void, Shatter, (ShellSlugShell * __this));
IL2CPP_REGISTER_METHOD(0x005B4BC0, void, PlayShake, (ShellSlugShell * __this));
IL2CPP_REGISTER_METHOD(0x005B4CA0, void, OnCollisionEnter, (ShellSlugShell * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x005B4D00, void, __ctor, (ShellSlugShell * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (ShellSlugShell * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (ShellSlugShell * __this));
}
