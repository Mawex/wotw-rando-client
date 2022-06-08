using namespace app;

namespace app::methods::Moon::MoonAnimator_AnimationInstance {
IL2CPP_REGISTER_METHOD(0x02110310, PlayableGraph, get_PlayableGraph, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsPreview, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110360, bool, get_IsValid, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, IAnimation *, get_Animation, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110400, bool, get_IsDone, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsCrossFading, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_UserId, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_UserId, (MoonAnimator_AnimationInstance * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, MoonAnimator_AnimationInstance *, get_MainAnimationInstance, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, MoonAnimator *, get_Animator, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Animator, (MoonAnimator_AnimationInstance * __this, MoonAnimator * value));
IL2CPP_REGISTER_METHOD(0x021104A0, bool, FinishedPlaying, (MoonAnimator_AnimationInstance * __this, float tolerance));
IL2CPP_REGISTER_METHOD(0x021105F0, void, OnCreated, (MoonAnimator_AnimationInstance * __this, MoonAnimator * animator, bool isPreview));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPrepare, (MoonAnimator_AnimationInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02110600, void, OnRetrievedFromPool, (MoonAnimator_AnimationInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110610, void, OnRetunedToPool, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessEvents, (MoonAnimator_AnimationInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02110620, void, HandleDisabledGroups, (MoonAnimator_AnimationInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02110650, void, DisablePostprocessGroups, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110920, void, EnablePostprocessGroups, (MoonAnimator_AnimationInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_AnimationInstance * __this));
}
