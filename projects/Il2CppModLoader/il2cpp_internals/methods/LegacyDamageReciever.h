#include <interception_macros.h>

namespace app::methods::LegacyDamageReciever {
IL2CPP_REGISTER_METHOD(0x00A17920, void, OnValidate, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A17930, void, OnEnable, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A179C0, void, OnDisable, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A17A50, float, get_NormalizedHealth, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A17920, void, OnPoolSpawned, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A17A60, void, Awake, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A17B70, void, OnRecieveDamage, (LegacyDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A18090, bool, get_NoHealthLeft, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A180A0, void, Serialize, (LegacyDamageReciever * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A18140, void, UpdateActive, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimedRespawn, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A18190, void, RegisterRespawnDelegate, (LegacyDamageReciever * __this, Action * onRespawn));
IL2CPP_REGISTER_METHOD(0x00A183E0, void, SetHealth, (LegacyDamageReciever * __this, float health));
IL2CPP_REGISTER_METHOD(0x008663E0, void, SetMaxHealth, (LegacyDamageReciever * __this, float maxHealth));
IL2CPP_REGISTER_METHOD(0x00A183F0, String *, get_StressTestName, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A18470, void, StartStressTest, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A187F0, void, StressTestUpdate, (LegacyDamageReciever * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00736620, StressTestStatus__Enum, get_StressTestStatus, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, set_StressTestStatus, (LegacyDamageReciever * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00A18870, bool, get_CanExecuteStressTest, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A18A20, void, __ctor, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (LegacyDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (LegacyDamageReciever * __this));
}
