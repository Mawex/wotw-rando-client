using namespace app;

namespace app::methods::Moon::ArtOptimization::Sample {
IL2CPP_REGISTER_METHOD(0x002FA280, TexturePoolEntity *, get_MasterTex, (Sample * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_MasterTex, (Sample * __this, TexturePoolEntity * value));
IL2CPP_REGISTER_METHOD(0x002FB930, TexturePoolEntity *, get_SampleTex, (Sample * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SampleTex, (Sample * __this, TexturePoolEntity * value));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_Energy, (Sample * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_Energy, (Sample * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Sample * __this));
IL2CPP_REGISTER_METHOD(0x0134FD70, void, __ctor, (Sample * __this, TexturePoolEntity * master, TexturePoolEntity * sample));
IL2CPP_REGISTER_METHOD(0x0134FEF0, void, __ctor, (Sample * __this, TexturePoolEntity * master, Texture * sample));
IL2CPP_REGISTER_METHOD(0x01350070, void, CleanUp, (Sample * __this));
}
