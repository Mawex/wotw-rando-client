using namespace app;

namespace app::methods::Moon::MoonAnimator_BlendInstance {
IL2CPP_REGISTER_METHOD(0x02112700, bool, get_HasValidInput, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x013AF3B0, int32_t, get_ValidInputCount, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance__Array *, get_InputInstances, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112720, Playable, get_Playable, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021127E0, float, get_Speed, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112870, void, set_Speed, (MoonAnimator_BlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02112910, float, get_Duration, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021129A0, float, get_Time, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112A30, void, set_Time, (MoonAnimator_BlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (MoonAnimator_BlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02112B80, float, get_SingleLoopDuration, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x00417920, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112D80, void, ReturnToPool, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (MoonAnimator_BlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02112E20, float, GetInputWeight, (MoonAnimator_BlendInstance * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02112EE0, void, OnRetrievedFromPool, (MoonAnimator_BlendInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x021132F0, void, OnReset, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02113410, void, OnRetunedToPool, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021136F0, void, OnPrepare, (MoonAnimator_BlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02113790, void, OnPostPrepare, (MoonAnimator_BlendInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02113910, void, OnProcessEvents, (MoonAnimator_BlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02113AB0, void, Update, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02113C00, void, UpdateBlendingInfo, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02113D00, void, UpdateDuration, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02113F90, void, UpdateInputSpeeds, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02114100, void, UpdateInputWeights, (MoonAnimator_BlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_BlendInstance * __this));
}
