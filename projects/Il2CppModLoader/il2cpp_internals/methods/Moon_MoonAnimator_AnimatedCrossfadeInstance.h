#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimator_AnimatedCrossfadeInstance {
IL2CPP_REGISTER_METHOD(0x0210E940, bool, get_IsCrossFading, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance *, get_MainAnimationInstance, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x005C3FE0, Playable, get_Playable, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E950, bool, get_IsDone, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E980, float, get_Speed, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E9B0, void, set_Speed, (MoonAnimator_AnimatedCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210E9E0, float, get_Duration, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA10, float, get_SingleLoopDuration, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA40, float, get_Time, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA70, void, set_Time, (MoonAnimator_AnimatedCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210EAA0, float, get_NormalizedTime, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EAD0, void, set_NormalizedTime, (MoonAnimator_AnimatedCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210EB00, bool, FinishedPlaying, (MoonAnimator_AnimatedCrossfadeInstance * __this, float tolerance));
IL2CPP_REGISTER_METHOD(0x002FB9D0, MoonAnimator_AnimationInstance *, get_SourceAnimationInstance, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance *, get_TargetAnimationInstance, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, MoonAnimator_AnimationInstance *, get_TransitionAnimationInstance, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EB30, float, get_TargetWeight, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EC30, float, get_TransitionWeight, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EE20, float, get_SourceWeight, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x008E77B0, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EF20, void, ReturnToPool, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EFC0, void, ShiftTime, (MoonAnimator_AnimatedCrossfadeInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0210F0D0, void, OnRetrievedFromPool, (MoonAnimator_AnimatedCrossfadeInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x0210F780, void, OnRetunedToPool, (MoonAnimator_AnimatedCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210FA40, void, OnPrepare, (MoonAnimator_AnimatedCrossfadeInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0210FE50, void, OnPostPrepare, (MoonAnimator_AnimatedCrossfadeInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02110040, void, SetState, (MoonAnimator_AnimatedCrossfadeInstance * __this, MoonAnimator_AnimatedCrossfadeInstance_State__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_AnimatedCrossfadeInstance * __this));
}
