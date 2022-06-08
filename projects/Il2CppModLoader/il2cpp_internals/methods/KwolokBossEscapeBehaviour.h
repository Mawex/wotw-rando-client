using namespace app;

namespace app::methods::KwolokBossEscapeBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012DECB0, void, OnEnter, (KwolokBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012DF160, BehaviourStatus__Enum, OnExecute, (KwolokBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012DF640, void, OnExit, (KwolokBossEscapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012DF830, void, UpdateResetDamageDealers, (KwolokBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012DF8A0, void, SetSpeedToAnimations, (KwolokBossEscapeBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x012DFA00, void, OnEscapeTimelineEnded, (KwolokBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047695B8, KwolokBossEscapeBehaviour_OnEscapeTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012DFAA0, void, DisableDamageDealers, (KwolokBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012DFD60, void, ResetDamageDealers, (KwolokBossEscapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012DFE70, void, ModifyMaxLookAtWeights, (KwolokBossEscapeBehaviour * __this, Vector2 * weights));
IL2CPP_REGISTER_METHOD(0x012DFF20, void, __ctor, (KwolokBossEscapeBehaviour * __this));
}
