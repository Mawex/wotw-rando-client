using namespace app;

namespace app::methods::TriangleNet::Tools::TriangleQuadTree_QuadNode {
IL2CPP_REGISTER_METHOD(0x02A9CB50, void, __ctor, (TriangleQuadTree_QuadNode * __this, Rectangle * box, TriangleQuadTree * tree));
IL2CPP_REGISTER_METHOD(0x02A9CB70, void, __ctor, (TriangleQuadTree_QuadNode * __this, Rectangle * box, TriangleQuadTree * tree, bool init));
IL2CPP_REGISTER_METHOD(0x02A9D1F0, List_1_System_Int32_ *, FindTriangles, (TriangleQuadTree_QuadNode * __this, Point * searchPoint));
IL2CPP_REGISTER_METHOD(0x02A9D2A0, void, CreateSubRegion, (TriangleQuadTree_QuadNode * __this, int32_t currentDepth));
IL2CPP_REGISTER_METHOD(0x02A9E180, void, AddTriangleToRegion, (TriangleQuadTree_QuadNode * __this, Point__Array * triangle, int32_t index));
IL2CPP_REGISTER_METHOD(0x02A9E520, void, FindTriangleIntersections, (TriangleQuadTree_QuadNode * __this, Point__Array * triangle, int32_t index));
IL2CPP_REGISTER_METHOD(0x02A9E690, void, FindIntersectionsWithX, (TriangleQuadTree_QuadNode * __this, double dx, double dy, Point__Array * triangle, int32_t index, int32_t k));
IL2CPP_REGISTER_METHOD(0x02A9E9F0, void, FindIntersectionsWithY, (TriangleQuadTree_QuadNode * __this, double dx, double dy, Point__Array * triangle, int32_t index, int32_t k));
IL2CPP_REGISTER_METHOD(0x02A9ED40, int32_t, FindRegion, (TriangleQuadTree_QuadNode * __this, Point * point));
IL2CPP_REGISTER_METHOD(0x02A9EDA0, void, AddToRegion, (TriangleQuadTree_QuadNode * __this, int32_t index, int32_t region));
IL2CPP_REGISTER_METHOD(0x02A9EFE0, void, __cctor, (MethodInfo * method));
}
