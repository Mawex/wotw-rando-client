using namespace app;

namespace app::methods::Moon::ArtOptimization::ResolutionPreset {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Width, (ResolutionPreset * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Width, (ResolutionPreset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Height, (ResolutionPreset * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Height, (ResolutionPreset * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Title, (ResolutionPreset * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Title, (ResolutionPreset * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0134FD60, void, __ctor, (ResolutionPreset * __this, int32_t width, int32_t height, String * title));
}
