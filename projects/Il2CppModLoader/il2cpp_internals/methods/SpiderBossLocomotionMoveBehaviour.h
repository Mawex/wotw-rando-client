using namespace app;

namespace app::methods::SpiderBossLocomotionMoveBehaviour {
IL2CPP_REGISTER_METHOD(0x00A1FBC0, Vector3, get_TargetPosition, (SpiderBossLocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_TargetPosition, (SpiderBossLocomotionMoveBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FC020, float, get_TraversalSpeed, (SpiderBossLocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FC030, void, set_TraversalSpeed, (SpiderBossLocomotionMoveBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x011B6380, bool, get_HasArrivedAtZone, (SpiderBossLocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B6510, bool, get_HasArrivedAtTarget, (SpiderBossLocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B6630, void, OnEnterTask, (SpiderBossLocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B6740, void, OnFinishedMoveBehaviour, (SpiderBossLocomotionMoveBehaviour * __this, EntityTask * task, BehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x011B6750, BehaviourStatus__Enum, OnExecuteTask, (SpiderBossLocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B6770, void, OnExitTask, (SpiderBossLocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B6810, bool, IsInSameZone, (SpiderBossLocomotionMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x011B6980, bool, IsAtPoint, (SpiderBossLocomotionMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SpiderBossLocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B6AB0, void, __ctor, (SpiderBossLocomotionMoveBehaviour * __this));
}
