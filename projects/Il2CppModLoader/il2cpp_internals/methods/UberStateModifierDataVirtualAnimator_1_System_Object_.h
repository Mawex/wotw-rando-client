#include <interception_macros.h>

namespace app::methods::UberStateModifierDataVirtualAnimator_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FC6D0, AnimatorPlayState__Enum, get_PlayState, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, PlaybackStatus *, get_PlaybackStatus, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01700280, int32_t, get_Hash, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x022631B0, String *, get_Name, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, NewSetupStateController *, get_StateController, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01A5A010, SetupControllerStateHolder *, get_StateHolder, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, SetupStateModifier *, get_Modifier, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263300, SetupStateModifierData *, get_ModifierData, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_StateGuid, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263790, Type *, get_ModifierType, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263840, IEventReciever *, get_EventReciever, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04784E90, UberStateModifierDataVirtualAnimator_1_System_Object__get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263890, void, set_EventReciever, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04767690, UberStateModifierDataVirtualAnimator_1_System_Object__set_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263230, void, Reset, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x02263330, void, __ctor, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this, NewSetupStateController * stateController, SetupStateModifier * modifier, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x022634C0, void, __ctor, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263600, void, Init, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this, NewSetupStateController * stateController, SetupStateModifier * modifier, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x02263610, Object *, GetModifierData, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263650, void, StartPlayback, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04746800, UberStateModifierDataVirtualAnimator_1_System_Object__StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022636A0, void, StopPlayback, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04792878, UberStateModifierDataVirtualAnimator_1_System_Object__StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022636F0, void, PausePlayback, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C0B0, UberStateModifierDataVirtualAnimator_1_System_Object__PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263740, void, ResumePlayback, (UberStateModifierDataVirtualAnimator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04717980, UberStateModifierDataVirtualAnimator_1_System_Object__ResumePlayback__MethodInfo);
}
