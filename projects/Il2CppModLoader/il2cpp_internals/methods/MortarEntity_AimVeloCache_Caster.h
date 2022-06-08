#include <interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_Caster {
IL2CPP_REGISTER_METHOD(0x01478B50, Vector3, TweakVelocity, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x01478B90, void, CheckNearTargets, (Vector3 entityPos, Vector3 arcInitialVelo, Vector3 arcFrom, Vector3 arcTo, float hitTolerance, List_1_UnityEngine_Vector3_ * targetOffsetsFromEntity, Int32__Array * targetGridAddress, MortarEntity_AimVeloCache_Grid * grid, Single__Array * arcMinDistToTarget));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugDrawArc, (MortarEntity_AimVeloCache_EntityParams * entity, int32_t spitOriginIndex, Vector3 initialVelo, Vector3 targetPos, Color color));
IL2CPP_REGISTER_METHOD(0x01478ED0, void, CastArcForTargets, (MortarEntity_AimVeloCache_EntityParams * entity, int32_t spitOriginIndex, Vector3 initialVelo, List_1_UnityEngine_Vector3_ * targetOffsetsFromEntity, MortarEntity_AimVeloCache_Grid * grid, Single__Array * arcMinDistToTarget));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MortarEntity_AimVeloCache_Caster * __this));
IL2CPP_REGISTER_METHOD(0x014796F0, void, __cctor, ());
}
