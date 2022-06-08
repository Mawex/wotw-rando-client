#include <interception_macros.h>

namespace app::methods::SteeringForces_SteeringForcesBuilder {
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_Value, (SteeringForces_SteeringForcesBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0064EBB0, void, Reset, (SteeringForces_SteeringForcesBuilder * __this, SteeringForcesSettings * settings));
IL2CPP_REGISTER_METHOD(0x0064EC70, SteeringForces_SteeringForcesBuilder *, AddNoise, (SteeringForces_SteeringForcesBuilder * __this, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x0064EE40, SteeringForces_SteeringForcesBuilder *, AddDirectionAvoidance, (SteeringForces_SteeringForcesBuilder * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x0064F350, Vector3, DirectionAvoidance, (SteeringForces_SteeringForcesBuilder * __this, Vector3 origin, SteeringForcesAngleAvoidanceSettings * angleAvoidance, Vector3 direction, float offset, float distance, int32_t amountOfRays, float avoidanceScale, SteeringForces_AvoidanceCurve__Enum curve, bool useOffsetedDirection, bool reflect));
IL2CPP_REGISTER_METHOD(0x0064FCB0, bool, PassedValidation, (SteeringForces_SteeringForcesBuilder * __this, Collider * hitCollider));
IL2CPP_REGISTER_METHOD(0x0064FD60, float, ApplyAvoidanceCurve, (float scale, float normalizedDistance, SteeringForces_AvoidanceCurve__Enum curve));
IL2CPP_REGISTER_METHOD(0x0064FE90, Vector3, CalculateAvoidanceFromTarget, (Vector3 origin, Vector3 avoidanceTarget, float distance, float avoidanceScale, bool drawGizmo));
IL2CPP_REGISTER_METHOD(0x00650080, void, __ctor, (SteeringForces_SteeringForcesBuilder * __this));
}
