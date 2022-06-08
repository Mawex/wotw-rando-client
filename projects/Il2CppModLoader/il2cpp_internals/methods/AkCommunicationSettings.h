using namespace app;

namespace app::methods::AkCommunicationSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkCommunicationSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026DC0F0, void *, getCPtr, (AkCommunicationSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkCommunicationSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026DC180, void, Finalize, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DC200, void, Dispose, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DC410, void, __ctor, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DC530, void, set_uPoolSize, (AkCommunicationSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DC660, uint32_t, get_uPoolSize, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DC780, void, set_uDiscoveryBroadcastPort, (AkCommunicationSettings * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026DC8B0, uint16_t, get_uDiscoveryBroadcastPort, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DC9D0, void, set_uCommandPort, (AkCommunicationSettings * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026DCB00, uint16_t, get_uCommandPort, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DCC20, void, set_uNotificationPort, (AkCommunicationSettings * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x026DCD50, uint16_t, get_uNotificationPort, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DCE70, void, set_bInitSystemLib, (AkCommunicationSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026DCFA0, bool, get_bInitSystemLib, (AkCommunicationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DD0D0, void, set_szAppNetworkName, (AkCommunicationSettings * __this, String * value));
IL2CPP_REGISTER_METHOD(0x026DD2D0, String *, get_szAppNetworkName, (AkCommunicationSettings * __this));
}
