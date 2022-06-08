#include <interception_macros.h>

namespace app::methods::SetupStateVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004173F0, String *, get_Name, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E94060, void, Reset, (SetupStateVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA280, SetupState *, get_State, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_State, (SetupStateVirtualAnimator * __this, SetupState * value));
IL2CPP_REGISTER_METHOD(0x002FB930, NewSetupStateController *, get_StateController, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StateController, (SetupStateVirtualAnimator * __this, NewSetupStateController * value));
IL2CPP_REGISTER_METHOD(0x01E94130, void, __ctor, (SetupStateVirtualAnimator * __this, NewSetupStateController * stateController, SetupState * state, IGenericUberState * uberState, float desiredValue));
IL2CPP_REGISTER_METHOD(0x01E942A0, void, __ctor, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E943E0, void, Init, (SetupStateVirtualAnimator * __this, NewSetupStateController * stateController, SetupState * state, IGenericUberState * uberState, float desiredValue));
IL2CPP_REGISTER_METHOD(0x01E94400, void, StartPlayback, (SetupStateVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04746D00, SetupStateVirtualAnimator_StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E94450, void, StopPlayback, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047401C8, SetupStateVirtualAnimator_StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E944A0, void, PausePlayback, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047478D0, SetupStateVirtualAnimator_PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E944F0, void, ResumePlayback, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04717300, SetupStateVirtualAnimator_ResumePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529E80, AnimatorPlayState__Enum, get_PlayState, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, PlaybackStatus *, get_PlaybackStatus, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E94540, IEventReciever *, get_EventReciever, (SetupStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DF88, SetupStateVirtualAnimator_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E94590, void, set_EventReciever, (SetupStateVirtualAnimator * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x0470E538, SetupStateVirtualAnimator_set_EventReciever__MethodInfo);
}
