#include <interception_macros.h>

namespace app::methods::TriangleNet::Topology::DCEL::Face {
IL2CPP_REGISTER_METHOD(0x02AA1600, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (Face * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (Face * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB950, HalfEdge *, get_Edge, (Face * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Edge, (Face * __this, HalfEdge * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Bounded, (Face * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Bounded, (Face * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02AA1780, void, __ctor, (Face * __this, Point * generator));
IL2CPP_REGISTER_METHOD(0x02AA17A0, void, __ctor, (Face * __this, Point * generator, HalfEdge * edge));
IL2CPP_REGISTER_METHOD(0x02AA17C0, IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge_ *, EnumerateEdges, (Face * __this));
IL2CPP_REGISTER_METHOD(0x02AA1950, String *, ToString, (Face * __this));
}
