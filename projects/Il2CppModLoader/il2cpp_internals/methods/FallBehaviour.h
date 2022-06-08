using namespace app;

namespace app::methods::FallBehaviour {
IL2CPP_REGISTER_METHOD(0x00994900, void, OnInitialize, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009949A0, void, OnExecute, (FallBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x00994D20, void, FallingEnter, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00994F30, void, FallingUpdate, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00995100, void, LandingEnter, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009954C0, void, SpawnImpactEffect, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00995650, void, LandingEnd, (FallBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047444B0, FallBehaviour_LandingEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00995820, void, BounceEnter, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00995D30, void, BounceUpdate, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00995E10, void, BounceEnd, (FallBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047439A8, FallBehaviour_BounceEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00996020, void, OnUpdateBehaviour, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00996120, void, OnEndBehaviour, (FallBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x009963B0, void, OnHitWall, (FallBehaviour * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04711B78, FallBehaviour_OnHitWall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009964B0, bool, WillClashWithNonInterruptableBehaviours, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (FallBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00996520, bool, _FallingEnter_b__21_0, (FallBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04703EA8, FallBehaviour__FallingEnter_b__21_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00996540, bool, _LandingEnter_b__23_0, (FallBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047198D0, FallBehaviour__LandingEnter_b__23_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00996550, bool, _BounceEnter_b__26_0, (FallBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047882D8, FallBehaviour__BounceEnter_b__26_0__MethodInfo);
}
