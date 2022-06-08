#include <interception_macros.h>

namespace app::methods::BehaviourTreeVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00F9DBC0, String *, get_Name, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Nullable_1_Single_, get_CustomStart, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CustomStart, (BehaviourTreeVirtualAnimator * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x002FB930, Nullable_1_Single_, get_CustomEnd, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CustomEnd, (BehaviourTreeVirtualAnimator * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x002FB950, BehaviourTree *, get_BehaviourTree, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_BehaviourTree, (BehaviourTreeVirtualAnimator * __this, BehaviourTree * value));
IL2CPP_REGISTER_METHOD(0x00F9DC40, void, __ctor, (BehaviourTreeVirtualAnimator * __this, BehaviourTree * tree));
IL2CPP_REGISTER_METHOD(0x00420230, AnimatorPlayState__Enum, get_PlayState, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, PlaybackStatus *, get_PlaybackStatus, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00F9DD90, void, StartPlayback, (BehaviourTreeVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0471A1D8, BehaviourTreeVirtualAnimator_StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9DDE0, void, StopPlayback, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0474FC90, BehaviourTreeVirtualAnimator_StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9DE30, void, PausePlayback, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C938, BehaviourTreeVirtualAnimator_PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9DE80, void, ResumePlayback, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04745BD0, BehaviourTreeVirtualAnimator_ResumePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00F9DED0, IEventReciever *, get_EventReciever, (BehaviourTreeVirtualAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04796E40, BehaviourTreeVirtualAnimator_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9DF20, void, set_EventReciever, (BehaviourTreeVirtualAnimator * __this, IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04780AC8, BehaviourTreeVirtualAnimator_set_EventReciever__MethodInfo);
}
