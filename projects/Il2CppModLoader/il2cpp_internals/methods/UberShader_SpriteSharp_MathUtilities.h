using namespace app;

namespace app::methods::UberShader::SpriteSharp::MathUtilities {
IL2CPP_REGISTER_METHOD(0x018FB210, float, LookUpSine, (float value));
IL2CPP_REGISTER_METHOD(0x018FB390, void, CreateSineLookupTable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018FB550, bool, AreLineSegmentsIntersecting, (Vector2 line1Start, Vector2 line1End, Vector2 line2Start, Vector2 line2End));
IL2CPP_REGISTER_METHOD(0x018FB660, float, CalculateTriangleArea, (Vector2 point1, Vector2 point2, Vector2 point3));
IL2CPP_REGISTER_METHOD(0x018FB750, float, CalculatePolygonArea, (Vector2__Array * polygon));
IL2CPP_REGISTER_METHOD(0x018FB8B0, bool, IsPointInsidePolygon, (Vector2 point, Vector2__Array * polygon));
IL2CPP_REGISTER_METHOD(0x018FBA00, bool, IsPointInsidePolygon, (Vector2 point, List_1_UnityEngine_Vector2_ * polygon));
IL2CPP_REGISTER_METHOD(0x018FBC00, bool, IsPolygonInsidePolygon, (Vector2__Array * innerPolygon, Rect innerPolygonRect, Vector2__Array * outerPolygon, Rect outerPolygonRect));
IL2CPP_REGISTER_METHOD(0x018FBFC0, bool, IsPolygonInsidePolygon, (Vector2__Array * innerPolygon, Vector2__Array * outerPolygon));
IL2CPP_REGISTER_METHOD(0x018FC2D0, bool, AreRectsIntersecting, (Rect a, Rect b));
IL2CPP_REGISTER_METHOD(0x018FC320, float, CalculateMeshArea, (UInt16__Array * triangles, Vector2__Array * vertices));
IL2CPP_REGISTER_METHOD(0x018FC540, float, CalculateMeshAreaAndBoundingBox, (UInt16__Array * triangles, Vector2__Array * vertices, Vector2 * min, Vector2 * max));
IL2CPP_REGISTER_METHOD(0x018FC890, Vector2, CenterOfMass, (List_1_UnityEngine_Vector2_ * points));
IL2CPP_REGISTER_METHOD(0x018FCA20, Vector2, CenterOfMass, (Vector2__Array * points));
IL2CPP_REGISTER_METHOD(0x018FCBA0, Vector2, PointCloudSize, (List_1_UnityEngine_Vector2_ * points));
IL2CPP_REGISTER_METHOD(0x018FCDC0, bool, HaveEqualSigns, (float a, float b));
IL2CPP_REGISTER_METHOD(0x018FCDE0, float, ManhattanDistance, (Vector3 a, Vector3 b));
IL2CPP_REGISTER_METHOD(0x018FCED0, void, __cctor, (MethodInfo * method));
}
