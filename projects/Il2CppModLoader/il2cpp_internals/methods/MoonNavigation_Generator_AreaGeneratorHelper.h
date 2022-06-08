#include <interception_macros.h>

namespace app::methods::MoonNavigation::Generator::AreaGeneratorHelper {
IL2CPP_REGISTER_METHOD(0x0145B5C0, bool, LineIntersection, (Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Vector2 * intersection));
IL2CPP_REGISTER_METHOD(0x0145B800, List_1_UnityEngine_Vector2_ *, GetEnlargedPolygon, (List_1_UnityEngine_Vector2_ * old_points, float offset));
IL2CPP_REGISTER_METHOD(0x0145BE00, void, FindIntersection, (Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, bool * lines_intersect, bool * segments_intersect, Vector2 * intersection, Vector2 * close_p1, Vector2 * close_p2));
IL2CPP_REGISTER_METHOD(0x0145C040, bool, PolygonIsOrientedClockwise, (Vector2__Array * * Points));
IL2CPP_REGISTER_METHOD(0x0145C060, float, SignedPolygonArea, (Vector2__Array * * Points));
}
