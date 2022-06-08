#include <interception_macros.h>

namespace app::methods::Moon::ActiveAnimationHandle {
IL2CPP_REGISTER_METHOD(0x001B48E0, void, __ctor, (ActiveAnimationHandle__Boxed * __this, IActiveAnimation * activeAnimation));
IL2CPP_REGISTER_METHOD(0x0011D890, bool, get_IsInitialized, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B48F0, bool, get_IsValid, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4900, IAnimation *, get_Animation, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4910, float, get_Speed, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4920, void, set_Speed, (ActiveAnimationHandle__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001B4930, float, get_Time, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4940, void, set_Time, (ActiveAnimationHandle__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001B4950, float, get_NormalizedTime, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4960, void, set_NormalizedTime, (ActiveAnimationHandle__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001B4970, bool, get_StartedPlaying, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4980, bool, get_IsPlaying, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4990, bool, get_IsScheduledOrPlaying, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B49A0, bool, get_IsFinished, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B49B0, Func_1_Boolean_ *, get_ContinueCondition, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4A60, void, set_ContinueCondition, (ActiveAnimationHandle__Boxed * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x001B4A70, Action *, get_OnStartedPlaying, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4A80, void, set_OnStartedPlaying, (ActiveAnimationHandle__Boxed * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x001B4A90, Action *, get_OnStoppedPlaying, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4AA0, void, set_OnStoppedPlaying, (ActiveAnimationHandle__Boxed * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x001B4AB0, Nullable_1_Single_, get_CroffadeTimeOverride, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4B60, void, set_CroffadeTimeOverride, (ActiveAnimationHandle__Boxed * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x001B4C10, float, get_Weight, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4C20, void, set_Weight, (ActiveAnimationHandle__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001B4C30, void, RequestStop, (ActiveAnimationHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001B4C40, bool, Equals, (ActiveAnimationHandle__Boxed * __this, ActiveAnimationHandle other));
IL2CPP_REGISTER_METHOD(0x001B4C60, bool, Equals, (ActiveAnimationHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001B4C70, int32_t, GetHashCode, (ActiveAnimationHandle__Boxed * __this));
}
