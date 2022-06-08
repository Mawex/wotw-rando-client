using namespace app;

namespace app::methods::Moon::RammingBehaviour_ChaseState {
IL2CPP_REGISTER_METHOD(0x00C503D0, String *, get_StateName, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C50450, void, __ctor, (RammingBehaviour_ChaseState * __this, RammingBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00C50570, void, OnEnter, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C50780, void, UpdateState, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C50C50, void, OnExit, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C50E30, bool, CanFallExhausted, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C51090, void, UpdateSpeed, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C514B0, void, UpdateRamHitAnimation, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C516A0, void, Turn, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C517A0, void, OnHitWall, (RammingBehaviour_ChaseState * __this, Vector3 wallNormal, Vector3 position, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00C51840, void, OnColliderHit, (RammingBehaviour_ChaseState * __this, MoonControllerColliderHit hitInfo));
IL2CPP_REGISTER_METHODINFO(0x0475D7A0, RammingBehaviour_ChaseState_OnColliderHit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C51C30, void, Accelerate, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C51E30, void, Brake, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C51FD0, void, UpdateBrakingPosition, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C52290, bool, ShouldPlayerRamHitAnimation, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHOD(0x00C524E0, void, OnRammingHitEnded, (RammingBehaviour_ChaseState * __this));
IL2CPP_REGISTER_METHODINFO(0x0475FCD8, RammingBehaviour_ChaseState_OnRammingHitEnded__MethodInfo);
}
