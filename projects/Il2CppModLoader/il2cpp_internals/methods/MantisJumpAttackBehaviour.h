#include <interception_macros.h>

namespace app::methods::MantisJumpAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00A04E60, bool, get_m_jumpDirectionLeft, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A04E70, bool, get_IsOnGroundCondition, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A04EB0, void, Awake, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A04F30, void, CacheSerializedComponents, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A04FB0, bool, IsBlockingInterruption, (MantisJumpAttackBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00A05050, void, StartTimeline, (MantisJumpAttackBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00A05350, void, ForceStopTimeline, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A05590, void, ResetTimeline, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A057F0, void, MoveToNextState, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047512D0, MantisJumpAttackBehaviour_MoveToNextState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A05830, void, OnEntityInitialized, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A059D0, void, OnEnter, (MantisJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A06460, void, Jump, (MantisJumpAttackBehaviour * __this, float jumpDistance, float jumpHeight, float shortJumpHeight, float gravity));
IL2CPP_REGISTER_METHOD(0x00A068A0, void, Flip, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A068D0, void, ChangeState, (MantisJumpAttackBehaviour * __this, MantisJumpAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A07550, void, ChangeStateToLand, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A07580, BehaviourStatus__Enum, OnExecute, (MantisJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A07AA0, void, OnExit, (MantisJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (MantisJumpAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MantisJumpAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A07BB0, float, GetJumpHeightForIndex, (MantisJumpAttackBehaviour * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00A07BE0, Switch_1 *, GetSoundSwitchForIndex, (MantisJumpAttackBehaviour * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00A07C40, float, GetJumpDistanceForIndex, (MantisJumpAttackBehaviour * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00A07C70, void, OnCollisionDuringMain, (MantisJumpAttackBehaviour * __this, Collision * hit));
IL2CPP_REGISTER_METHODINFO(0x047097E0, MantisJumpAttackBehaviour_OnCollisionDuringMain__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A083A0, Vector3, ProcessRootMotion, (MantisJumpAttackBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04742EC8, MantisJumpAttackBehaviour_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A084E0, void, __ctor, (MantisJumpAttackBehaviour * __this));
}
