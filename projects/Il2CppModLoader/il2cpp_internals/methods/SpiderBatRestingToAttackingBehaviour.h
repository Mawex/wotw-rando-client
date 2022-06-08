#include <interception_macros.h>

namespace app::methods::SpiderBatRestingToAttackingBehaviour {
IL2CPP_REGISTER_METHOD(0x0095F0C0, void, OnEnter, (SpiderBatRestingToAttackingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0095F1A0, BehaviourStatus__Enum, OnExecute, (SpiderBatRestingToAttackingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, (SpiderBatRestingToAttackingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0095F1C0, void, OnEndTurningBehaviourEvent, (SpiderBatRestingToAttackingBehaviour * __this, IEntityBehaviour * behaviour, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x0095F1D0, void, StartTimeline, (SpiderBatRestingToAttackingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0095F3A0, void, OnTimelineSequenceStopEvent, (SpiderBatRestingToAttackingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FB50, SpiderBatRestingToAttackingBehaviour_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0095F550, void, FixedUpdate, (SpiderBatRestingToAttackingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0095F690, void, __ctor, (SpiderBatRestingToAttackingBehaviour * __this));
}
