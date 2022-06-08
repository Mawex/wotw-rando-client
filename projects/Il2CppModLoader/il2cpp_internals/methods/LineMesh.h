using namespace app;

namespace app::methods::LineMesh {
IL2CPP_REGISTER_METHOD(0x00FA50C0, Vector3, get_LastPosition, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA5180, int32_t, get_Length, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA5210, float, get_WorldSpaceLength, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA53B0, void, UpdateMesh, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA5430, void, Awake, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA5620, void, Reset, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA5720, void, UpdateTriangles, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA59F0, void, UpdateVertices, (LineMesh * __this));
IL2CPP_REGISTER_METHOD(0x00FA6CC0, void, __ctor, (LineMesh * __this));
}
