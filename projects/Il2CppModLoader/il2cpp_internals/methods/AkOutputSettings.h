using namespace app;

namespace app::methods::AkOutputSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkOutputSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018863F0, void *, getCPtr, (AkOutputSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkOutputSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01886480, void, Finalize, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x01886500, void, Dispose, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x01886710, void, __ctor, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x01886830, void, __ctor, (AkOutputSettings * __this, String * in_szDeviceShareSet, uint32_t in_idDevice, AkChannelConfig * in_channelConfig, AkPanningRule__Enum in_ePanning));
IL2CPP_REGISTER_METHOD(0x01886A60, void, __ctor, (AkOutputSettings * __this, String * in_szDeviceShareSet, uint32_t in_idDevice, AkChannelConfig * in_channelConfig));
IL2CPP_REGISTER_METHOD(0x01886C90, void, __ctor, (AkOutputSettings * __this, String * in_szDeviceShareSet, uint32_t in_idDevice));
IL2CPP_REGISTER_METHOD(0x01886EA0, void, __ctor, (AkOutputSettings * __this, String * in_szDeviceShareSet));
IL2CPP_REGISTER_METHOD(0x018870A0, void, set_audioDeviceShareset, (AkOutputSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018871D0, uint32_t, get_audioDeviceShareset, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x018872F0, void, set_idDevice, (AkOutputSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01887420, uint32_t, get_idDevice, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x01887540, void, set_ePanningRule, (AkOutputSettings * __this, AkPanningRule__Enum value));
IL2CPP_REGISTER_METHOD(0x01887670, AkPanningRule__Enum, get_ePanningRule, (AkOutputSettings * __this));
IL2CPP_REGISTER_METHOD(0x01887790, void, set_channelConfig, (AkOutputSettings * __this, AkChannelConfig * value));
IL2CPP_REGISTER_METHOD(0x018878D0, AkChannelConfig *, get_channelConfig, (AkOutputSettings * __this));
}
