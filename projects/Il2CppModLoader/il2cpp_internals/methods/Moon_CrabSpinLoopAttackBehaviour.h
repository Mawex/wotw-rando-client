#include <interception_macros.h>

namespace app::methods::Moon::CrabSpinLoopAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00CCD280, void, OnEnter, (CrabSpinLoopAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCD6E0, BehaviourStatus__Enum, OnExecute, (CrabSpinLoopAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCD810, void, OnExit, (CrabSpinLoopAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CCDA00, void, ChangeState, (CrabSpinLoopAttackBehaviour * __this, CrabSpinLoopAttackBehaviour_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00CCDB70, void, UpdateState, (CrabSpinLoopAttackBehaviour * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00CCDB90, void, OnStartTimelineStopped, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E5C8, CrabSpinLoopAttackBehaviour_OnStartTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCDBA0, void, OnLoopTimelineStopped, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E580, CrabSpinLoopAttackBehaviour_OnLoopTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCDBF0, void, OnEndTimelineStopped, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04794578, CrabSpinLoopAttackBehaviour_OnEndTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCDBF0, void, OnDizzyTimelineStopped, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04751CE0, CrabSpinLoopAttackBehaviour_OnDizzyTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CCDC10, void, CacheSerializedComponents, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCDDE0, void, CacheCancellableAnimators, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCE200, float, GetMoveDelta, (CrabSpinLoopAttackBehaviour * __this, float direction, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartAttackTimeline, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCE220, bool, ShouldFinishMovement, (CrabSpinLoopAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CCE230, void, OnWeaponStickCollision, (CrabSpinLoopAttackBehaviour * __this, Collider * collider, Vector3 overlapCenter, Vector3 direction, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x00CCE410, void, __ctor, (CrabSpinLoopAttackBehaviour * __this));
}
