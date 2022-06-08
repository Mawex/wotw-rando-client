using namespace app;

namespace app::methods::SpiderlingFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBC40, MoonTimeline *, get_EffectiveLandSequenceNew, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C1E60, bool, get_ShouldLand, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C1EF0, void, OnInitializeTask, (SpiderlingFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C1FC0, void, OnEnterTask, (SpiderlingFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C2280, BehaviourStatus__Enum, OnExecuteTask, (SpiderlingFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C2630, void, OnExitTask, (SpiderlingFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C2920, void, HandleCollision, (SpiderlingFallReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x0476A5B8, SpiderlingFallReactionBehaviour_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C2BE0, void, UpdateState, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C2C30, void, ChangeState, (SpiderlingFallReactionBehaviour * __this, SpiderlingFallReactionBehaviour_FallState__Enum newState));
IL2CPP_REGISTER_METHOD(0x011C2CE0, void, OnEnterFalling, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C3150, void, FallingUpdate, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C3910, void, OnEnterLand, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C3D70, void, OnEndLand, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D858, SpiderlingFallReactionBehaviour_OnEndLand__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C3FA0, void, OnEnterCollision, (SpiderlingFallReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHOD(0x011C4300, void, CollisionUpdate, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C45E0, void, PlayShakeTimeline, (SpiderlingFallReactionBehaviour * __this, bool forced));
IL2CPP_REGISTER_METHOD(0x011C4700, void, __ctor, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C4760, bool, _OnEnterFalling_b__48_0, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472DEF0, SpiderlingFallReactionBehaviour__OnEnterFalling_b__48_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C4760, bool, _FallingUpdate_b__49_0, (SpiderlingFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04747B90, SpiderlingFallReactionBehaviour__FallingUpdate_b__49_0__MethodInfo);
}
