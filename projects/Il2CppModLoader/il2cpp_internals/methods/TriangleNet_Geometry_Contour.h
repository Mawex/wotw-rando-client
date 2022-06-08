using namespace app;

namespace app::methods::TriangleNet::Geometry::Contour {
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_TriangleNet_Geometry_Vertex_ *, get_Points, (Contour * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Points, (Contour * __this, List_1_TriangleNet_Geometry_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x0261A6E0, void, __ctor, (Contour * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points));
IL2CPP_REGISTER_METHOD(0x0261A710, void, __ctor, (Contour * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points, int32_t marker));
IL2CPP_REGISTER_METHOD(0x0261A740, void, __ctor, (Contour * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points, int32_t marker, bool convex));
IL2CPP_REGISTER_METHOD(0x0261A780, List_1_TriangleNet_Geometry_ISegment_ *, GetSegments, (Contour * __this));
IL2CPP_REGISTER_METHOD(0x0261AC50, Point *, FindInteriorPoint, (Contour * __this, int32_t limit, double eps));
IL2CPP_REGISTER_METHOD(0x0261AEC0, void, AddPoints, (Contour * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points));
IL2CPP_REGISTER_METHOD(0x0261B090, Point *, FindPointInPolygon, (List_1_TriangleNet_Geometry_Vertex_ * contour, int32_t limit, double eps));
IL2CPP_REGISTER_METHODINFO(0x0476C540, Contour_FindPointInPolygon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0261B6E0, bool, IsPointInPolygon, (Point * point, List_1_TriangleNet_Geometry_Vertex_ * poly));
}
