using namespace app;

namespace app::methods::SpiderlingDeathReaction {
IL2CPP_REGISTER_METHOD(0x011BF7D0, void, OnInitializeTask, (SpiderlingDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BF8F0, void, ResetTimeline, (SpiderlingDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x011BFB50, void, ModifyDeathKickbackForce, (SpiderlingDeathReaction * __this, Damage * damage, float minBoost, float minMagntiude, float minUpDirection));
IL2CPP_REGISTER_METHOD(0x011BFE30, void, OnEnterTask, (SpiderlingDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C0510, BehaviourStatus__Enum, OnExecuteTask, (SpiderlingDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C0A70, void, OnExitTask, (SpiderlingDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C0C40, void, OnBurrowFinished, (SpiderlingDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x047523E8, SpiderlingDeathReaction_OnBurrowFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C0C80, void, StopCurrentTimeline, (SpiderlingDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x011C0D60, void, StartTimeline, (SpiderlingDeathReaction * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x011C0DC0, void, PlayShakeTimeline, (SpiderlingDeathReaction * __this, bool forced));
IL2CPP_REGISTER_METHOD(0x011C0EE0, void, HandleCollision, (SpiderlingDeathReaction * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x047842C8, SpiderlingDeathReaction_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C1090, void, __ctor, (SpiderlingDeathReaction * __this));
}
