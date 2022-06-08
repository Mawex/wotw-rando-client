#include <interception_macros.h>

namespace app::methods::Moon::CrabClawAttackBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00CCAD00, void, OnEntityInitialized, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCB2F0, void, OnEnter, (CrabClawAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCB4B0, bool, IsInAttackRange, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCB600, bool, ShouldCancel, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCB760, BehaviourStatus__Enum, OnExecute, (CrabClawAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCB7E0, void, OnExit, (CrabClawAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCB930, void, MoveStart, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04759278, CrabClawAttackBehaviourNew_MoveStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCB940, void, MoveUpdate, (CrabClawAttackBehaviourNew * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00CCBE70, float, GetMoveDelta, (CrabClawAttackBehaviourNew * __this, float direction, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00CCBFB0, bool, ShouldFinishMovement, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCBFE0, float, GetMovementCurveTotalTime, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCC180, void, FaceTargetFlip, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04764CD8, CrabClawAttackBehaviourNew_FaceTargetFlip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCC2D0, float, GetLookDirection, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCC430, float, GetDirectionToTarget, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCC550, bool, ShouldPauseLocomotion, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCC570, void, __ctor, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00CCC5A0, void, _OnEntityInitialized_b__14_0, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04785FA8, CrabClawAttackBehaviourNew__OnEntityInitialized_b__14_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCC5E0, void, _OnEntityInitialized_b__14_1, (CrabClawAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E0F0, CrabClawAttackBehaviourNew__OnEntityInitialized_b__14_1__MethodInfo);
}
