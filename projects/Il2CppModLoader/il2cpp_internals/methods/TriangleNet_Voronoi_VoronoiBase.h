#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::VoronoiBase {
IL2CPP_REGISTER_METHOD(0x02AAEFA0, void, __ctor, (VoronoiBase * __this, Mesh_1 * mesh, IVoronoiFactory * factory, IPredicates * predicates, bool generate));
IL2CPP_REGISTER_METHOD(0x02AAF050, void, Generate, (VoronoiBase * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AAF8B0, List_1_TriangleNet_Topology_DCEL_HalfEdge___Array *, ComputeVertices, (VoronoiBase * __this, Mesh_1 * mesh, Vertex_1__Array * vertices));
IL2CPP_REGISTER_METHOD(0x02AAFEB0, void, ComputeEdges, (VoronoiBase * __this, Mesh_1 * mesh, Vertex_1__Array * vertices, Face__Array * faces, List_1_TriangleNet_Topology_DCEL_HalfEdge___Array * map));
IL2CPP_REGISTER_METHOD(0x02AB0540, void, ConnectEdges, (VoronoiBase * __this, List_1_TriangleNet_Topology_DCEL_HalfEdge___Array * map));
IL2CPP_REGISTER_METHOD(0x02AB0870, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (VoronoiBase * __this));
}
