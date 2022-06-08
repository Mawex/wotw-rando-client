using namespace app;

namespace app::methods::Ionic::Zlib::InfTree {
IL2CPP_REGISTER_METHOD(0x0306E730, int32_t, huft_build, (InfTree * __this, Int32__Array * b, int32_t bindex, int32_t n, int32_t s, Int32__Array * d, Int32__Array * e, Int32__Array * t, Int32__Array * m, Int32__Array * hp, Int32__Array * hn, Int32__Array * v));
IL2CPP_REGISTER_METHOD(0x0306F440, int32_t, inflate_trees_bits, (InfTree * __this, Int32__Array * c, Int32__Array * bb, Int32__Array * tb, Int32__Array * hp, ZlibCodec * z));
IL2CPP_REGISTER_METHOD(0x0306F600, int32_t, inflate_trees_dynamic, (InfTree * __this, int32_t nl, int32_t nd, Int32__Array * c, Int32__Array * bl, Int32__Array * bd, Int32__Array * tl, Int32__Array * td, Int32__Array * hp, ZlibCodec * z));
IL2CPP_REGISTER_METHOD(0x0306F980, int32_t, inflate_trees_fixed, (Int32__Array * bl, Int32__Array * bd, Int32__Array__Array * tl, Int32__Array__Array * td, ZlibCodec * z));
IL2CPP_REGISTER_METHOD(0x0306FB70, void, initWorkArea, (InfTree * __this, int32_t vsize));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InfTree * __this));
IL2CPP_REGISTER_METHOD(0x0306FD90, void, __cctor, (MethodInfo * method));
}
