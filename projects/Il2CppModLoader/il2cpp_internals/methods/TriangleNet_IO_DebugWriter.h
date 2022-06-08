#include <interception_macros.h>

namespace app::methods::TriangleNet::IO::DebugWriter {
IL2CPP_REGISTER_METHOD(0x0261E810, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DebugWriter * __this));
IL2CPP_REGISTER_METHOD(0x0261E9B0, DebugWriter *, get_Session, ());
IL2CPP_REGISTER_METHOD(0x0261EA50, void, Start, (DebugWriter * __this, String * session));
IL2CPP_REGISTER_METHODINFO(0x0474E458, DebugWriter_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0261EC10, void, Write, (DebugWriter * __this, Mesh_1 * mesh, bool skip));
IL2CPP_REGISTER_METHOD(0x0261ECE0, void, Finish, (DebugWriter * __this));
IL2CPP_REGISTER_METHOD(0x0261ED80, void, Finish, (DebugWriter * __this, String * path));
IL2CPP_REGISTER_METHOD(0x0261F200, void, WriteGeometry, (DebugWriter * __this, IPolygon * geometry));
IL2CPP_REGISTER_METHOD(0x0261F2D0, void, WriteMesh, (DebugWriter * __this, Mesh_1 * mesh, bool skip));
IL2CPP_REGISTER_METHOD(0x026200E0, bool, VerticesChanged, (DebugWriter * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02620340, void, HashVertices, (DebugWriter * __this, Mesh_1 * mesh));
}
