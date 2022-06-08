using namespace app;

namespace app::methods::Moon::SpiderlingMoveFastBehaviour {
IL2CPP_REGISTER_METHOD(0x007586C0, Vector3, get_PatrolOrigin, (SpiderlingMoveFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2D530, Vector3, get_TargetPosition, (SpiderlingMoveFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2E920, void, OnEntityInitialized, (SpiderlingMoveFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2E9F0, void, OnEnter, (SpiderlingMoveFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2EC50, Vector2, get_MovingDirectionRotated, (SpiderlingMoveFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2ED70, BehaviourStatus__Enum, OnExecute, (SpiderlingMoveFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2F2C0, void, OnExit, (SpiderlingMoveFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2F370, float, DirectionToTarget, (SpiderlingMoveFastBehaviour * __this, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x00E2F5E0, void, __ctor, (SpiderlingMoveFastBehaviour * __this));
}
