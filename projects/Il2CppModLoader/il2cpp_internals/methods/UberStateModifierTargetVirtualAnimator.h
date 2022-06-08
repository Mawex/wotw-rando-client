#include <interception_macros.h>

namespace app::methods::UberStateModifierTargetVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x002FC6D0, AnimatorPlayState__Enum, get_PlayState, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, PlaybackStatus *, get_PlaybackStatus, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E964A0, String *, get_Name, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, NewSetupStateController *, get_SetupStateController, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_SetupStateController, (UberStateModifierTargetVirtualAnimator * __this, NewSetupStateController * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, SetupStateModifier *, get_Modifier, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Modifier, (UberStateModifierTargetVirtualAnimator * __this, SetupStateModifier * value));
IL2CPP_REGISTER_METHOD(0x01E96520, GameObject *, get_ExternalTarget, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E965C0, void, Reset, (UberStateModifierTargetVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E96680, void, __ctor, (UberStateModifierTargetVirtualAnimator * __this, SetupStateModifier * modifier, NewSetupStateController * stateController));
IL2CPP_REGISTER_METHOD(0x01E967E0, void, StartPlayback, (UberStateModifierTargetVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04755018, UberStateModifierTargetVirtualAnimator_StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E96830, void, StopPlayback, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04715690, UberStateModifierTargetVirtualAnimator_StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E96880, void, PausePlayback, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047271D0, UberStateModifierTargetVirtualAnimator_PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E968D0, void, ResumePlayback, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04719070, UberStateModifierTargetVirtualAnimator_ResumePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetTarget, (UberStateModifierTargetVirtualAnimator * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x01E96920, IEventReciever *, get_EventReciever, (UberStateModifierTargetVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047827A8, UberStateModifierTargetVirtualAnimator_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E96970, void, set_EventReciever, (UberStateModifierTargetVirtualAnimator * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04766628, UberStateModifierTargetVirtualAnimator_set_EventReciever__MethodInfo);
}
