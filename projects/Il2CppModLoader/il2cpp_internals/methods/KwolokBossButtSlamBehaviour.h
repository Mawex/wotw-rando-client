#include <interception_macros.h>

namespace app::methods::KwolokBossButtSlamBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01248680, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012486C0, void, InitializeCancellableController, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01248710, void, OnEntityInitialized, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01248960, void, OnEnter, (KwolokBossButtSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01248F50, BehaviourStatus__Enum, OnExecute, (KwolokBossButtSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01249050, void, OnExit, (KwolokBossButtSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01249630, float, ComputeUtility, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01249860, void, InitializeHitReactionController, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012498B0, void, OnBeamSpawnEvent, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04725830, KwolokBossButtSlamBehaviour_OnBeamSpawnEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01249C30, bool, IsRightMomentForButtSlam, (KwolokBossButtSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01249EF0, void, ModifyStayAtRangeSettings, (KwolokBossButtSlamBehaviour * __this, KwolokBossLocomotion_StayAtRangeSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047321B0, KwolokBossButtSlamBehaviour_ModifyStayAtRangeSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01249F40, void, ModifyMaxSpeed, (KwolokBossButtSlamBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x04768840, KwolokBossButtSlamBehaviour_ModifyMaxSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01249F50, void, ModifyLookAngleChangeSpeed, (KwolokBossButtSlamBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x04773868, KwolokBossButtSlamBehaviour_ModifyLookAngleChangeSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124A050, void, ModifyAcceleration, (KwolokBossButtSlamBehaviour * __this, float * acceleration, float * deceleration));
IL2CPP_REGISTER_METHODINFO(0x04759148, KwolokBossButtSlamBehaviour_ModifyAcceleration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124A080, void, __ctor, (KwolokBossButtSlamBehaviour * __this));
}
