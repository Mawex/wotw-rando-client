using namespace app;

namespace app::methods::TriangleNet::Meshing::Converter {
IL2CPP_REGISTER_METHOD(0x0263D7F0, Mesh_1 *, ToMesh, (Polygon * polygon, IList_1_TriangleNet_Geometry_ITriangle_ * triangles));
IL2CPP_REGISTER_METHOD(0x0263D890, Mesh_1 *, ToMesh, (Polygon * polygon, ITriangle__Array * triangles));
IL2CPP_REGISTER_METHOD(0x0263DC80, List_1_TriangleNet_Topology_Otri___Array *, SetNeighbors, (Mesh_1 * mesh, ITriangle__Array * triangles));
IL2CPP_REGISTER_METHODINFO(0x0477BDA8, Converter_1_SetNeighbors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0263E7A0, void, SetSegments, (Mesh_1 * mesh, Polygon * polygon, List_1_TriangleNet_Topology_Otri___Array * vertexarray));
IL2CPP_REGISTER_METHODINFO(0x0476C640, Converter_1_SetSegments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0263F200, DcelMesh *, ToDCEL, (Mesh_1 * mesh));
}
