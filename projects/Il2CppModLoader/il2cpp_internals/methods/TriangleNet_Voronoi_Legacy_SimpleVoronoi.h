#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::Legacy::SimpleVoronoi {
IL2CPP_REGISTER_METHOD(0x02AAC360, void, __ctor, (SimpleVoronoi * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x002FB950, Point__Array *, get_Points, (SimpleVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AAC420, ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ *, get_Regions, (SimpleVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AAC4B0, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, get_Edges, (SimpleVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AAC4C0, void, Generate, (SimpleVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AACC60, void, ComputeCircumCenters, (SimpleVoronoi * __this));
IL2CPP_REGISTER_METHOD(0x02AAD0D0, void, ConstructCell, (SimpleVoronoi * __this, VoronoiRegion * region));
IL2CPP_REGISTER_METHOD(0x02AADCD0, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (SimpleVoronoi * __this));
}
