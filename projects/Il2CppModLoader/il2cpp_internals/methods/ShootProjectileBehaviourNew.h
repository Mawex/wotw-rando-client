using namespace app;

namespace app::methods::ShootProjectileBehaviourNew {
IL2CPP_REGISTER_METHOD(0x005B8000, bool, IsBlockingInterruption, (ShootProjectileBehaviourNew * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x005B8080, void, CacheSerializedComponents, (ShootProjectileBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x005B80D0, void, OnEntityInitialized, (ShootProjectileBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x005B81F0, void, OnEnter, (ShootProjectileBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005B8560, BehaviourStatus__Enum, OnExecute, (ShootProjectileBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005B8580, void, OnExit, (ShootProjectileBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005B8890, void, ShootProjectile, (ShootProjectileBehaviourNew * __this, float angle));
IL2CPP_REGISTER_METHOD(0x005B8DB0, void, Shoot, (ShootProjectileBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x005B90C0, void, ShootingFinished, (ShootProjectileBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04774508, ShootProjectileBehaviourNew_ShootingFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B90D0, void, OnDrawGizmosSelected, (ShootProjectileBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x005B9380, void, __ctor, (ShootProjectileBehaviourNew * __this));
}
