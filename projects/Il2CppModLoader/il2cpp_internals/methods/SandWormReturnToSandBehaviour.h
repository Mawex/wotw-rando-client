using namespace app;

namespace app::methods::SandWormReturnToSandBehaviour {
IL2CPP_REGISTER_METHOD(0x00C20C70, void, OnEntityInitialized, (SandWormReturnToSandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C20D20, void, OnEnter, (SandWormReturnToSandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C21220, bool, DoRaycastsForNewTargetPosition, (SandWormReturnToSandBehaviour * __this, Vector2__Array * directionsToCheck, float targetPositionDepth));
IL2CPP_REGISTER_METHOD(0x00C21600, bool, TryToFindNewTarget, (SandWormReturnToSandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C21E30, BehaviourStatus__Enum, OnExecute, (SandWormReturnToSandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SandWormReturnToSandBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C225C0, void, Kill, (SandWormReturnToSandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C227A0, bool, IsFullyInSand, (SandWormReturnToSandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C22870, bool, IsFullOutsideSand, (SandWormReturnToSandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C22A50, void, __ctor, (SandWormReturnToSandBehaviour * __this));
}
