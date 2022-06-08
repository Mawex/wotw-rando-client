using namespace app;

namespace app::methods::TriangleNet::Voronoi::Legacy::VoronoiRegion {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (VoronoiRegion * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Point *, get_Generator, (VoronoiRegion * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ICollection_1_TriangleNet_Geometry_Point_ *, get_Vertices, (VoronoiRegion * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Bounded, (VoronoiRegion * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Bounded, (VoronoiRegion * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02AAE280, void, __ctor, (VoronoiRegion * __this, Vertex * generator));
IL2CPP_REGISTER_METHOD(0x02AAE4E0, void, Add, (VoronoiRegion * __this, Point * point));
IL2CPP_REGISTER_METHOD(0x02AAE580, void, Add, (VoronoiRegion * __this, List_1_TriangleNet_Geometry_Point_ * points));
IL2CPP_REGISTER_METHOD(0x02AAE630, VoronoiRegion *, GetNeighbor, (VoronoiRegion * __this, Point * p));
IL2CPP_REGISTER_METHOD(0x02AAE730, void, AddNeighbor, (VoronoiRegion * __this, int32_t id, VoronoiRegion * neighbor));
IL2CPP_REGISTER_METHOD(0x02AAE7F0, String *, ToString, (VoronoiRegion * __this));
}
