using namespace app;

namespace app::methods::AkChannelConfig {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkChannelConfig * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026D5DC0, void *, getCPtr, (AkChannelConfig * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkChannelConfig * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026D5E50, void, Finalize, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D5ED0, void, Dispose, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D60E0, void, set_uNumChannels, (AkChannelConfig * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026D6210, uint32_t, get_uNumChannels, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D6330, void, set_eConfigType, (AkChannelConfig * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026D6460, uint32_t, get_eConfigType, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D6580, void, set_uChannelMask, (AkChannelConfig * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026D66B0, uint32_t, get_uChannelMask, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D67D0, void, __ctor, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D68F0, void, __ctor, (AkChannelConfig * __this, uint32_t in_uNumChannels, uint32_t in_uChannelMask));
IL2CPP_REGISTER_METHOD(0x026D6A30, void, Clear, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D6B50, void, SetStandard, (AkChannelConfig * __this, uint32_t in_uChannelMask));
IL2CPP_REGISTER_METHOD(0x026D6C80, void, SetStandardOrAnonymous, (AkChannelConfig * __this, uint32_t in_uNumChannels, uint32_t in_uChannelMask));
IL2CPP_REGISTER_METHOD(0x026D6DC0, void, SetAnonymous, (AkChannelConfig * __this, uint32_t in_uNumChannels));
IL2CPP_REGISTER_METHOD(0x026D6EF0, void, SetAmbisonic, (AkChannelConfig * __this, uint32_t in_uNumChannels));
IL2CPP_REGISTER_METHOD(0x026D7020, bool, IsValid, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D7150, uint32_t, Serialize, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D7270, void, Deserialize, (AkChannelConfig * __this, uint32_t in_uChannelConfig));
IL2CPP_REGISTER_METHOD(0x026D73A0, AkChannelConfig *, RemoveLFE, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D75A0, AkChannelConfig *, RemoveCenter, (AkChannelConfig * __this));
IL2CPP_REGISTER_METHOD(0x026D77A0, bool, IsChannelConfigSupported, (AkChannelConfig * __this));
}
