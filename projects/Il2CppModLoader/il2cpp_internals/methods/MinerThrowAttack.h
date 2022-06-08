using namespace app;

namespace app::methods::MinerThrowAttack {
IL2CPP_REGISTER_METHOD(0x01450DE0, void, Shoot, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0477C120, MinerThrowAttack_Shoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01451210, void, Throw, (MinerThrowAttack * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x01451460, void, OnEntityInitialized, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHOD(0x01451470, BehaviourStatus__Enum, OnExecute, (MinerThrowAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x014515C0, void, OnEnter, (MinerThrowAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01451A20, void, Aim, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E520, MinerThrowAttack_Aim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01451B10, void, DisableProjectile, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHOD(0x01451BF0, void, EnableProjectile, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHOD(0x01451CD0, void, PullOut, (MinerThrowAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B4B8, MinerThrowAttack_PullOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01451F10, void, OnExit, (MinerThrowAttack * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01452330, void, __ctor, (MinerThrowAttack * __this));
}
