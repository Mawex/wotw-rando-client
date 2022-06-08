using namespace app;

namespace app::methods::Moon::TentacleStabBehaviour {
IL2CPP_REGISTER_METHOD(0x010B7740, Enum__Array *, GetEntries, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B77E0, Enum, Evaluate, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B78E0, void, OnEntityInitialized, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B7910, void, OnEnter, (TentacleStabBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010B8750, void, LockTarget, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472F958, TentacleStabBehaviour_LockTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8890, void, UnLockTarget, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04735340, TentacleStabBehaviour_UnLockTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B88C0, void, ContinueFollow, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04784188, TentacleStabBehaviour_ContinueFollow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8960, void, ContinueFollowMiss, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477ACF0, TentacleStabBehaviour_ContinueFollowMiss__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8A00, void, Stick, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D7E0, TentacleStabBehaviour_Stick__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8DA0, void, UnStick, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047709B8, TentacleStabBehaviour_UnStick__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8EA0, void, OnMissEnd, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04736888, TentacleStabBehaviour_OnMissEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8F90, void, TimelineStop, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470CCB8, TentacleStabBehaviour_TimelineStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B8FF0, BehaviourStatus__Enum, OnExecute, (TentacleStabBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BA1E0, void, OnExit, (TentacleStabBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010BACA0, void, OnDrawGizmos, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010BAD70, void, __ctor, (TentacleStabBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010BAE30, void, __cctor, (MethodInfo * method));
}
