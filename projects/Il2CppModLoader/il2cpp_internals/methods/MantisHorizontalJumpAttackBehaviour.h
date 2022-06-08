#include <interception_macros.h>

namespace app::methods::MantisHorizontalJumpAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x009FE820, void, Awake, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FE8A0, void, CacheSerializedComponents, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FE920, bool, IsBlockingInterruption, (MantisHorizontalJumpAttackBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x009FE990, void, StartTimeline, (MantisHorizontalJumpAttackBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x009FECD0, void, ResetTimeline, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FEF30, void, ForceStopTimeline, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FF170, void, MoveToNextState, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047322D0, MantisHorizontalJumpAttackBehaviour_MoveToNextState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FF1C0, void, OnEntityInitialized, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009FF580, void, OnCollisionWithWall, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 localNormal, Collider * other));
IL2CPP_REGISTER_METHODINFO(0x04704EF8, MantisHorizontalJumpAttackBehaviour_OnCollisionWithWall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009FF5F0, void, OnEnter, (MantisHorizontalJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009FFB90, void, SetupJump, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A00730, void, CalculateJumpParameters, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A01B50, void, Flip, (MantisHorizontalJumpAttackBehaviour * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x00A01B90, void, ChangeState, (MantisHorizontalJumpAttackBehaviour * __this, MantisHorizontalJumpAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A021E0, BehaviourStatus__Enum, OnExecute, (MantisHorizontalJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A02DF0, void, SetOnPathEndParameters, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A02E50, void, OnExit, (MantisHorizontalJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (MantisHorizontalJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A03240, Vector3, GetPositionOnSpline, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t));
IL2CPP_REGISTER_METHOD(0x00A03470, Vector3, GetNextPositionOnPath, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 currentPosition, float xVelocity, float deltaTime, bool * finnishedPath));
IL2CPP_REGISTER_METHOD(0x00A038A0, bool, SolidsInRange, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 position, float radius));
IL2CPP_REGISTER_METHOD(0x00A039A0, bool, SolidsInRay, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 rayStart, Vector3 direction, float distance));
IL2CPP_REGISTER_METHOD(0x00A03B20, bool, WillHitSolids, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 checkDistance));
IL2CPP_REGISTER_METHOD(0x00A03BD0, Vector3, ProcessRootMotion, (MantisHorizontalJumpAttackBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047511F8, MantisHorizontalJumpAttackBehaviour_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A03D10, void, OnDrawGizmos, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A03FD0, void, DrawDebugJumpGizmos, (MantisHorizontalJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A04950, void, __ctor, (MantisHorizontalJumpAttackBehaviour * __this));
}
