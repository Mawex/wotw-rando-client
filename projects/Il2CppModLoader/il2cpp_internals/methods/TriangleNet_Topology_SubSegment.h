using namespace app;

namespace app::methods::TriangleNet::Topology::SubSegment {
IL2CPP_REGISTER_METHOD(0x02AA4B40, void, __ctor, (SubSegment * __this));
IL2CPP_REGISTER_METHOD(0x02AA4C00, int32_t, get_P0, (SubSegment * __this));
IL2CPP_REGISTER_METHOD(0x02AA4C50, int32_t, get_P1, (SubSegment * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Label, (SubSegment * __this));
IL2CPP_REGISTER_METHOD(0x02AA4CA0, Vertex *, GetVertex, (SubSegment * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4CE0, ITriangle *, GetTriangle, (SubSegment * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (SubSegment * __this));
IL2CPP_REGISTER_METHOD(0x02AA4D40, String *, ToString, (SubSegment * __this));
}
