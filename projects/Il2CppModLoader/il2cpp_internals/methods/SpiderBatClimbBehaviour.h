#include <interception_macros.h>

namespace app::methods::SpiderBatClimbBehaviour {
IL2CPP_REGISTER_METHOD(0x009552D0, bool, ShouldClimb, (SpiderBatClimbBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00955380, void, OnEnter, (SpiderBatClimbBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009553C0, BehaviourStatus__Enum, OnExecute, (SpiderBatClimbBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00955400, void, FixedUpdate, (SpiderBatClimbBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, (SpiderBatClimbBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00955610, void, StartTimeline, (SpiderBatClimbBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009557E0, void, OnTimelineSequenceStopEvent, (SpiderBatClimbBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472AA98, SpiderBatClimbBehaviour_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009559A0, void, __ctor, (SpiderBatClimbBehaviour * __this));
}
