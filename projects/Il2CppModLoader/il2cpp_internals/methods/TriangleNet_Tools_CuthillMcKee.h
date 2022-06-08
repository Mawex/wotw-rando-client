using namespace app;

namespace app::methods::TriangleNet::Tools::CuthillMcKee {
IL2CPP_REGISTER_METHOD(0x02A95410, Int32__Array *, Renumber, (CuthillMcKee * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A95590, Int32__Array *, Renumber, (CuthillMcKee * __this, AdjacencyMatrix * matrix));
IL2CPP_REGISTER_METHOD(0x02A958F0, Int32__Array *, GenerateRcm, (CuthillMcKee * __this));
IL2CPP_REGISTER_METHOD(0x02A95AE0, void, Rcm, (CuthillMcKee * __this, int32_t root, Int32__Array * mask, Int32__Array * perm, int32_t offset, int32_t * iccsze));
IL2CPP_REGISTER_METHOD(0x02A95FC0, void, FindRoot, (CuthillMcKee * __this, int32_t * root, Int32__Array * mask, int32_t * level_num, Int32__Array * level_row, Int32__Array * level, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02A962A0, void, GetLevelSet, (CuthillMcKee * __this, int32_t * root, Int32__Array * mask, int32_t * level_num, Int32__Array * level_row, Int32__Array * level, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02A965C0, void, Degree, (CuthillMcKee * __this, int32_t root, Int32__Array * mask, Int32__Array * deg, int32_t * iccsze, Int32__Array * ls, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02A969A0, int32_t, PermBandwidth, (CuthillMcKee * __this, Int32__Array * perm, Int32__Array * perm_inv));
IL2CPP_REGISTER_METHOD(0x02A96C00, Int32__Array *, PermInverse, (CuthillMcKee * __this, Int32__Array * perm));
IL2CPP_REGISTER_METHOD(0x02A96D10, void, ReverseVector, (CuthillMcKee * __this, Int32__Array * a, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x02A96DC0, void, Shift, (CuthillMcKee * __this, Int32__Array * a, bool up));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CuthillMcKee * __this));
}
