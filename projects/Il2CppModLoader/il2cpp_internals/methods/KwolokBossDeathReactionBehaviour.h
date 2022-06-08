#include <interception_macros.h>

namespace app::methods::KwolokBossDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x01252360, KwolokBossEntity *, get_Kwolok, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01252430, KwolokBossLocomotion *, get_Locomotion, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01252510, void, OnEnterTask, (KwolokBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01252B30, BehaviourStatus__Enum, OnExecuteTask, (KwolokBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01252CA0, void, OnExitTask, (KwolokBossDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01253210, void, TryAddMoveRequest, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253360, void, OnMoveWindowStarted, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FE80, KwolokBossDeathReactionBehaviour_OnMoveWindowStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01253370, void, AddCallbacks, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253650, void, RemoveCallbacks, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253930, void, StopAllTimelines, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253990, void, OnHitEnded, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04772488, KwolokBossDeathReactionBehaviour_OnHitEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01253A10, void, OnEscapeEnded, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04711B98, KwolokBossDeathReactionBehaviour_OnEscapeEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01253A90, void, ChangeState, (KwolokBossDeathReactionBehaviour * __this, KwolokBossDeathReactionBehaviour_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x01253B60, void, UpdateState, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253B70, void, EnterStateHit, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253BA0, void, EnterStateLoop, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01042E70, void, EnterStateEscape, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0C910, void, ExitStateHit, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253D80, void, ExitStateLoop, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F15500, void, ExitStateEscape, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateStateLoop, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01253F50, void, OnLoopStopped, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DE38, KwolokBossDeathReactionBehaviour_OnLoopStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01254070, void, ClearMoveRequest, (KwolokBossDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012540D0, void, ModifyMaxMovementSpeed, (KwolokBossDeathReactionBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x04761030, KwolokBossDeathReactionBehaviour_ModifyMaxMovementSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (KwolokBossDeathReactionBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x04796648, KwolokBossDeathReactionBehaviour_ModifyDesiredLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012540E0, void, ModifyCameraTargets, (KwolokBossDeathReactionBehaviour * __this, List_1_Moon_CameraTargetSettings_ * targets));
IL2CPP_REGISTER_METHODINFO(0x0478EA00, KwolokBossDeathReactionBehaviour_ModifyCameraTargets__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012541B0, void, __ctor, (KwolokBossDeathReactionBehaviour * __this));
}
