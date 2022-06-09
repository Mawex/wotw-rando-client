#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::Legacy::SimpleVoronoi {
    IL2CPP_REGISTER_METHOD(0x02AAC360, void, __ctor, (app::SimpleVoronoi * this_ptr, app::Mesh_1 * mesh));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Point__Array *, get_Points, (app::SimpleVoronoi * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AAC420, app::ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ *, get_Regions, (app::SimpleVoronoi * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AAC4B0, app::IEnumerable_1_TriangleNet_Geometry_IEdge_ *, get_Edges, (app::SimpleVoronoi * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AAC4C0, void, Generate, (app::SimpleVoronoi * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AACC60, void, ComputeCircumCenters, (app::SimpleVoronoi * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AAD0D0, void, ConstructCell, (app::SimpleVoronoi * this_ptr, app::VoronoiRegion * region));
    IL2CPP_REGISTER_METHOD(0x02AADCD0, app::IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (app::SimpleVoronoi * this_ptr));
}
