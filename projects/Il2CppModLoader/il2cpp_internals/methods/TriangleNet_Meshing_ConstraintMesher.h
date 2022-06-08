#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::ConstraintMesher {
IL2CPP_REGISTER_METHOD(0x02639E10, void, __ctor, (ConstraintMesher * __this, Mesh_1 * mesh, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x02639FF0, void, Apply, (ConstraintMesher * __this, IPolygon * input, ConstraintOptions * options));
IL2CPP_REGISTER_METHOD(0x0263A330, void, CarveHoles, (ConstraintMesher * __this));
IL2CPP_REGISTER_METHOD(0x0263AD70, void, FormSkeleton, (ConstraintMesher * __this, IPolygon * input));
IL2CPP_REGISTER_METHOD(0x0263B250, void, InfectHull, (ConstraintMesher * __this));
IL2CPP_REGISTER_METHOD(0x0263B500, void, Plague, (ConstraintMesher * __this));
IL2CPP_REGISTER_METHOD(0x0263BC60, FindDirectionResult__Enum, FindDirection, (ConstraintMesher * __this, Otri * searchtri, Vertex * searchpoint));
IL2CPP_REGISTER_METHODINFO(0x04760CE0, ConstraintMesher_FindDirection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0263BFE0, void, SegmentIntersection, (ConstraintMesher * __this, Otri * splittri, Osub * splitsubseg, Vertex * endpoint2));
IL2CPP_REGISTER_METHODINFO(0x04737DB0, ConstraintMesher_SegmentIntersection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0263C7F0, bool, ScoutSegment, (ConstraintMesher * __this, Otri * searchtri, Vertex * endpoint2, int32_t newmark));
IL2CPP_REGISTER_METHOD(0x0263CAB0, void, DelaunayFixup, (ConstraintMesher * __this, Otri * fixuptri, bool leftside));
IL2CPP_REGISTER_METHOD(0x0263CE30, void, ConstrainedEdge, (ConstraintMesher * __this, Otri * starttri, Vertex * endpoint2, int32_t newmark));
IL2CPP_REGISTER_METHOD(0x0263D1F0, void, InsertSegment, (ConstraintMesher * __this, Vertex * endpoint1, Vertex * endpoint2, int32_t newmark));
IL2CPP_REGISTER_METHODINFO(0x04701230, ConstraintMesher_InsertSegment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0263D5D0, void, MarkHull, (ConstraintMesher * __this));
}
