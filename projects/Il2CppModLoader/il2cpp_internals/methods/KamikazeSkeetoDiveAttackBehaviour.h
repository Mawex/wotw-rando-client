using namespace app;

namespace app::methods::KamikazeSkeetoDiveAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00E5BF60, KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum, get_State, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5BF70, Entity *, get_Owner, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5BFF0, SkeetoLocomotion *, get_Locomotion, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C0D0, Vector3, get_PegCheckOrigin, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C1E0, Vector3, get_PegCheckDirection, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C370, Vector3, get_TargetPosition, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005DC410, float, get_InitialDirection, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C520, void, set_InitialDirection, (KamikazeSkeetoDiveAttackBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E5C530, void, ForceAttackDirection, (KamikazeSkeetoDiveAttackBehaviour * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C670, bool, ShouldPauseLocomotion, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C680, void, OnEntityInitialized, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5C740, void, OnEnter, (KamikazeSkeetoDiveAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E5CDB0, BehaviourStatus__Enum, OnExecute, (KamikazeSkeetoDiveAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E5CE70, void, OnExit, (KamikazeSkeetoDiveAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E5D410, void, ChangeState, (KamikazeSkeetoDiveAttackBehaviour * __this, KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum state));
IL2CPP_REGISTER_METHOD(0x00E5D780, void, OnEnterFlipTowardsTarget, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, UpdateFlipTowardsTarget, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5D9F0, void, OnExitFlipTowardsTarget, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5DA50, void, OnEnterAnticipation, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5DE00, BehaviourStatus__Enum, UpdateAnticipation, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5E460, void, OnExitAnticipation, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5E4B0, void, AnticipationAnimatorOnOnProcessRootMotion, (KamikazeSkeetoDiveAttackBehaviour * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHOD(0x00E5E5E0, void, OnEnterAttack, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5EAE0, BehaviourStatus__Enum, UpdateAttack, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5EDB0, void, OnExitAttack, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5EDE0, void, OnEnterPegged, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5F100, BehaviourStatus__Enum, UpdatePegged, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5F370, void, OnExitPegged, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5F3A0, void, OnBashEnter, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B788, KamikazeSkeetoDiveAttackBehaviour_OnBashEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E5F3B0, void, UpdateDebugDamage, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5F770, bool, CheckIfPegged, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E5FAE0, void, OnExplodeTriggerEnter, (KamikazeSkeetoDiveAttackBehaviour * __this, Collider * obj));
IL2CPP_REGISTER_METHODINFO(0x04725538, KamikazeSkeetoDiveAttackBehaviour_OnExplodeTriggerEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E5FEE0, bool, HasClearanceToAttack, (KamikazeSkeetoDiveAttackBehaviour * __this, Vector3 offsetToTarget));
IL2CPP_REGISTER_METHOD(0x00E601D0, void, OnDrawGizmos, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnInterrupted, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04740DE8, KamikazeSkeetoDiveAttackBehaviour_OnInterrupted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E603D0, void, __ctor, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E604C0, void, _OnEnterFlipTowardsTarget_b__58_0, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AC38, KamikazeSkeetoDiveAttackBehaviour__OnEnterFlipTowardsTarget_b__58_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E60500, void, _OnEnterFlipTowardsTarget_b__58_1, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04795958, KamikazeSkeetoDiveAttackBehaviour__OnEnterFlipTowardsTarget_b__58_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E60510, void, _OnEnterAnticipation_b__61_0, (KamikazeSkeetoDiveAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C2C8, KamikazeSkeetoDiveAttackBehaviour__OnEnterAnticipation_b__61_0__MethodInfo);
}
