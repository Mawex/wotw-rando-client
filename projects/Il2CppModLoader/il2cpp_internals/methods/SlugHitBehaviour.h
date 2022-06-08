using namespace app;

namespace app::methods::SlugHitBehaviour {
IL2CPP_REGISTER_METHOD(0x006C5B70, void, OnInitialize, (SlugHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C5D60, void, OnDestroy, (SlugHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageReceived, (SlugHitBehaviour * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04700968, SlugHitBehaviour_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006C5F30, void, OnExecute, (SlugHitBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x006C5F40, void, ActivateDamageDealers, (SlugHitBehaviour * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x005B7700, void, OnAnimationFinished, (SlugHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C5FC0, void, OnEndBehaviour, (SlugHitBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (SlugHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (SlugHitBehaviour * __this));
}
