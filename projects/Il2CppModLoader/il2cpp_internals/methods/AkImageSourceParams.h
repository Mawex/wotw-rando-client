using namespace app;

namespace app::methods::AkImageSourceParams {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkImageSourceParams * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E6390, void *, getCPtr, (AkImageSourceParams * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkImageSourceParams * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E6420, void, Finalize, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E64A0, void, Dispose, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E66B0, void, __ctor, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E67D0, void, __ctor, (AkImageSourceParams * __this, AkVector * in_sourcePosition, float in_fDistanceScalingFactor, float in_fLevel));
IL2CPP_REGISTER_METHOD(0x026E6940, void, set_sourcePosition, (AkImageSourceParams * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x026E6A80, AkVector *, get_sourcePosition, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E6C90, void, set_fDistanceScalingFactor, (AkImageSourceParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E6DC0, float, get_fDistanceScalingFactor, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E6EE0, void, set_fLevel, (AkImageSourceParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E7010, float, get_fLevel, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E7130, void, set_fDiffraction, (AkImageSourceParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E7260, float, get_fDiffraction, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E7380, void, set_uDiffractionEmitterSide, (AkImageSourceParams * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026E74B0, uint8_t, get_uDiffractionEmitterSide, (AkImageSourceParams * __this));
IL2CPP_REGISTER_METHOD(0x026E75D0, void, set_uDiffractionListenerSide, (AkImageSourceParams * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026E7700, uint8_t, get_uDiffractionListenerSide, (AkImageSourceParams * __this));
}
