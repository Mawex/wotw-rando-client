using namespace app;

namespace app::methods::TriangleNet::Meshing::Algorithm::Dwyer {
IL2CPP_REGISTER_METHOD(0x026321A0, IMesh *, Triangulate, (Dwyer * __this, IList_1_TriangleNet_Geometry_Vertex_ * points, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x02632890, void, MergeHulls, (Dwyer * __this, Otri * farleft, Otri * innerleft, Otri * innerright, Otri * farright, int32_t axis));
IL2CPP_REGISTER_METHOD(0x02634A60, void, DivconqRecurse, (Dwyer * __this, int32_t left, int32_t right, int32_t axis, Otri * farleft, Otri * farright));
IL2CPP_REGISTER_METHOD(0x026355A0, int32_t, RemoveGhosts, (Dwyer * __this, Otri * startghost));
IL2CPP_REGISTER_METHOD(0x0049C100, void, __ctor, (Dwyer * __this));
}
