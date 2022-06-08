using namespace app;

namespace app::methods::EntityController {
IL2CPP_REGISTER_METHOD(0x00C8D800, Vector3, get_LastSeenSeinPosition, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00C8D820, void, set_LastSeenSeinPosition, (EntityController * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00C8D830, Enemy2D *, get_Enemy2D, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00C8D8F0, bool, get_NearSein, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00C8D9F0, void, OnValidate, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00C8DAE0, void, Awake, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (EntityController * __this, TextureAnimation * anim));
IL2CPP_REGISTER_METHOD(0x00C8DF10, void, OnRecieveDamage, (EntityController * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeached, (EntityController * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x005100F0, void, OnNearSeinEnter, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00B16F70, void, OnNearSeinExit, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00C8DFB0, void, OnSeinNearStay, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (EntityController * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (EntityController * __this));
}
