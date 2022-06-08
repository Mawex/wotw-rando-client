using namespace app;

namespace app::methods::KwolokBossHeadbuttBehaviour {
IL2CPP_REGISTER_METHOD(0x012E09B0, void, Start, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0BB0, void, OnEnter, (KwolokBossHeadbuttBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E0C90, BehaviourStatus__Enum, OnExecute, (KwolokBossHeadbuttBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E0D00, void, OnExit, (KwolokBossHeadbuttBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E0D60, float, ComputeUtility, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E0D80, void, OnFallingRockTriggerStart, (KwolokBossHeadbuttBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04770928, KwolokBossHeadbuttBehaviour_OnFallingRockTriggerStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E0E80, void, __ctor, (KwolokBossHeadbuttBehaviour * __this));
}
