using namespace app;

namespace app::methods::Moon::PetrifiedOwlSideStepBehaviour {
IL2CPP_REGISTER_METHOD(0x00C396A0, void, Awake, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39740, void, OnStartBehaviour, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39A50, void, OnEndBehaviour, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, GetScore, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39BF0, bool, EndCondition, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39C80, void, ResetBehaviour, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39D60, bool, IsSeinToTheRight, (PetrifiedOwlSideStepBehaviour * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x00C39E90, bool, IsSeinToTheLeft, (PetrifiedOwlSideStepBehaviour * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x00C39EB0, BaseAnimator *, GetRandomStepAnimator, (PetrifiedOwlSideStepBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C39FA0, void, OnProcessRootMotion, (PetrifiedOwlSideStepBehaviour * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x047631B0, PetrifiedOwlSideStepBehaviour_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3A1C0, void, __ctor, (PetrifiedOwlSideStepBehaviour * __this));
}
