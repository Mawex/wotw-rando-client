#include <interception_macros.h>

namespace app::methods::KuDoubleJump {
IL2CPP_REGISTER_METHOD(0x01234A70, int32_t, get_ExtraJumpsAvailable, ());
IL2CPP_REGISTER_METHOD(0x01234B00, KuJump *, get_Jump, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01234B40, bool, get_WantsToJump, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01234C10, bool, get_CanDoubleJump, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01234CE0, void, Start, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01234E90, void, OnDestroy, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235040, void, OnResetAirLimits, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04763398, KuDoubleJump_OnResetAirLimits__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01235050, void, OnSetReferenceToKu, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235080, void, Serialize, (KuDoubleJump * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x012350F0, void, PerformDoubleJump, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x012356B0, bool, ShouldDoubleJumpAnimationKeepPlaying, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04709C80, KuDoubleJump_ShouldDoubleJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01235710, void, UpdateState, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235AC0, void, ResetDoubleJump, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235B60, void, LockForDuration, (KuDoubleJump * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00763150, void, ResetLock, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235C20, bool, get_HasStartedTurning, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235C50, bool, get_HasFinishedTurning, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_WantsToFaceLeft, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_WantsToFaceLeft, (KuDoubleJump * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01235C70, bool, get_ShouldInterruptTurning, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235D60, bool, get_IsCancellable, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235D80, void, InterruptTurning, (KuDoubleJump * __this));
IL2CPP_REGISTER_METHOD(0x01235DA0, void, Turn, (KuDoubleJump * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (KuDoubleJump * __this));
}
