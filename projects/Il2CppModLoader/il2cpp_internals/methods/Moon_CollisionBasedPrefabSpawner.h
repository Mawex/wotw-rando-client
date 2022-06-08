using namespace app;

namespace app::methods::Moon::CollisionBasedPrefabSpawner {
IL2CPP_REGISTER_METHOD(0x00CC49C0, void, Awake, (CollisionBasedPrefabSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00CC4A50, void, OnCollisionEnter, (CollisionBasedPrefabSpawner * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00CC4F00, void, InstantiatePrefab, (CollisionBasedPrefabSpawner * __this, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CollisionBasedPrefabSpawner * __this));
}
