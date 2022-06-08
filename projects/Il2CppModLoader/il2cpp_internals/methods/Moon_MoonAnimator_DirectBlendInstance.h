using namespace app;

namespace app::methods::Moon::MoonAnimator_DirectBlendInstance {
IL2CPP_REGISTER_METHOD(0x02115780, bool, get_HasValidInput, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ValidInputCount, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance__Array *, get_InputInstances, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115790, Playable, get_Playable, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115850, float, get_Speed, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021158E0, void, set_Speed, (MoonAnimator_DirectBlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02115980, float, get_Duration, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115A10, float, get_Time, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115AA0, void, set_Time, (MoonAnimator_DirectBlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02115BA0, float, get_NormalizedTime, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115CB0, void, set_NormalizedTime, (MoonAnimator_DirectBlendInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02115D00, float, get_SingleLoopDuration, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02115E60, void, ReturnToPool, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (MoonAnimator_DirectBlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02115F00, float, GetInputWeight, (MoonAnimator_DirectBlendInstance * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02115FC0, void, OnRetrievedFromPool, (MoonAnimator_DirectBlendInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x021164D0, void, OnReset, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x021165D0, void, OnRetunedToPool, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02116890, void, OnPrepare, (MoonAnimator_DirectBlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02116920, void, OnPostPrepare, (MoonAnimator_DirectBlendInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02116A70, void, OnProcessEvents, (MoonAnimator_DirectBlendInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02116B00, void, Update, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02116C90, void, UpdateWeights, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x02116EB0, void, UpdateDuration, (MoonAnimator_DirectBlendInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_DirectBlendInstance * __this));
}
