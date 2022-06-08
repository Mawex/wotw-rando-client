using namespace app;

namespace app::methods::MantisFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBC60, LegacyTimelineSequence *, get_EffectiveLandSequence, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonTimeline *, get_EffectiveLandSequenceNew, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009F96B0, void, OnInitializeTask, (MantisFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F97C0, void, OnEnterTask, (MantisFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F9A60, BehaviourStatus__Enum, OnExecuteTask, (MantisFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F9E20, void, OnExitTask, (MantisFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009FA0E0, void, HandleCollision, (MantisFallReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x04771158, MantisFallReactionBehaviour_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FA3B0, void, UpdateState, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FA400, void, ChangeState, (MantisFallReactionBehaviour * __this, MantisFallReactionBehaviour_FallState__Enum newState));
IL2CPP_REGISTER_METHOD(0x009FA4B0, void, OnEnterFalling, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FA920, void, FallingUpdate, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FB140, void, OnEnterLand, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FB700, void, OnEndLand, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A118, MantisFallReactionBehaviour_OnEndLand__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FBAB0, void, OnEnterCollision, (MantisFallReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHOD(0x009FBE00, void, CollisionUpdate, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FC0E0, void, __ctor, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FC140, bool, _OnEnterFalling_b__49_0, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04738640, MantisFallReactionBehaviour__OnEnterFalling_b__49_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FC140, bool, _FallingUpdate_b__50_0, (MantisFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BF48, MantisFallReactionBehaviour__FallingUpdate_b__50_0__MethodInfo);
}
