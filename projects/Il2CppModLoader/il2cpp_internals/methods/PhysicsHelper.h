using namespace app;

namespace app::methods::PhysicsHelper {
IL2CPP_REGISTER_METHOD(0x014FF820, void, AddForceSafe, (Rigidbody * rigidbody, Vector2 force));
IL2CPP_REGISTER_METHOD(0x014FF9F0, void, AddForceSafe, (Rigidbody * rigidbody, Vector2 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x014FFBD0, void, AddRelativeForce, (Rigidbody * rigidbody, Vector2 force));
IL2CPP_REGISTER_METHOD(0x014FFDA0, void, AddRelativeForceSafe, (Rigidbody * rigidbody, Vector2 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x014FFF80, void, IgnoreAllIntercollisionsBetweenChildren, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x015000A0, Vector3, CalculateAverageNormalFromContactPoints, (ContactPoint__Array * contacts));
IL2CPP_REGISTER_METHOD(0x01500290, Vector3, CalculateAverageGroundNormalFromContactPoints, (ContactPoint__Array * contacts));
IL2CPP_REGISTER_METHOD(0x01500530, void, CalculateArcTrajectory, (float gravity, Vector3 delta, float * time, Vector2 * speed, float height));
IL2CPP_REGISTER_METHOD(0x015007F0, void, CalculateVerticalSpeed, (float gravity, Vector3 delta, float speedX, float * speedY));
IL2CPP_REGISTER_METHOD(0x01500820, Vector2, CalculateArcForce, (Vector2 origin, Vector2 finalPoint, float gravity, Vector2 arcPeak));
IL2CPP_REGISTER_METHOD(0x01500A40, bool, CalculateArcForce, (Vector2 origin, Vector2 finalPoint, float gravity, float speed, Vector2 * forceLow, Vector2 * forceHigh));
IL2CPP_REGISTER_METHOD(0x01500D20, void, CalculateBestArcForce, (Vector2 origin, Vector2 finalPoint, float gravity, float speed, Vector2 * forceLow, Vector2 * forceHigh));
IL2CPP_REGISTER_METHOD(0x01501030, Vector2, CalculateArcForceBySpeed, (Vector2 startLocation, Vector2 endLocation, float gravity, float speed, float peak, float rot));
IL2CPP_REGISTER_METHOD(0x015011E0, Vector2, CalculateArcForce, (Vector2 origin, Vector2 finalPoint, float gravity, Vector2 arcPeak, float * duration));
IL2CPP_REGISTER_METHOD(0x01501410, Vector2, CalculateArcForceVariablePeak, (Vector2 origin, Vector2 finalPoint, float gravity, Vector2 arcPeak, float * duration));
IL2CPP_REGISTER_METHOD(0x01501670, Vector2, CalculateArcForce, (Vector2 origin, Vector2 finalPoint, float gravity, float characterHeight));
IL2CPP_REGISTER_METHOD(0x01501830, Vector2, CalculateArcForceForKnownTime, (Vector2 origin, Vector2 target, float gravity, float time));
IL2CPP_REGISTER_METHOD(0x01501940, bool, ArcSphereCast, (float gravity, float radius, Vector3 origin, Vector3 speed, float duration, LayerMask layerMask, GameObject * target, RaycastHit * finalHitInfo, float hitTolerance));
IL2CPP_REGISTER_METHOD(0x01501EE0, bool, ArcRayCast, (float gravity, Vector3 origin, Vector3 speed, float duration, LayerMask layerMask, GameObject * target, float hitTolerance));
IL2CPP_REGISTER_METHOD(0x01502540, float, CalculateSpeedFromHeight, (float height, float gravity));
IL2CPP_REGISTER_METHOD(0x01502600, float, CalculateHeightFromSpeed, (float speed, float gravity));
IL2CPP_REGISTER_METHOD(0x01502620, Vector2, CalculateJumpPeak, (Vector2 fromPosition, Vector2 jumpSpeed, Vector2 gravity));
IL2CPP_REGISTER_METHOD(0x015028A0, Vector2, CalculateJumpPeak, (Vector2 from, Vector2 to, float extraHeight, float fromWeight, float toWeight));
IL2CPP_REGISTER_METHOD(0x015029C0, void, __cctor, (MethodInfo * method));
}
