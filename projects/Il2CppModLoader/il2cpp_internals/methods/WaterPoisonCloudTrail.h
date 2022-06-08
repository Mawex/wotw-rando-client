using namespace app;

namespace app::methods::WaterPoisonCloudTrail {
IL2CPP_REGISTER_METHOD(0x008DD710, void, SetDestroyOnCleared, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x005D6890, void, PauseSpawning, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008C1CB0, void, ResumeSpawning, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DD7C0, void, Clear, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DD8C0, void, Awake, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DD9A0, void, FixedUpdate, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DDE60, void, LateUpdate, (WaterPoisonCloudTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DDED0, void, SpawnAt, (WaterPoisonCloudTrail * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008DE000, void, __ctor, (WaterPoisonCloudTrail * __this));
}
