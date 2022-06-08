#include <interception_macros.h>

namespace app::methods::GameObjectVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BA47E0, String *, get_Name, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, GameObject *, get_Target, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, GameObject *, get_ExternalTarget, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, VirtualTimelineRepresentationGroup__Enum, get_Group, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Group, (GameObjectVirtualAnimator * __this, VirtualTimelineRepresentationGroup__Enum value));
IL2CPP_REGISTER_METHOD(0x01BA4820, void, __ctor, (GameObjectVirtualAnimator * __this, GameObject * target, String * customName));
IL2CPP_REGISTER_METHOD(0x01BA4980, void, __ctor, (GameObjectVirtualAnimator * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x01BA4AD0, void, StartPlayback, (GameObjectVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04747B80, GameObjectVirtualAnimator_StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4B20, void, StopPlayback, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04717A88, GameObjectVirtualAnimator_StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4B70, void, PausePlayback, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FC98, GameObjectVirtualAnimator_PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4BC0, void, ResumePlayback, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04764CE0, GameObjectVirtualAnimator_ResumePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, AnimatorPlayState__Enum, get_PlayState, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, PlaybackStatus *, get_PlaybackStatus, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BA4C10, IEventReciever *, get_EventReciever, (GameObjectVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04770D08, GameObjectVirtualAnimator_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4C60, void, set_EventReciever, (GameObjectVirtualAnimator * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04785BF0, GameObjectVirtualAnimator_set_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA4CB0, void, Reset, (GameObjectVirtualAnimator * __this, IContext * context));
}
