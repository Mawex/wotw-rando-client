#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimator_SimpleCrossfadeInstance {
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance *, get_MainAnimationInstance, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211A980, Playable, get_Playable, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E950, bool, get_IsDone, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E980, float, get_Speed, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210E9B0, void, set_Speed, (MoonAnimator_SimpleCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210E9E0, float, get_Duration, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA10, float, get_SingleLoopDuration, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA40, float, get_Time, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EA70, void, set_Time, (MoonAnimator_SimpleCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210EAA0, float, get_NormalizedTime, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EAD0, void, set_NormalizedTime, (MoonAnimator_SimpleCrossfadeInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, MoonAnimator_AnimationInstance *, get_SourceAnimationInstance, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance *, get_TargetAnimationInstance, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211AA40, float, get_TargetWeight, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211AB10, float, get_SourceWeight, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x00938890, bool, get_IsCrossFading, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211AB30, void, ShiftTime, (MoonAnimator_SimpleCrossfadeInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211AC30, void, ReturnToPool, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0210EB00, bool, FinishedPlaying, (MoonAnimator_SimpleCrossfadeInstance * __this, float tolerance));
IL2CPP_REGISTER_METHOD(0x0211ACD0, void, OnRetrievedFromPool, (MoonAnimator_SimpleCrossfadeInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x0211B180, void, OnRetunedToPool, (MoonAnimator_SimpleCrossfadeInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211B400, void, OnPrepare, (MoonAnimator_SimpleCrossfadeInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211B650, void, OnPostPrepare, (MoonAnimator_SimpleCrossfadeInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x0211B6E0, void, OnProcessEvents, (MoonAnimator_SimpleCrossfadeInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_SimpleCrossfadeInstance * __this));
}
