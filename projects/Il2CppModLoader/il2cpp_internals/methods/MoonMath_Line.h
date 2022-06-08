#include <interception_macros.h>

namespace app::methods::MoonMath_Line {
IL2CPP_REGISTER_METHOD(0x02575B10, Vector3, ClosestPointOnLineSegmentToPoint2D, (Vector3 p1, Vector3 p2, Vector3 p));
IL2CPP_REGISTER_METHOD(0x02575ED0, Vector3, ClosestPointOnLineSegmentToPoint3D, (Vector3 point1, Vector3 point2, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02576200, float, DistancePointToLine2D, (Vector3 p1, Vector3 p2, Vector3 p));
IL2CPP_REGISTER_METHOD(0x02576350, float, DistanceToSegment, (Vector3 point1, Vector3 point2, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02576690, float, DistanceToSegment2D, (Vector3 point1, Vector3 point2, Vector3 point));
IL2CPP_REGISTER_METHOD(0x025769D0, bool, SegmentIntersectsCircle, (Vector2 point1, Vector2 point2, Vector2 circlePos, float radius));
}
