using namespace app;

namespace app::methods::AkImageSourceSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkImageSourceSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E7820, void *, getCPtr, (AkImageSourceSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkImageSourceSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E78B0, void, Finalize, (AkImageSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E7930, void, Dispose, (AkImageSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E7B40, void, __ctor, (AkImageSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E7C60, void, __ctor, (AkImageSourceSettings * __this, AkVector * in_sourcePosition, float in_fDistanceScalingFactor, float in_fLevel));
IL2CPP_REGISTER_METHOD(0x026E7DD0, void, SetOneTexture, (AkImageSourceSettings * __this, uint32_t in_texture));
IL2CPP_REGISTER_METHOD(0x026E7F00, void, SetName, (AkImageSourceSettings * __this, String * in_pName));
IL2CPP_REGISTER_METHOD(0x026E8100, void, set_params_, (AkImageSourceSettings * __this, AkImageSourceParams * value));
IL2CPP_REGISTER_METHOD(0x026E8290, AkImageSourceParams *, get_params_, (AkImageSourceSettings * __this));
}
