using namespace app;

namespace app::methods::Moon::ArtOptimization::TexturePoolEntity {
IL2CPP_REGISTER_METHOD(0x00CB2DB0, void, __ctor, (TexturePoolEntity * __this, TexturesPool * pool));
IL2CPP_REGISTER_METHOD(0x00CB2F70, void, Release, (TexturePoolEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CB3030, void, Clear, (TexturePoolEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Texture2D *, get_Texture, (TexturePoolEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Texture, (TexturePoolEntity * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_InUse, (TexturePoolEntity * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_InUse, (TexturePoolEntity * __this, bool value));
}
