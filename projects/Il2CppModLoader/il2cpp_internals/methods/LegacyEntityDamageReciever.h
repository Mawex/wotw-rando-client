#include <interception_macros.h>

namespace app::methods::LegacyEntityDamageReciever {
IL2CPP_REGISTER_METHOD(0x00A210B0, void, OnValidate, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A211A0, void, Awake, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A21440, GameObject *, get_DisableTarget, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A214C0, void, OnPoolSpawned, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A21820, void, OnTriggerEnter, (LegacyEntityDamageReciever * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00A21AE0, SoundHost *, get_SoundHost, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A21BC0, void, OnRecieveDamage, (LegacyEntityDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A224F0, void, PlaySound, (LegacyEntityDamageReciever * __this, Event_1 * sound));
IL2CPP_REGISTER_METHOD(0x00A227E0, void, HandleFireShard, (LegacyEntityDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A230F0, void, CleanBurningEffectHooks, (LegacyEntityDamageReciever * __this, LimitedLifetime * effect));
IL2CPP_REGISTER_METHODINFO(0x0475FAD0, LegacyEntityDamageReciever_CleanBurningEffectHooks__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A232C0, void, StopBurningEffects, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A23570, void, HandleDamageBoostShard, (LegacyEntityDamageReciever * __this, Damage * * damage));
IL2CPP_REGISTER_METHOD(0x00A23690, void, HandleIceShard, (LegacyEntityDamageReciever * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A237E0, bool, CanDetonateProjectiles, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A23880, void, StressTestUpdate, (LegacyEntityDamageReciever * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00A239C0, void, OnRespawn, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A239D0, void, __ctor, (LegacyEntityDamageReciever * __this));
IL2CPP_REGISTER_METHOD(0x00A23DD0, void, __cctor, ());
}
