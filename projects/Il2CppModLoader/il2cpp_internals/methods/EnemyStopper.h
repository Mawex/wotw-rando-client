using namespace app;

namespace app::methods::EnemyStopper {
IL2CPP_REGISTER_METHOD(0x00C85E40, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C85F10, bool, InsideEnemyStopper, (Vector3 position, Vector3 direction, bool * doesContain));
IL2CPP_REGISTER_METHOD(0x00C86210, bool, InsideEnemyStopper, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C863E0, void, Awake, (EnemyStopper * __this));
IL2CPP_REGISTER_METHOD(0x00C86620, void, OnDestroy, (EnemyStopper * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (EnemyStopper * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EnemyStopper * __this));
IL2CPP_REGISTER_METHOD(0x00C86700, void, __cctor, (MethodInfo * method));
}
