using namespace app;

namespace app::methods::Moon::MoonAnimator_ClipInstance {
IL2CPP_REGISTER_METHOD(0x021142B0, Playable, get_Playable, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x021142C0, float, get_Speed, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x02114380, void, set_Speed, (MoonAnimator_ClipInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02114440, float, get_Duration, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x02114500, float, get_Time, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x021145C0, void, set_Time, (MoonAnimator_ClipInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02114680, float, get_NormalizedTime, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (MoonAnimator_ClipInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02114790, float, get_SingleLoopDuration, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x021147D0, AnimationClip *, get_Clip, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x004994E0, float, get_ClipLength, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x021147F0, void, ReturnToPool, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (MoonAnimator_ClipInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02110620, void, OnPostPrepare, (MoonAnimator_ClipInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02114890, void, OnRetrievedFromPool, (MoonAnimator_ClipInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x02114D40, void, OnReset, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x02114DF0, void, OnRetunedToPool, (MoonAnimator_ClipInstance * __this));
IL2CPP_REGISTER_METHOD(0x02114F10, void, OnProcessEvents, (MoonAnimator_ClipInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_ClipInstance * __this));
}
