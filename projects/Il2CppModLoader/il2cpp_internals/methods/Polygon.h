#include <interception_macros.h>

namespace app::methods::Polygon {
IL2CPP_REGISTER_METHOD(0x00C58D80, bool, ContainsPoint, (Polygon_1 * __this, Vector2 p, Matrix4x4 m));
IL2CPP_REGISTER_METHOD(0x00C590C0, void, add_OnPolygonUpdateComponents, (Polygon_1 * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00C591B0, void, remove_OnPolygonUpdateComponents, (Polygon_1 * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00C592A0, void, UpdateComponents, (Polygon_1 * __this));
IL2CPP_REGISTER_METHOD(0x00C59EE0, void, GenerateMesh, (Polygon_1 * __this, bool front, bool back, bool sides, float extrude, float elevate, bool useNormals, bool useUVS, Vector2 frontUVScale, Vector2 backUVScale, Vector2 sideUVScale, bool closed, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x00C5BCA0, bool, IsPointInside, (Polygon_1 * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00C5BFF0, float, GetAngle, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x00823730, float, DotProduct, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x00823780, float, CrossProductLength, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x00C5C100, Vector3, CalculateCenterOfMass, (Polygon_1 * __this));
IL2CPP_REGISTER_METHOD(0x00C5C3E0, bool, IsOrderInverted, (Polygon_1 * __this));
IL2CPP_REGISTER_METHOD(0x00C5C4F0, void, FixReverseOrder, (Polygon_1 * __this));
IL2CPP_REGISTER_METHOD(0x00C5C5C0, Vector3, ClosestPoint, (Polygon_1 * __this, Vector3 referencePoint));
IL2CPP_REGISTER_METHOD(0x00C5C9F0, void, __ctor, (Polygon_1 * __this));
}
