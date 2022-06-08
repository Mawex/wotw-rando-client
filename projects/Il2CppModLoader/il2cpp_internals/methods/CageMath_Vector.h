#include <interception_macros.h>

namespace app::methods::CageMath_Vector {
IL2CPP_REGISTER_METHOD(0x00823C00, float, Sign, (Vector2 p1, Vector2 p2, Vector2 p3));
IL2CPP_REGISTER_METHOD(0x00823C50, bool, PointInTriangle, (Vector2 pt, Vector2 v1, Vector2 v2, Vector2 v3));
IL2CPP_REGISTER_METHOD(0x00823D60, Vector3, ClosestPointOnTriangle, (Vector2 pt, Vector2 v1, Vector2 v2, Vector2 v3));
}
