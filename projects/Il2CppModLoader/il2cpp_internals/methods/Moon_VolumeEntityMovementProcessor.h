#include <interception_macros.h>

namespace app::methods::Moon::VolumeEntityMovementProcessor {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawObstacleHitAvoidanceGizmos, ());
IL2CPP_REGISTER_METHOD(0x0119CE50, bool, get_GravityDisabled, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119CE60, bool, get_IsObstacleAvoidanceDisabled, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119CE70, void, set_IsObstacleAvoidanceDisabled, (VolumeEntityMovementProcessor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0119CE80, float, get_CurrentObstacleAvoidanceStrength, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119CE90, void, Init, (VolumeEntityMovementProcessor * __this, Entity * entity, CharacterPlatformMovement * platformMovement, ILocomotionTurningHandler * turningHandler));
IL2CPP_REGISTER_METHOD(0x0119D0A0, void, UpdateAngle, (VolumeEntityMovementProcessor * __this, float speed, bool force));
IL2CPP_REGISTER_METHOD(0x0119D0E0, void, UpdateAngle, (VolumeEntityMovementProcessor * __this, Vector2 direction, float speed, bool force));
IL2CPP_REGISTER_METHOD(0x0119D150, void, UpdateAngle, (VolumeEntityMovementProcessor * __this, Vector2 targetDirection, float rotationSpeed, Transform * rotatedTransform, bool force));
IL2CPP_REGISTER_METHOD(0x0119D7C0, void, ChangeMovementSettings, (VolumeEntityMovementProcessor * __this, MovementSettings * newSettings));
IL2CPP_REGISTER_METHOD(0x0119D810, bool, get_AllowFreeRotation, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119D820, void, set_AllowFreeRotation, (VolumeEntityMovementProcessor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0119D830, void, TransferRotationToFeet, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119D9E0, void, TransferRotationFromFeet, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119DB70, void, UpdateCurrentAreaType, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119E180, bool, InWater, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119E2A0, bool, get_FreeMovement, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119E2D0, Vector2, ProcessFreeMovementSpeed, (VolumeEntityMovementProcessor * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x0119E760, void, CalculateSurfaceNormal, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0119EFC0, void, StickToSurface, (VolumeEntityMovementProcessor * __this, Vector3 downDirection, float lift, float distance));
IL2CPP_REGISTER_METHOD(0x0119F350, void, UpdateRotation, (VolumeEntityMovementProcessor * __this, float groundAngle, bool forceUpdate, float speedOverride));
IL2CPP_REGISTER_METHOD(0x0119FCF0, void, UpdateRotation, (VolumeEntityMovementProcessor * __this, Vector2 normal, bool forceUpdate, float speedOverride));
IL2CPP_REGISTER_METHOD(0x0119FDE0, void, RotateSmooth, (VolumeEntityMovementProcessor * __this, float targetAngle, float k));
IL2CPP_REGISTER_METHOD(0x011A0440, void, RotateToFallingVelocity, (VolumeEntityMovementProcessor * __this, Vector2 velocity, float k, float rotationLimit));
IL2CPP_REGISTER_METHOD(0x011A0A50, void, UpdateRotation, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011A0AA0, void, SnapGroundRotation, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011A0C40, Vector2, ProcessGroundedMovementSpeed, (VolumeEntityMovementProcessor * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x011A11D0, int32_t, GetDistribution, (int32_t variance));
IL2CPP_REGISTER_METHOD(0x011A1270, int32_t, GetDelay, (VolumeEntityMovementProcessor * __this, int32_t rate, int32_t variance));
IL2CPP_REGISTER_METHOD(0x011A1330, void, OnFixedUpdate, (VolumeEntityMovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x011A1960, Vector2, ProcessSpeedWithCollisionAvoidance, (VolumeEntityMovementProcessor * __this, Vector2 initialWorldVelocity));
IL2CPP_REGISTER_METHOD(0x011A1EC0, void, DebugDrawLolipop, (VolumeEntityMovementProcessor * __this, Vector3 from, Vector3 to, float radius, Color color));
IL2CPP_REGISTER_METHOD(0x011A2060, void, __ctor, (VolumeEntityMovementProcessor * __this));
}
