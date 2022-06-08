#include <interception_macros.h>

namespace app::methods::TriangleNet::Topology::DCEL::DcelMesh {
IL2CPP_REGISTER_METHOD(0x02AA0220, void, __ctor, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x02AA0230, void, __ctor, (DcelMesh * __this, bool initialize));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_TriangleNet_Topology_DCEL_Vertex_ *, get_Vertices, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_TriangleNet_Topology_DCEL_HalfEdge_ *, get_HalfEdges, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_TriangleNet_Topology_DCEL_Face_ *, get_Faces, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, get_Edges, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x02AA0530, bool, IsConsistent, (DcelMesh * __this, bool closed, int32_t depth));
IL2CPP_REGISTER_METHOD(0x02AA0CF0, void, ResolveBoundaryEdges, (DcelMesh * __this));
IL2CPP_REGISTER_METHOD(0x02AA1270, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (DcelMesh * __this));
}
