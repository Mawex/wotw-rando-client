#include <interception_macros.h>

namespace app::methods::KwolokBossProjectileFlurryBehaviour {
IL2CPP_REGISTER_METHOD(0x012E8730, bool, get_IsAttackOver, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E8740, bool, CanCancel, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E8790, void, InitializeCancellableController, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E87E0, void, Start, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E8990, void, OnEnter, (KwolokBossProjectileFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E8C30, void, ModifyLookAngleChangeSpeed, (KwolokBossProjectileFlurryBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x047294C8, KwolokBossProjectileFlurryBehaviour_ModifyLookAngleChangeSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E8C50, BehaviourStatus__Enum, OnExecute, (KwolokBossProjectileFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E8CE0, void, OnExit, (KwolokBossProjectileFlurryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E8FB0, float, ComputeUtility, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E9180, void, InitializeHitReactionController, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E91D0, void, StartShooting, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E92F0, void, FireProjectile, (KwolokBossProjectileFlurryBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047891E0, KwolokBossProjectileFlurryBehaviour_FireProjectile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E9900, void, ModifyStayAtRangeSettings, (KwolokBossProjectileFlurryBehaviour * __this, KwolokBossLocomotion_StayAtRangeSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04786558, KwolokBossProjectileFlurryBehaviour_ModifyStayAtRangeSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E9950, void, __ctor, (KwolokBossProjectileFlurryBehaviour * __this));
}
