#include <interception_macros.h>

namespace app::methods::SwarmFollowPathBehaviour {
IL2CPP_REGISTER_METHOD(0x01820FB0, void, SetPatrolNodes, (SwarmFollowPathBehaviour * __this, List_1_UnityEngine_Vector3_ * patrolNodes));
IL2CPP_REGISTER_METHOD(0x01821270, void, OnEnter, (SwarmFollowPathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01821440, void, AssignLocomotionData, (SwarmFollowPathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417920, BehaviourStatus__Enum, OnExecute, (SwarmFollowPathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SwarmFollowPathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01821540, Vector3, GetPatrolNodePosition, (SwarmFollowPathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x018216E0, bool, CheckAndAssignPatrolNode, (SwarmFollowPathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004F2F80, void, ResetPatrol, (SwarmFollowPathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01821A50, void, __ctor, (SwarmFollowPathBehaviour * __this));
}
