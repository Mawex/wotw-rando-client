using namespace app;

namespace app::methods::SpiderBossDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x0096B6C0, void, Awake, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0096B860, void, OnDestroy, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0096BA00, void, OnEnterTask, (SpiderBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (SpiderBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0096BD00, void, OnExitTask, (SpiderBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0096BD50, void, OnPostRestoreCheckpoint, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476CBE8, SpiderBossDeathReactionBehaviour_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0096BE70, void, OnDeathTimelineStopped, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04794BC8, SpiderBossDeathReactionBehaviour_OnDeathTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0096BF30, void, OnTransitionStopped, (SpiderBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04704940, SpiderBossDeathReactionBehaviour_OnTransitionStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (SpiderBossDeathReactionBehaviour * __this));
}
