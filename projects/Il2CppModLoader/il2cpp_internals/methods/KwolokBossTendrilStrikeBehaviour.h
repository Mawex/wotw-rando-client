#include <interception_macros.h>

namespace app::methods::KwolokBossTendrilStrikeBehaviour {
IL2CPP_REGISTER_METHOD(0x012EE6D0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EE6E0, void, ModifyPostAttackCooldown, (KwolokBossTendrilStrikeBehaviour * __this, bool * cooldown));
IL2CPP_REGISTER_METHOD(0x012EE6F0, void, OnEntityInitialized, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EEBE0, void, OnEnter, (KwolokBossTendrilStrikeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EF250, BehaviourStatus__Enum, OnExecute, (KwolokBossTendrilStrikeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EF350, void, OnExit, (KwolokBossTendrilStrikeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EF710, float, ComputeUtility, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EF950, void, InitializeHitReactionController, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EFA30, bool, ShouldCancel, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EFA60, bool, HasRemainingStrikes, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EFA80, void, OnDamageReceived, (KwolokBossTendrilStrikeBehaviour * __this, DamageResult damage));
IL2CPP_REGISTER_METHODINFO(0x04705E50, KwolokBossTendrilStrikeBehaviour_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012EFB60, void, OnAttackTrigger, (KwolokBossTendrilStrikeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476DBE8, KwolokBossTendrilStrikeBehaviour_OnAttackTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012F0110, Vector2, GetClosestPointInPath, (KwolokBossTendrilStrikeBehaviour * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x012F0340, void, __ctor, (KwolokBossTendrilStrikeBehaviour * __this));
}
