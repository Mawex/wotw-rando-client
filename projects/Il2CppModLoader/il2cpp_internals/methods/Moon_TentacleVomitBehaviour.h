#include <interception_macros.h>

namespace app::methods::Moon::TentacleVomitBehaviour {
IL2CPP_REGISTER_METHOD(0x010BBB10, void, OnEnter, (TentacleVomitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BBD00, void, PlayTimeline, (TentacleVomitBehaviour * __this, MoonTimeline * timeline, EventTriggerAnimator * vomitSection));
IL2CPP_REGISTER_METHOD(0x010BBEB0, void, OnVomitSectionActive, (TentacleVomitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475DC30, TentacleVomitBehaviour_OnVomitSectionActive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010BBF50, BehaviourStatus__Enum, OnExecute, (TentacleVomitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BC230, void, OnExit, (TentacleVomitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BC270, void, SpawnProjectile, (TentacleVomitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010BC730, void, OnProjectileCollision, (TentacleVomitBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04734310, TentacleVomitBehaviour_OnProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TentacleVomitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010BC9E0, void, __ctor, (TentacleVomitBehaviour * __this));
}
