using namespace app;

namespace app::methods::SeekingProjectile {
IL2CPP_REGISTER_METHOD(0x0106CF40, Vector3, get_TargetPosition, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106D0E0, bool, get_IsNearTarget, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106D1B0, void, Awake, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106D250, void, OnEnable, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106D280, void, OnBashed, (SeekingProjectile * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x0106D440, void, FixedUpdate, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106DAB0, void, Launch, (SeekingProjectile * __this, float speed, Vector3 direction, float gravity, GameObject * owner, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x0106DCE0, void, UpdateKinematics, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106DFD0, void, HandleGravity, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106E160, void, UpdateDesiredDirection, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106E670, void, ExplodeProjectile, (SeekingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x0106EAD0, void, SetTarget, (SeekingProjectile * __this, Transform * target, IDamageReciever * targetDamageReceiver));
IL2CPP_REGISTER_METHOD(0x0106EAE0, void, __ctor, (SeekingProjectile * __this));
}
