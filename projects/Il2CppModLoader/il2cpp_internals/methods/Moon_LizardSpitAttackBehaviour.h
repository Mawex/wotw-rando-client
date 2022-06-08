using namespace app;

namespace app::methods::Moon::LizardSpitAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x01109E10, void, OnEntityInitialized, (LizardSpitAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01109EB0, void, OnEnter, (LizardSpitAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0110A280, Vector3, RootMotionProc, (LizardSpitAttackBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x0110A330, BehaviourStatus__Enum, OnExecute, (LizardSpitAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C8490, void, OnExit, (LizardSpitAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F17370, void, StartTimeline, (LizardSpitAttackBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x008C8490, void, StopCurrentTimeline, (LizardSpitAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0110A460, void, ShootProjectile, (LizardSpitAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F978, LizardSpitAttackBehaviour_ShootProjectile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0110A910, void, __ctor, (LizardSpitAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnEnter_b__9_0, (LizardSpitAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A7F0, LizardSpitAttackBehaviour__OnEnter_b__9_0__MethodInfo);
}
