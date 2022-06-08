#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimator_LayeredInstance {
IL2CPP_REGISTER_METHOD(0x02119350, bool, get_HasValidInput, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02119370, int32_t, get_ValidInputCount, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MoonAnimator_AnimationInstance__Array *, get_InputInstances, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02119390, Playable, get_Playable, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02119450, float, get_Speed, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x021194E0, void, set_Speed, (MoonAnimator_LayeredInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02119580, float, get_Duration, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02119610, float, get_Time, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x021196A0, void, set_Time, (MoonAnimator_LayeredInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (MoonAnimator_LayeredInstance * __this, float value));
IL2CPP_REGISTER_METHOD(0x021197F0, float, get_SingleLoopDuration, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x005D89A0, MoonAnimator_AnimationInstanceType__Enum, get_Type, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02119930, void, ReturnToPool, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (MoonAnimator_LayeredInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x021199D0, float, GetInputWeight, (MoonAnimator_LayeredInstance * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02119A90, void, OnRetrievedFromPool, (MoonAnimator_LayeredInstance * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x02119F70, void, OnReset, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211A090, void, OnRetunedToPool, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211A370, void, OnPrepare, (MoonAnimator_LayeredInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211A410, void, OnPostPrepare, (MoonAnimator_LayeredInstance * __this, float weight));
IL2CPP_REGISTER_METHOD(0x0211A590, void, OnProcessEvents, (MoonAnimator_LayeredInstance * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211A640, void, Update, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x0211A7E0, void, UpdateDuration, (MoonAnimator_LayeredInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonAnimator_LayeredInstance * __this));
}
