using namespace app;

namespace app::methods::SteeringForces {
IL2CPP_REGISTER_METHOD(0x0064E550, void, Init, (SteeringForces * __this));
IL2CPP_REGISTER_METHOD(0x0064E760, SteeringForces_SteeringForcesBuilder *, GetForcesBuilder, (SteeringForces * __this));
IL2CPP_REGISTER_METHOD(0x0064E840, void, SetColliderValidation, (SteeringForces * __this, Predicate_1_UnityEngine_Collider_ * colliderValidation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawGizmos, (SteeringForces * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x0064E860, void, __ctor, (SteeringForces * __this));
}
