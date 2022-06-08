using namespace app;

namespace app::methods::DamagePrefabSpawner {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (DamagePrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00DC83D0, void, OnRecieveDamage, (DamagePrefabSpawner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamagePrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DamagePrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DamagePrefabSpawner * __this));
}
