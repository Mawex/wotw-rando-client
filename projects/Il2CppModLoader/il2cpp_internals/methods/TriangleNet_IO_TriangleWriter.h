using namespace app;

namespace app::methods::TriangleNet::IO::TriangleWriter {
IL2CPP_REGISTER_METHOD(0x02625800, void, Write, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02625900, void, WriteNodes, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02625AF0, void, WriteNodes, (TriangleWriter * __this, StreamWriter * writer, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02626010, void, WriteNodes, (TriangleWriter * __this, StreamWriter * writer, IEnumerable_1_TriangleNet_Geometry_Vertex_ * nodes, bool markers, int32_t attribs, bool jettison));
IL2CPP_REGISTER_METHOD(0x026262E0, void, WriteElements, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02626990, void, WritePoly, (TriangleWriter * __this, IPolygon * polygon, String * filename));
IL2CPP_REGISTER_METHOD(0x026276F0, void, WritePoly, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02627710, void, WritePoly, (TriangleWriter * __this, Mesh_1 * mesh, String * filename, bool writeNodes));
IL2CPP_REGISTER_METHOD(0x026283E0, void, WriteEdges, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x02628DD0, void, WriteNeighbors, (TriangleWriter * __this, Mesh_1 * mesh, String * filename));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TriangleWriter * __this));
IL2CPP_REGISTER_METHOD(0x02629420, void, __cctor, (MethodInfo * method));
}
