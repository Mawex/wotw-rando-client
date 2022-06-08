#include <interception_macros.h>

namespace app::methods::SpiderBossEscapeBehaviour {
IL2CPP_REGISTER_METHOD(0x011ABC60, bool, get_IsAttacking, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011ABD40, void, Start, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011ABEE0, void, OnDestroy, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AC080, void, OnPreRestoreCheckpoint, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04768E08, SpiderBossEscapeBehaviour_OnPreRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011AC150, void, OnEnterTask, (SpiderBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011AC2D0, void, AddEventCallbacks, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011ACA50, void, RemoveEventCallbacks, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD1D0, BehaviourStatus__Enum, OnExecuteTask, (SpiderBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011AD550, void, UpdateLogic, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD610, void, OnExitTask, (SpiderBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011AC080, void, StopAllTimelines, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD700, void, StartHitTransition, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD880, void, StartLoop, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD8B0, void, StartChase, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD900, void, ContinueToTopTrunk, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00AE6060, bool, ShouldPauseLocomotion, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011AD880, void, OnSpiderTransitionTimelineEnded, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047874F8, SpiderBossEscapeBehaviour_OnSpiderTransitionTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011AD900, void, OnSpiderEscapeToMidTimelineEnded, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04789490, SpiderBossEscapeBehaviour_OnSpiderEscapeToMidTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011AD970, void, OnSpiderEscapeToTopTimelineEnded, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04714430, SpiderBossEscapeBehaviour_OnSpiderEscapeToTopTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011AD980, void, OnCollapseArenaEvent, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C9C0, SpiderBossEscapeBehaviour_OnCollapseArenaEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011ADAD0, void, OnCollapseMidTrunkEvent, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F090, SpiderBossEscapeBehaviour_OnCollapseMidTrunkEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011ADC40, void, OnCollapseTopTrunkEvent, (SpiderBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047989D0, SpiderBossEscapeBehaviour_OnCollapseTopTrunkEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011ADDB0, void, SetSpeedToAnimations, (SpiderBossEscapeBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x011ADF10, void, __ctor, (SpiderBossEscapeBehaviour * __this));
}
