using namespace app;

namespace app::methods::TriangleNet::Geometry::Polygon {
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_TriangleNet_Geometry_Vertex_ *, get_Points, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_TriangleNet_Geometry_Point_ *, get_Holes, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_TriangleNet_Geometry_RegionPointer_ *, get_Regions, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_TriangleNet_Geometry_ISegment_ *, get_Segments, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_HasPointMarkers, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_HasPointMarkers, (Polygon * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_HasSegmentMarkers, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0052A080, void, set_HasSegmentMarkers, (Polygon * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0261CDC0, int32_t, get_Count, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0261CE50, void, __ctor, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0261CE50, void, __ctor, (Polygon * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0261CE60, void, __ctor, (Polygon * __this, int32_t capacity, bool markers));
IL2CPP_REGISTER_METHOD(0x0261D240, void, AddContour, (Polygon * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points, int32_t marker, bool hole, bool convex));
IL2CPP_REGISTER_METHOD(0x0261D4B0, void, AddContour, (Polygon * __this, IEnumerable_1_TriangleNet_Geometry_Vertex_ * points, int32_t marker, Point * hole));
IL2CPP_REGISTER_METHOD(0x0261D630, Rectangle *, Bounds, (Polygon * __this));
IL2CPP_REGISTER_METHOD(0x0261D7B0, void, Add, (Polygon * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0261D850, void, Add, (Polygon * __this, ISegment * segment, bool insert));
IL2CPP_REGISTER_METHOD(0x0261D980, void, Add, (Polygon * __this, ISegment * segment, int32_t index));
IL2CPP_REGISTER_METHOD(0x0261DA70, void, Add, (Polygon * __this, Contour * contour, bool hole));
IL2CPP_REGISTER_METHOD(0x0261DBD0, void, Add, (Polygon * __this, Contour * contour, Point * hole));
}
