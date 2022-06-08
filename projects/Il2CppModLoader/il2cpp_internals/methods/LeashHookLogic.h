#include <interception_macros.h>

namespace app::methods::LeashHookLogic {
IL2CPP_REGISTER_METHOD(0x002FBC20, IMoonSetupAnimator *, get_MoonSetupAnimator, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C54F0, void, set_MoonSetupAnimator, (LeashHookLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x015C55C0, MoonAnimator *, get_ModelAnimator, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C55F0, MoonTimeline *, get_OpenTransitionTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5610, MoonTimeline *, get_CloseTransitionTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5630, MoonTimeline *, get_OpenedTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5650, MoonTimeline *, get_ClosedTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5670, FloatAnimationParameter *, get_OpenAngle, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C56A0, SeinSpiritLeashAbility *, get_Leash, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C57E0, Transform *, get_HookTarget, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C57E0, Transform *, get_HookTargetTransform, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5810, void, SetAnimationAngle, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5B70, void, Start, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C5D40, void, OnDestroy, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x047889B8, LeashHookLogic_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015C5F70, void, Closed, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x047984D8, LeashHookLogic_Closed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015C5F80, void, Opened, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x0477EBB0, LeashHookLogic_Opened__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015C5F90, void, ChangeState, (LeashHookLogic * __this, LeashHookLogic_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x015C6550, void, FixedUpdate, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C67D0, void, PlayCurrentTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C68A0, void, StopCurrentTimeline, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x015C6970, void, SubscribeToCurrentTimelineStop, (LeashHookLogic * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x015C6AA0, void, ReleaseLeash, (LeashHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x047500B0, LeashHookLogic_ReleaseLeash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D5FD60, void, __ctor, (LeashHookLogic * __this));
}
