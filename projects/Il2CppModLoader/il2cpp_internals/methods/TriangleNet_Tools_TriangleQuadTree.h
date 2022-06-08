using namespace app;

namespace app::methods::TriangleNet::Tools::TriangleQuadTree {
IL2CPP_REGISTER_METHOD(0x02A9BFD0, void, __ctor, (TriangleQuadTree * __this, Mesh_1 * mesh, int32_t maxDepth, int32_t sizeBound));
IL2CPP_REGISTER_METHOD(0x02A9C180, ITriangle *, Query, (TriangleQuadTree * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x02A9C540, bool, IsPointInTriangle, (Point * p, Point * t0, Point * t1, Point * t2));
IL2CPP_REGISTER_METHOD(0x0261CAB0, double, DotProduct, (Point * p, Point * q));
}
