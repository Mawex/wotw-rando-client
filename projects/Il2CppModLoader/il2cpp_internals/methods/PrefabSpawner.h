using namespace app;

namespace app::methods::PrefabSpawner {
IL2CPP_REGISTER_METHOD(0x00C6EA00, void, DynamicPrefabProvider, (PrefabSpawner * __this, List_1_DynamicInstantiationDescriptor_ * descriptors));
IL2CPP_REGISTER_METHOD(0x00C6EC80, void, Start, (PrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C6ECA0, GameObject *, Spawn, (PrefabSpawner * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C6F300, void, DestroyInstance, (PrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C6F3E0, void, __ctor, (PrefabSpawner * __this));
}
