using namespace app;

namespace app::methods::KwolokBossTauntBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocomotionFollowAllowed, (KwolokBossTauntBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EB7D0, void, OnEnter, (KwolokBossTauntBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EBA20, BehaviourStatus__Enum, OnExecute, (KwolokBossTauntBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EBAA0, void, OnExit, (KwolokBossTauntBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EBC80, void, InitializeHitReactionController, (KwolokBossTauntBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EBDF0, void, OnDamageReceived, (KwolokBossTauntBehaviour * __this, DamageResult damage));
IL2CPP_REGISTER_METHODINFO(0x0478E118, KwolokBossTauntBehaviour_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012EBE30, void, __ctor, (KwolokBossTauntBehaviour * __this));
}
