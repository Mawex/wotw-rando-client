using namespace app;

namespace app::methods::PiranhaAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x0115C5B0, void, OnEntityInitialized, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0115C660, void, OnEnter, (PiranhaAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115CA60, BehaviourStatus__Enum, OnExecute, (PiranhaAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115CF60, void, ChangeState, (PiranhaAttackBehaviour * __this, PiranhaAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0115D220, void, OnExit, (PiranhaAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115D280, void, PlayTimeline, (PiranhaAttackBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x0115D2F0, void, ResetCurrentTimeline, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0115D3E0, void, __ctor, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0115D490, void, _OnEnter_b__17_0, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04706450, PiranhaAttackBehaviour__OnEnter_b__17_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0115D4B0, void, _OnEnter_b__17_1, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047103D8, PiranhaAttackBehaviour__OnEnter_b__17_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0115D4D0, void, _ChangeState_b__19_0, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047948B0, PiranhaAttackBehaviour__ChangeState_b__19_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00754B80, void, _ChangeState_b__19_1, (PiranhaAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04742540, PiranhaAttackBehaviour__ChangeState_b__19_1__MethodInfo);
}
