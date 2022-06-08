using namespace app;

namespace app::methods::MoonMath_Vector {
IL2CPP_REGISTER_METHOD(0x02579E50, Vector2, ApplyCircleDeadzone, (Vector2 axis, float deadzoneRadius));
IL2CPP_REGISTER_METHOD(0x02579FB0, Vector2, ApplyRectangleDeadzone, (Vector2 axis, float deadzoneX, float deadzoneY));
IL2CPP_REGISTER_METHOD(0x0257A0F0, Vector3, Abs, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x01831B60, Vector3, Divide, (Vector3 a, Vector3 b));
IL2CPP_REGISTER_METHOD(0x0257A1F0, Vector2, RotateTowards, (Vector2 angleVector, Vector2 targetVector, float delta));
IL2CPP_REGISTER_METHOD(0x00823C50, bool, PointInTriangle, (Vector2 pt, Vector2 v1, Vector2 v2, Vector2 v3));
IL2CPP_REGISTER_METHOD(0x00823C00, float, sign, (Vector2 p1, Vector2 p2, Vector2 p3));
IL2CPP_REGISTER_METHOD(0x0257A340, float, Distance, (Vector3 start, Vector3 target));
IL2CPP_REGISTER_METHOD(0x0257A480, bool, PointInCircle, (Vector2 point, Vector2 circleCenter, float radius));
IL2CPP_REGISTER_METHOD(0x0257A4D0, float, Distance, (Vector3 start, Vector2 target));
IL2CPP_REGISTER_METHOD(0x01B14200, Vector3, Perpendicular3, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x018307C0, Vector2, Perpendicular, (Vector2 v));
IL2CPP_REGISTER_METHOD(0x0257A5C0, Vector3, Lerp2d, (Vector3 a, Vector3 b, float k));
IL2CPP_REGISTER_METHOD(0x0257A7B0, bool, LineIntersection, (Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4));
IL2CPP_REGISTER_METHOD(0x0257A7E0, bool, LineIntersection, (Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Vector2 * intersection));
}
