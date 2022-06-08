#include <interception_macros.h>

namespace app::methods::Moon::TentacleSpawnBehaviour {
IL2CPP_REGISTER_METHOD(0x010B4F20, MoonTimeline *, get_EffectiveSpawnTimeline, (TentacleSpawnBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B4FD0, void, OnEnterTask, (TentacleSpawnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, TimelineStop, (TentacleSpawnBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04744288, TentacleSpawnBehaviour_TimelineStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B5290, BehaviourStatus__Enum, OnExecuteTask, (TentacleSpawnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010B57C0, void, OnExitTask, (TentacleSpawnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TentacleSpawnBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B5A50, void, __ctor, (TentacleSpawnBehaviour * __this));
}
