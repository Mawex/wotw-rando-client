using namespace app;

namespace app::methods::TriangleNet::Tools::VertexSorter {
IL2CPP_REGISTER_METHOD(0x02A9F090, void, __ctor, (VertexSorter * __this, Vertex__Array * points, int32_t seed));
IL2CPP_REGISTER_METHOD(0x02A9F1F0, void, Sort, (Vertex__Array * array, int32_t seed));
IL2CPP_REGISTER_METHOD(0x02A9F370, void, Alternate, (Vertex__Array * array, int32_t length, int32_t seed));
IL2CPP_REGISTER_METHOD(0x02A9F530, void, QuickSort, (VertexSorter * __this, int32_t left, int32_t right));
IL2CPP_REGISTER_METHOD(0x02A9F920, void, AlternateAxes, (VertexSorter * __this, int32_t left, int32_t right, int32_t axis));
IL2CPP_REGISTER_METHOD(0x02A9F9E0, void, VertexMedianX, (VertexSorter * __this, int32_t left, int32_t right, int32_t median));
IL2CPP_REGISTER_METHOD(0x02A9FE00, void, VertexMedianY, (VertexSorter * __this, int32_t left, int32_t right, int32_t median));
}
