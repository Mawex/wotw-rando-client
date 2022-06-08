#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::GroundPatrolWithDirectionTask {
IL2CPP_REGISTER_METHOD(0x00CB7600, Vector3, get_PatrolOrigin, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB7650, Vector2, get_MovingDirection, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB77D0, void, OnInitializeTask, (GroundPatrolWithDirectionTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB78A0, BehaviourStatus__Enum, OnExecuteTask, (GroundPatrolWithDirectionTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7B00, void, OnEnterTask, (GroundPatrolWithDirectionTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7DC0, void, OnExitTask, (GroundPatrolWithDirectionTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (GroundPatrolWithDirectionTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7E80, void, UpdateDirection, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB7EB0, void, StartIdle, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB8050, BehaviourStatus__Enum, UpdateIdle, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB8110, void, StartMoving, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB82B0, void, UpdateMoving, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB84C0, bool, KeepMoving, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB8D90, BehaviourStatus__Enum, ChangePatrolDirection, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB8DE0, bool, PointInsideSphere, (GroundPatrolWithDirectionTask * __this, Vector3 point, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (GroundPatrolWithDirectionTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB8ED0, void, __ctor, (GroundPatrolWithDirectionTask * __this));
}
