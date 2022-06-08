using namespace app;

namespace app::methods::SpiderBatAcidSprayBehaviour {
IL2CPP_REGISTER_METHOD(0x00953E70, void, OnEnter, (SpiderBatAcidSprayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00954170, BehaviourStatus__Enum, OnExecute, (SpiderBatAcidSprayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00954230, void, OnExit, (SpiderBatAcidSprayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00954540, void, StartShoot, (SpiderBatAcidSprayBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D730, SpiderBatAcidSprayBehaviour_StartShoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00954550, void, StopShoot, (SpiderBatAcidSprayBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F250, SpiderBatAcidSprayBehaviour_StopShoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00954560, void, OnEndTurningBehaviourEvent, (SpiderBatAcidSprayBehaviour * __this, IEntityBehaviour * behaviour, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00954570, void, StartTimeline, (SpiderBatAcidSprayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00954740, void, OnTimelineSequenceStopEvent, (SpiderBatAcidSprayBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F138, SpiderBatAcidSprayBehaviour_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00954940, void, Shoot, (SpiderBatAcidSprayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00955230, void, __ctor, (SpiderBatAcidSprayBehaviour * __this));
}
