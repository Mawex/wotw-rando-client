#include <interception_macros.h>

namespace app::methods::SpiderBossTimelineBehaviourBase {
IL2CPP_REGISTER_METHOD(0x011BADD0, void, OnEnter, (SpiderBossTimelineBehaviourBase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BB080, void, OnProcessRootMotion, (SpiderBossTimelineBehaviourBase * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x04732AA8, SpiderBossTimelineBehaviourBase_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (SpiderBossTimelineBehaviourBase * __this));
IL2CPP_REGISTER_METHOD(0x011BB150, bool, ShouldPauseLocomotion, (SpiderBossTimelineBehaviourBase * __this));
IL2CPP_REGISTER_METHOD(0x011BB230, BehaviourStatus__Enum, OnExecute, (SpiderBossTimelineBehaviourBase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BB390, void, OnExit, (SpiderBossTimelineBehaviourBase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B1480, void, __ctor, (SpiderBossTimelineBehaviourBase * __this));
}
