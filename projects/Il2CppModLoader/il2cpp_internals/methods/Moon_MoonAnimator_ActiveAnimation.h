#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimator_ActiveAnimation {
IL2CPP_REGISTER_METHOD(0x002FB930, IAnimation *, get_Animation, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Priority, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Speed, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E2A0, void, set_Speed, (MoonAnimator_ActiveAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210E2C0, float, get_Time, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E2E0, void, set_Time, (MoonAnimator_ActiveAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x0210E300, float, get_NormalizedTime, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E320, void, set_NormalizedTime, (MoonAnimator_ActiveAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_StartedPlaying, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E480, bool, get_IsPlaying, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E4C0, bool, get_IsScheduled, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E510, bool, get_IsScheduledOrPlaying, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsFinished, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_Boolean_ *, get_ContinueCondition, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ContinueCondition, (MoonAnimator_ActiveAnimation * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x002FB990, Action *, get_OnStartedPlaying, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_OnStartedPlaying, (MoonAnimator_ActiveAnimation * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Action *, get_OnStoppedPlaying, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_OnStoppedPlaying, (MoonAnimator_ActiveAnimation * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_StopRequested, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_CroffadeTimeOverride, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_CroffadeTimeOverride, (MoonAnimator_ActiveAnimation * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_Weight, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x008682B0, void, set_Weight, (MoonAnimator_ActiveAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsAllocated, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Version, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E520, void, OnAllocated, (MoonAnimator_ActiveAnimation * __this, IAnimation * animation, int32_t priority, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0210E540, void, OnDeallocated, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E580, bool, ShouldContinue, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E620, void, RequestStop, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E630, MoonAnimator_AnimationInstance *, InstantiateAnimation, (MoonAnimator_ActiveAnimation * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0210E6C0, void, InvalidateAnimationInstance, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E6D0, void, OnRemovedFromAnimator, (MoonAnimator_ActiveAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0210E920, void, __ctor, (MoonAnimator_ActiveAnimation * __this));
}
