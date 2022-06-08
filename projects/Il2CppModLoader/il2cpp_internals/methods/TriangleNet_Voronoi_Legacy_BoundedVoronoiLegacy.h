#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::Legacy::BoundedVoronoiLegacy {
IL2CPP_REGISTER_METHOD(0x02AA8790, void, __ctor, (BoundedVoronoiLegacy * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AA8850, void, __ctor, (BoundedVoronoiLegacy * __this, Mesh_1 * mesh, bool includeBoundary));
IL2CPP_REGISTER_METHOD(0x002FB950, Point__Array *, get_Points, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, ICollection_1_TriangleNet_Voronoi_Legacy_VoronoiRegion_ *, get_Regions, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x02AA8920, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, get_Edges, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x02AA8930, void, Generate, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x02AA8EF0, void, ComputeCircumCenters, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x02AA92A0, void, TagBlindTriangles, (BoundedVoronoiLegacy * __this));
IL2CPP_REGISTER_METHOD(0x02AA9A60, bool, TriangleIsBlinded, (BoundedVoronoiLegacy * __this, Otri * tri, Osub * seg));
IL2CPP_REGISTER_METHOD(0x02AA9C80, void, ConstructCell, (BoundedVoronoiLegacy * __this, Vertex * vertex));
IL2CPP_REGISTER_METHODINFO(0x0470E468, BoundedVoronoiLegacy_ConstructCell__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AAA580, void, ConstructBoundaryCell, (BoundedVoronoiLegacy * __this, Vertex * vertex));
IL2CPP_REGISTER_METHODINFO(0x04731110, BoundedVoronoiLegacy_ConstructBoundaryCell__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AAB910, bool, SegmentsIntersect, (BoundedVoronoiLegacy * __this, Point * p1, Point * p2, Point * p3, Point * p4, Point * * p, bool strictIntersect));
IL2CPP_REGISTER_METHOD(0x02AABCF0, IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (BoundedVoronoiLegacy * __this));
}
