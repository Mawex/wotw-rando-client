#include <interception_macros.h>

namespace app::methods::TriangleNet::Mesh {
IL2CPP_REGISTER_METHOD(0x002FBBA0, Rectangle *, get_Bounds, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A230, ICollection_1_TriangleNet_Geometry_Vertex_ *, get_Vertices, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, IList_1_TriangleNet_Geometry_Point_ *, get_Holes, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, ICollection_1_TriangleNet_Topology_Triangle_ *, get_Triangles, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A2C0, ICollection_1_TriangleNet_Topology_SubSegment_ *, get_Segments, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A350, IEnumerable_1_TriangleNet_Geometry_Edge_ *, get_Edges, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_NumberOfInputPoints, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A4E0, int32_t, get_NumberOfEdges, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A520, bool, get_IsPolygon, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0073EDA0, NodeNumbering__Enum, get_CurrentNumbering, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A530, void, Initialize, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262A9D0, void, __ctor, (Mesh_1 * __this, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x0262B100, void, Refine, (Mesh_1 * __this, QualityOptions * quality, bool delaunay));
IL2CPP_REGISTER_METHOD(0x0262B3E0, void, Renumber, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262B3F0, void, Renumber, (Mesh_1 * __this, NodeNumbering__Enum num));
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetQualityMesher, (Mesh_1 * __this, QualityMesher * qmesher));
IL2CPP_REGISTER_METHOD(0x0262B9A0, void, CopyTo, (Mesh_1 * __this, Mesh_1 * target));
IL2CPP_REGISTER_METHOD(0x0262BA10, void, ResetData, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262BBC0, void, Reset, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262BD00, void, TransferNodes, (Mesh_1 * __this, IList_1_TriangleNet_Geometry_Vertex_ * points));
IL2CPP_REGISTER_METHODINFO(0x047180D8, Mesh_1_TransferNodes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0262C0F0, void, MakeVertexMap, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x0262C260, void, MakeTriangle, (Mesh_1 * __this, Otri * newotri));
IL2CPP_REGISTER_METHOD(0x0262C400, void, MakeSegment, (Mesh_1 * __this, Osub * newsubseg));
IL2CPP_REGISTER_METHOD(0x0262C6A0, InsertVertexResult__Enum, InsertVertex, (Mesh_1 * __this, Vertex * newvertex, Otri * searchtri, Osub * splitseg, bool segmentflaws, bool triflaws));
IL2CPP_REGISTER_METHOD(0x0262D8E0, void, InsertSubseg, (Mesh_1 * __this, Otri * tri, int32_t subsegmark));
IL2CPP_REGISTER_METHOD(0x0262DD80, void, Flip, (Mesh_1 * __this, Otri * flipedge));
IL2CPP_REGISTER_METHOD(0x0262E7E0, void, Unflip, (Mesh_1 * __this, Otri * flipedge));
IL2CPP_REGISTER_METHOD(0x0262F250, void, TriangulatePolygon, (Mesh_1 * __this, Otri firstedge, Otri lastedge, int32_t edgecount, bool doflip, bool triflaws));
IL2CPP_REGISTER_METHOD(0x0262F720, void, DeleteVertex, (Mesh_1 * __this, Otri * deltri));
IL2CPP_REGISTER_METHOD(0x0262FCA0, void, UndoVertex, (Mesh_1 * __this));
IL2CPP_REGISTER_METHOD(0x026307A0, void, TriangleDealloc, (Mesh_1 * __this, Triangle * dyingtriangle));
IL2CPP_REGISTER_METHOD(0x02630940, void, VertexDealloc, (Mesh_1 * __this, Vertex * dyingvertex));
IL2CPP_REGISTER_METHOD(0x026309F0, void, SubsegDealloc, (Mesh_1 * __this, SubSegment * dyingsubseg));
}
