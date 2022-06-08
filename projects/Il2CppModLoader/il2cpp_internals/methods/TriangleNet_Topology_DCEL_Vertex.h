using namespace app;

namespace app::methods::TriangleNet::Topology::DCEL::Vertex {
IL2CPP_REGISTER_METHOD(0x002FBB00, HalfEdge *, get_Leaving, (Vertex_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Leaving, (Vertex_1 * __this, HalfEdge * value));
IL2CPP_REGISTER_METHOD(0x0261CB00, void, __ctor, (Vertex_1 * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x02AA1E60, void, __ctor, (Vertex_1 * __this, double x, double y, HalfEdge * leaving));
IL2CPP_REGISTER_METHOD(0x02AA1E80, IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge_ *, EnumerateEdges, (Vertex_1 * __this));
IL2CPP_REGISTER_METHOD(0x02AA2010, String *, ToString, (Vertex_1 * __this));
}
