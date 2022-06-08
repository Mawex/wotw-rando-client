#include <interception_macros.h>

namespace app::methods::WaterPoisonTrail {
IL2CPP_REGISTER_METHOD(0x008DE010, Damage *, GetDamageForPosition, (WaterPoisonTrail * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008DE330, bool, GetNearestBlob, (WaterPoisonTrail * __this, Vector3 position, WaterPoisonTrail_DamagePoint * damagePoint));
IL2CPP_REGISTER_METHOD(0x008DE600, void, Awake, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DE830, void, OnEnable, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DE900, void, OnDisable, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DE9C0, void, FixedUpdate, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DF0A0, void, Clear, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x00873B70, void, SetDestroyOnCleared, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DF2F0, void, PauseSpawning, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DF4E0, void, ResumeSpawning, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DF7F0, void, AddDamagePoint, (WaterPoisonTrail * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008DF9F0, void, DestroyTrail, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DFAE0, void, OnDrawGizmos, (WaterPoisonTrail * __this));
IL2CPP_REGISTER_METHOD(0x008DFC00, void, __ctor, (WaterPoisonTrail * __this));
}
