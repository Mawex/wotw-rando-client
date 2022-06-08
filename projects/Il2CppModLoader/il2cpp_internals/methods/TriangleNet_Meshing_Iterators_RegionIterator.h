using namespace app;

namespace app::methods::TriangleNet::Meshing::Iterators::RegionIterator {
IL2CPP_REGISTER_METHOD(0x02B11180, void, __ctor, (RegionIterator * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02B112D0, void, Process, (RegionIterator * __this, Triangle * triangle, int32_t boundary));
IL2CPP_REGISTER_METHOD(0x02B11520, void, Process, (RegionIterator * __this, Triangle * triangle, Action_1_TriangleNet_Topology_Triangle_ * action, int32_t boundary));
IL2CPP_REGISTER_METHOD(0x02B11990, void, ProcessRegion, (RegionIterator * __this, Action_1_TriangleNet_Topology_Triangle_ * action, Func_2_TriangleNet_Topology_SubSegment_Boolean_ * protector));
}
