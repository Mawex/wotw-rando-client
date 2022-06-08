#include <interception_macros.h>

namespace app::methods::TriangleNet::Tools::PolygonValidator {
IL2CPP_REGISTER_METHOD(0x02A97720, bool, IsConsistent, (IPolygon * poly));
IL2CPP_REGISTER_METHOD(0x02A97EA0, bool, HasDuplicateVertices, (IPolygon * poly));
IL2CPP_REGISTER_METHOD(0x02A98080, bool, HasBadAngles, (IPolygon * poly, double threshold));
IL2CPP_REGISTER_METHOD(0x02A984A0, bool, IsBadAngle, (Point * a, Point * b, Point * c, double threshold));
IL2CPP_REGISTER_METHOD(0x02A98600, double, DotProduct, (Point * a, Point * b, Point * c));
IL2CPP_REGISTER_METHOD(0x02A98660, double, CrossProductLength, (Point * a, Point * b, Point * c));
IL2CPP_REGISTER_METHOD(0x02A986C0, int32_t, CheckVertexIDs, (IPolygon * poly, int32_t count));
IL2CPP_REGISTER_METHOD(0x02A98A80, int32_t, CheckDuplicateIDs, (IPolygon * poly));
}
