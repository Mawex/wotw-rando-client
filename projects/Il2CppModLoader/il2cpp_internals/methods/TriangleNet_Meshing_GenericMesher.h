#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::GenericMesher {
IL2CPP_REGISTER_METHOD(0x02B0F0C0, void, __ctor, (GenericMesher * __this));
IL2CPP_REGISTER_METHOD(0x02B0F2D0, void, __ctor, (GenericMesher * __this, ITriangulator * triangulator));
IL2CPP_REGISTER_METHOD(0x02B0F420, void, __ctor, (GenericMesher * __this, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x01A9AC30, void, __ctor, (GenericMesher * __this, ITriangulator * triangulator, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x02B0F570, IMesh *, Triangulate, (GenericMesher * __this, IList_1_TriangleNet_Geometry_Vertex_ * points));
IL2CPP_REGISTER_METHOD(0x02B0F610, IMesh *, Triangulate, (GenericMesher * __this, IPolygon * polygon));
IL2CPP_REGISTER_METHOD(0x02B0F630, IMesh *, Triangulate, (GenericMesher * __this, IPolygon * polygon, ConstraintOptions * options));
IL2CPP_REGISTER_METHOD(0x02B0F650, IMesh *, Triangulate, (GenericMesher * __this, IPolygon * polygon, QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x02B0F670, IMesh *, Triangulate, (GenericMesher * __this, IPolygon * polygon, ConstraintOptions * options, QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x02B0F990, IMesh *, StructuredMesh, (double width, double height, int32_t nx, int32_t ny));
IL2CPP_REGISTER_METHODINFO(0x047938A0, GenericMesher_StructuredMesh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0FBB0, IMesh *, StructuredMesh, (Rectangle * bounds, int32_t nx, int32_t ny));
}
