#include <interception_macros.h>

namespace app::methods::TriangleNet::Tools::IntersectionHelper {
IL2CPP_REGISTER_METHOD(0x02A96E40, void, IntersectSegments, (Point * p0, Point * p1, Point * q0, Point * q1, Point * * c0));
IL2CPP_REGISTER_METHOD(0x02A96F30, bool, LiangBarsky, (Rectangle * rect, Point * p0, Point * p1, Point * * c0, Point * * c1));
IL2CPP_REGISTER_METHOD(0x02A97160, bool, BoxRayIntersection, (Rectangle * rect, Point * p0, Point * p1, Point * * c1));
IL2CPP_REGISTER_METHOD(0x02A971B0, Point *, BoxRayIntersection, (Rectangle * rect, Point * p, double dx, double dy));
IL2CPP_REGISTER_METHOD(0x02A97360, bool, BoxRayIntersection, (Rectangle * rect, Point * p, double dx, double dy, Point * * c));
IL2CPP_REGISTER_METHOD(0x02A974C0, bool, LinePlaneIntersection, (Vector3 * intersection, Vector3 linePoint, Vector3 lineVec, Vector3 planeNormal, Vector3 planePoint));
}
