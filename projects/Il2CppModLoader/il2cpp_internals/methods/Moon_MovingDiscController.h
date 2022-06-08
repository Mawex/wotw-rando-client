using namespace app;

namespace app::methods::Moon::MovingDiscController {
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111CB40, float, get_StartingDiscPosition, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111CC20, void, OnCollisionStay, (MovingDiscController * __this, Collision * other));
IL2CPP_REGISTER_METHOD(0x0111CF40, void, OnUpdate, (MovingDiscController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0111D560, bool, ShouldMove, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111D650, void, StopTimeline, (MovingDiscController * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x0111D710, void, StartTimeline, (MovingDiscController * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x0111D7D0, void, SetAngularVelocity, (MovingDiscController * __this, float angularVelocity));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111D990, void, Apply, (MovingDiscController * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0111DBE0, IUberState__Array *, get_AffectingUberStates, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111DC70, List_1_UnityEngine_GameObject_ *, get_AllTargets, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111DE30, void, Awake, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111DEF0, void, OnDestroy, (MovingDiscController * __this));
IL2CPP_REGISTER_METHOD(0x0111DFB0, void, __ctor, (MovingDiscController * __this));
}
