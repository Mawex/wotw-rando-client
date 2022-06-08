#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimator_Blend2DInstance {
IL2CPP_REGISTER_METHOD(0x02110BF0, bool, get_HasValidInput, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110C10, int32_t, get_ValidInputCount, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance__Array *, get_InputInstances, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110C30, Playable, get_Playable, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110CF0, float, get_Speed, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110D80, void, set_Speed, (MoonAnimator_Blend2DInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02110E20, float, get_Duration, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110EB0, float, get_Time, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02110F40, void, set_Time, (MoonAnimator_Blend2DInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (MoonAnimator_Blend2DInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02111130, float, get_SingleLoopDuration, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (MoonAnimator_Blend2DInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00420230, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x021112C0, void, ReturnToPool, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111360, float, GetInputWeight, (MoonAnimator_Blend2DInstance * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02111420, void, OnRetrievedFromPool, (MoonAnimator_Blend2DInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x02111830, void, OnReset, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111950, void, OnRetunedToPool, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111C30, void, OnPrepare, (MoonAnimator_Blend2DInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02111CD0, void, OnPostPrepare, (MoonAnimator_Blend2DInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02111E50, void, OnProcessEvents, (MoonAnimator_Blend2DInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02111F00, void, Update, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112040, void, UpdateBlendingInfo, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112200, void, UpdateDuration, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x021123C0, void, UpdateInputSpeeds, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x021124C0, void, UpdateInputWeights, (MoonAnimator_Blend2DInstance * __this));
IL2CPP_REGISTER_METHOD(0x02112660, void, __ctor, (MoonAnimator_Blend2DInstance * __this));
}
