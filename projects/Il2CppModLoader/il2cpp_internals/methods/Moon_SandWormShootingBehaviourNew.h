using namespace app;

namespace app::methods::Moon::SandWormShootingBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00EC3C60, void, OnEnter, (SandWormShootingBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B1960, void, ShootingEventEnd, (SandWormShootingBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04740DF8, SandWormShootingBehaviourNew_ShootingEventEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC4180, void, OnExit, (SandWormShootingBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EC44D0, BehaviourStatus__Enum, OnExecute, (SandWormShootingBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EC4A20, void, SpawnProjectile, (SandWormShootingBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x047786A8, SandWormShootingBehaviourNew_SpawnProjectile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC4D80, Vector2, get_ProjectilePeak, (SandWormShootingBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC50A0, Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (SandWormShootingBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC52B0, void, SpawnProjectile, (SandWormShootingBehaviourNew * __this, Vector3 speed, float projectileGravity));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SandWormShootingBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EC5470, void, __ctor, (SandWormShootingBehaviourNew * __this));
}
