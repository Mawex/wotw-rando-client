using namespace app;

namespace app::methods::SpiderBatSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x009608C0, void, OnBehaviourTreeInitialize, (SpiderBatSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00960960, void, OnEnter, (SpiderBatSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00960D80, BehaviourStatus__Enum, OnExecute, (SpiderBatSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00960DA0, void, OnExit, (SpiderBatSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00961180, void, OnEndTurningBehaviourEvent, (SpiderBatSpitBehaviour * __this, IEntityBehaviour * behaviour, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00961190, void, StartTimeline, (SpiderBatSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00961360, void, OnTimelineSequenceStopEvent, (SpiderBatSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F048, SpiderBatSpitBehaviour_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00961510, void, Shoot, (SpiderBatSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00961B70, void, ResolveDamage, (SpiderBatSpitBehaviour * __this, Damage * damageResult));
IL2CPP_REGISTER_METHODINFO(0x047782E0, SpiderBatSpitBehaviour_ResolveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00961C50, void, __ctor, (SpiderBatSpitBehaviour * __this));
}
