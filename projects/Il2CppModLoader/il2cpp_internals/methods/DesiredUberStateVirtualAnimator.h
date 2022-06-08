#include <interception_macros.h>

namespace app::methods::DesiredUberStateVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BA4360, String *, get_Name, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_IDesiredUberState_ *, get_DesiredStates, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_UseCustomTimeRange, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_UseCustomTimeRange, (DesiredUberStateVirtualAnimator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BA43E0, void, __ctor, (DesiredUberStateVirtualAnimator * __this, List_1_IDesiredUberState_ * desiredStates, bool useCustomTimeRange));
IL2CPP_REGISTER_METHOD(0x01BA4600, void, StartPlayback, (DesiredUberStateVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04762C58, DesiredUberStateVirtualAnimator_StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4650, void, StopPlayback, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047922A0, DesiredUberStateVirtualAnimator_StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA46A0, void, PausePlayback, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047363C8, DesiredUberStateVirtualAnimator_PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA46F0, void, ResumePlayback, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CC20, DesiredUberStateVirtualAnimator_ResumePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00420230, AnimatorPlayState__Enum, get_PlayState, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, PlaybackStatus *, get_PlaybackStatus, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BA4740, IEventReciever *, get_EventReciever, (DesiredUberStateVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04702DB8, DesiredUberStateVirtualAnimator_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4790, void, set_EventReciever, (DesiredUberStateVirtualAnimator * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04737448, DesiredUberStateVirtualAnimator_set_EventReciever__MethodInfo);
}
