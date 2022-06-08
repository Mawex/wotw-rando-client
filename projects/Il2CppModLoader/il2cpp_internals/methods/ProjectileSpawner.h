#include <interception_macros.h>

namespace app::methods::ProjectileSpawner {
IL2CPP_REGISTER_METHOD(0x00C7C010, Vector3, get_Position, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00849480, float, get_TimeSinceLastShot, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C0A0, void, set_TimeSinceLastShot, (ProjectileSpawner * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, GetPrewarmAmount, (ProjectileSpawner * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x00C7C0B0, void, Awake, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C230, void, OnDestroy, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C2D0, void, Start, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C3C0, bool, get_TimerPaused, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C490, void, set_TimerPaused, (ProjectileSpawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C7C560, void, OnEnable, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C570, void, OnDisable, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C5A0, void, SubscribeToTimelineTriggers, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7C810, void, UnsubscribeToTimelineTriggers, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7CA80, void, OnSpawnEvent, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHODINFO(0x04746480, ProjectileSpawner_OnSpawnEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C7CA80, void, OnTimedTrigger, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7CA90, Projectile *, SpawnProjectile, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7CE50, GameObject *, SpawnProjectileGameObject, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7D2F0, void, AimAt, (ProjectileSpawner * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x00C7D540, void, FixedUpdate, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsSuspended, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x006B8970, void, set_IsSuspended, (ProjectileSpawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFB70, SuspendableMask__Enum, get_Mask, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7D760, void, set_Mask, (ProjectileSpawner * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00C7D820, bool, PhysicsReady, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7D910, bool, ConditionMet, (ProjectileSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00C7D9F0, void, __ctor, (ProjectileSpawner * __this));
}
