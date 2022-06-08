using namespace app;

namespace app::methods::Moon::CartographerDesertPatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x00CC2B10, void, OnEntityInitialized, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC2BD0, void, OnEnter, (CartographerDesertPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (CartographerDesertPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CC2C80, Vector2, get_MovingDirection, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC2E00, Transform *, get_GoalTransform, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC2F90, void, FinishedIdle, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A0B8, CartographerDesertPatrolBehaviour_FinishedIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CC2FF0, void, SwitchState, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC30C0, void, PlayBreakup, (CartographerDesertPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC3380, BehaviourStatus__Enum, OnExecute, (CartographerDesertPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CC3870, void, __ctor, (CartographerDesertPatrolBehaviour * __this));
}
