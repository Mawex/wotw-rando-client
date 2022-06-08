using namespace app;

namespace app::methods::UpperKickReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkipUpdate, (UpperKickReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x013AF5A0, void, OnInitializeTask, (UpperKickReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013AF670, void, OnEnterTask, (UpperKickReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013AFCD0, BehaviourStatus__Enum, OnExecuteTask, (UpperKickReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013B0010, void, EnterEarlyCollision, (UpperKickReactionBehaviour * __this, LegacyTimelineSequence * sequence));
IL2CPP_REGISTER_METHOD(0x013B0480, void, EnterEarlyCollision, (UpperKickReactionBehaviour * __this, MoonTimeline * sequence));
IL2CPP_REGISTER_METHOD(0x013B08E0, void, OnAnimationFinished, (UpperKickReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04735EA8, UpperKickReactionBehaviour_OnAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnEarlyCollisionAnimationFinished, (UpperKickReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04712998, UpperKickReactionBehaviour_OnEarlyCollisionAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013B0C20, void, OnExitTask, (UpperKickReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013B0C60, void, StopAllSequences, (UpperKickReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (UpperKickReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (UpperKickReactionBehaviour * __this));
}
