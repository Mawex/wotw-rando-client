using namespace app;

namespace app::methods::TriangleNet::Topology::DCEL::HalfEdge {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (HalfEdge * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Boundary, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Boundary, (HalfEdge * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, Vertex_1 *, get_Origin, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Origin, (HalfEdge * __this, Vertex_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Face *, get_Face, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Face, (HalfEdge * __this, Face * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, HalfEdge *, get_Twin, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Twin, (HalfEdge * __this, HalfEdge * value));
IL2CPP_REGISTER_METHOD(0x002FB990, HalfEdge *, get_Next, (HalfEdge * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Next, (HalfEdge * __this, HalfEdge * value));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (HalfEdge * __this, Vertex_1 * origin));
IL2CPP_REGISTER_METHOD(0x02AA1D20, void, __ctor, (HalfEdge * __this, Vertex_1 * origin, Face * face));
IL2CPP_REGISTER_METHOD(0x02AA1D40, String *, ToString, (HalfEdge * __this));
}
