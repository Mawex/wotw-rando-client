using namespace app;

namespace app::methods::TriangleNet::MeshValidator {
IL2CPP_REGISTER_METHOD(0x02630FB0, bool, IsConsistent, (Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02631770, bool, IsDelaunay, (Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02631810, bool, IsConstrainedDelaunay, (Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x026318B0, bool, IsDelaunay, (Mesh_1 * mesh, bool constrained));
IL2CPP_REGISTER_METHOD(0x02632100, void, __cctor, (MethodInfo * method));
}
