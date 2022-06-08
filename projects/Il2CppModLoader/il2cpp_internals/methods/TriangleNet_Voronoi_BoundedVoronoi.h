using namespace app;

namespace app::methods::TriangleNet::Voronoi::BoundedVoronoi {
IL2CPP_REGISTER_METHOD(0x02AA7800, void, __ctor, (BoundedVoronoi * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AA7990, void, __ctor, (BoundedVoronoi * __this, Mesh_1 * mesh, IVoronoiFactory * factory, IPredicates * predicates));
IL2CPP_REGISTER_METHOD(0x02AA7AA0, void, PostProcess, (BoundedVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AA7DC0, void, HandleCase1, (BoundedVoronoi * __this, HalfEdge * edge, Vertex * v1, Vertex * v2));
IL2CPP_REGISTER_METHOD(0x02AA8060, void, HandleCase2, (BoundedVoronoi * __this, HalfEdge * edge, Vertex * v1, Vertex * v2));
}
