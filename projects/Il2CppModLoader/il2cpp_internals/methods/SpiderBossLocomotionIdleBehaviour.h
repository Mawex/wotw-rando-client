#include <interception_macros.h>

namespace app::methods::SpiderBossLocomotionIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x011B5740, MoonTimeline *, GetIdleAnimation, (SpiderBossLocomotionIdleBehaviour * __this, SpiderBossLocationZone__Enum locationZone));
IL2CPP_REGISTER_METHOD(0x011B5800, bool, IsPlayingRightTimeline, (SpiderBossLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPlayingTimelines, (SpiderBossLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B5950, void, EnsureCorrectIdleIsPlaying, (SpiderBossLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B5BA0, void, ResetIdle, (SpiderBossLocomotionIdleBehaviour * __this, SpiderBossLocationZone__Enum zone));
IL2CPP_REGISTER_METHOD(0x011B5C40, void, SwapIdle, (SpiderBossLocomotionIdleBehaviour * __this, SpiderBossLocationZone__Enum zone, MirroredTimelineSet * timelines));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (SpiderBossLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B5C70, void, OnInitializeTask, (SpiderBossLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B5DE0, void, OnEnterTask, (SpiderBossLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B6050, BehaviourStatus__Enum, OnExecuteTask, (SpiderBossLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B62B0, void, OnExitTask, (SpiderBossLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SpiderBossLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (SpiderBossLocomotionIdleBehaviour * __this));
}
