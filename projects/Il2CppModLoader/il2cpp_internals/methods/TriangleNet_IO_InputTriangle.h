using namespace app;

namespace app::methods::TriangleNet::IO::InputTriangle {
IL2CPP_REGISTER_METHOD(0x026213E0, void, __ctor, (InputTriangle * __this, int32_t p0, int32_t p1, int32_t p2));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ID, (InputTriangle * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_ID, (InputTriangle * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Label, (InputTriangle * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Label, (InputTriangle * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Area, (InputTriangle * __this));
IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_Area, (InputTriangle * __this, double value));
IL2CPP_REGISTER_METHOD(0x00420EE0, Vertex *, GetVertex, (InputTriangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x026214E0, int32_t, GetVertexID, (InputTriangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00420EE0, ITriangle *, GetNeighbor, (InputTriangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetNeighborID, (InputTriangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00420EE0, ISegment *, GetSegment, (InputTriangle * __this, int32_t index));
}
