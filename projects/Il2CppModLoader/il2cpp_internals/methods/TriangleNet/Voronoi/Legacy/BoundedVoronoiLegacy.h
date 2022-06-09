#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::Legacy::BoundedVoronoiLegacy {
    IL2CPP_REGISTER_METHOD(0x02AA8790, void, __ctor_1, (app::BoundedVoronoiLegacy * this_ptr, app::Mesh_1 * mesh));
    IL2CPP_REGISTER_METHOD(0x02AA8850, void, __ctor_2, (app::BoundedVoronoiLegacy * this_ptr, app::Mesh_1 * mesh, bool include_boundary));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Point__Array *, get_Points, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ *, get_Regions, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AA8920, app::IEnumerable_1_TriangleNet_Geometry_IEdge_ *, get_Edges, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AA8930, void, Generate, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AA8EF0, void, ComputeCircumCenters, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AA92A0, void, TagBlindTriangles, (app::BoundedVoronoiLegacy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AA9A60, bool, TriangleIsBlinded, (app::BoundedVoronoiLegacy * this_ptr, app::Otri * tri, app::Osub * seg));
    IL2CPP_REGISTER_METHOD(0x02AA9C80, void, ConstructCell, (app::BoundedVoronoiLegacy * this_ptr, app::Vertex * vertex));
    IL2CPP_REGISTER_METHODINFO(0x0470E468, BoundedVoronoiLegacy_ConstructCell__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AAA580, void, ConstructBoundaryCell, (app::BoundedVoronoiLegacy * this_ptr, app::Vertex * vertex));
    IL2CPP_REGISTER_METHODINFO(0x04731110, BoundedVoronoiLegacy_ConstructBoundaryCell__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AAB910, bool, SegmentsIntersect, (app::BoundedVoronoiLegacy * this_ptr, app::Point * p1, app::Point * p2, app::Point * p3, app::Point * p4, app::Point * * p, bool strict_intersect));
    IL2CPP_REGISTER_METHOD(0x02AABCF0, app::IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (app::BoundedVoronoiLegacy * this_ptr));
}
