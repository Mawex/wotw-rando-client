#include <interception_macros.h>

namespace app::methods::IntersectionHelper {
IL2CPP_REGISTER_METHOD(0x0063E090, bool, LinesIntersect, (Vector3 start0, Vector3 end0, Vector3 start1, Vector3 end1));
IL2CPP_REGISTER_METHOD(0x0063E370, bool, LineIntersectRect, (Rect rect, Vector3 lineFrom, Vector3 lineTo));
IL2CPP_REGISTER_METHOD(0x0063E4A0, bool, RayIntersectRect, (Rect rect, Vector3 rayOrigin, Vector3 rayDelta));
}
