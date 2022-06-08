#include <interception_macros.h>

namespace app::methods::LocomotionUtils {
IL2CPP_REGISTER_METHOD(0x00FCA1F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawObstacleHitAvoidanceGizmos, ());
IL2CPP_REGISTER_METHOD(0x00FCA2A0, Vector3, GetGroundProjectedPoint, (Vector3 point, float offset));
IL2CPP_REGISTER_METHOD(0x00FCA5D0, Vector3, GetGroundProjectedTargetPosition, (Vector3 targetPosition, Vector3 gravityDirection, float offsetY, LayerMask layerMask, int32_t * requestId, float rayLength));
IL2CPP_REGISTER_METHOD(0x00FCA7E0, bool, ApplyCollisionAvoidance, (Vector2 * velocity, LocomotionUtils_CollisionAvoidanceSettings settings, float * obstacleAvoidanceStrength, int32_t * requestId, bool useBatched));
IL2CPP_REGISTER_METHOD(0x00FCB290, void, __cctor, ());
}
