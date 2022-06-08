#include <interception_macros.h>

namespace app::methods::SandWormJumpAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00C1B7F0, void, OnEntityInitialized, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1B8C0, void, OnEnter, (SandWormJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1BAD0, BehaviourStatus__Enum, OnExecute, (SandWormJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1BF80, void, OnExit, (SandWormJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1C030, void, CheckPreJumpStateTransition, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1C160, bool, HasLineOfSightTo, (SandWormJumpAttackBehaviour * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00C1C450, void, CheckTowardsTargetStateTransition, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1C600, void, CheckTowardsLandingPointStateTransition, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1C800, void, ChangeState, (SandWormJumpAttackBehaviour * __this, SandWormJumpAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPreJumpState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1CA00, void, OnEnterTowardsTargetState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1CBB0, void, OnEnterTowardsLandingPointState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1CE10, void, OnEnterPreJumpState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTowardsTargetState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTowardsLandingPointState, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C1DA40, void, OnUpdatePreJumpState, (SandWormJumpAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00C1DB60, void, OnUpdateTowardsTargetState, (SandWormJumpAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00C1DC80, void, OnUpdateTowardsLandingPointState, (SandWormJumpAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00C1DF00, SandWormSandDigLocomotionBehaviour_SpeedEntry, GetCurrentSpeedEntry, (SandWormJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F010, SandWormJumpAttackBehaviour_GetCurrentSpeedEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C1DF70, void, __ctor, (SandWormJumpAttackBehaviour * __this));
}
