using namespace app;

namespace app::methods::SplitTurnAnimationMoonTimeline {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsDone, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHOD(0x009A3B40, void, AllowCancel, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHODINFO(0x04780828, SplitTurnAnimationMoonTimeline_AllowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009A3B50, void, DisallowCancel, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHODINFO(0x04760A80, SplitTurnAnimationMoonTimeline_DisallowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsCancelable, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHOD(0x009A3B60, CancelableAnimator *, get_Cancelable, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHOD(0x009A3C40, void, Play, (SplitTurnAnimationMoonTimeline * __this, ILocomotionTurningHandler * locomotion, float targetLookDirection));
IL2CPP_REGISTER_METHOD(0x009A42A0, void, OnAnimationEnd, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHODINFO(0x047570B0, SplitTurnAnimationMoonTimeline_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009A4650, void, Flip, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHODINFO(0x04705E60, SplitTurnAnimationMoonTimeline_Flip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Step, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHOD(0x009A4700, void, Stop, (SplitTurnAnimationMoonTimeline * __this));
IL2CPP_REGISTER_METHOD(0x009A4A40, void, __ctor, (SplitTurnAnimationMoonTimeline * __this));
}
