using namespace app;

namespace app::methods::ShootProjectileBehaviour {
IL2CPP_REGISTER_METHOD(0x005B67B0, void, OnInitialize, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B6890, void, OnExecute, (ShootProjectileBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x005B6F50, void, ShootProjectile, (ShootProjectileBehaviour * __this, float angle));
IL2CPP_REGISTER_METHOD(0x005B7400, void, Shoot, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B7700, void, ShootingFinished, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047103E8, ShootProjectileBehaviour_ShootingFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B7710, void, OnEndBehaviour, (ShootProjectileBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B7D20, void, OnDrawGizmosSelected, (ShootProjectileBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B7FD0, void, __ctor, (ShootProjectileBehaviour * __this));
}
