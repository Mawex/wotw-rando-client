using namespace app;

namespace app::methods::System::Security::Cryptography::CspKeyContainerInfo {
IL2CPP_REGISTER_METHOD(0x020D0390, void, __ctor, (CspKeyContainerInfo * __this, CspParameters * parameters));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Accessible, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, CryptoKeySecurity *, get_CryptoKeySecurity, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Exportable, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HardwareDevice, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00571730, String *, get_KeyContainerName, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E83750, KeyNumber__Enum, get_KeyNumber, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_MachineKeyStore, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Protected, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x004173F0, String *, get_ProviderName, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x020D03A0, int32_t, get_ProviderType, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_RandomlyGenerated, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Removable, (CspKeyContainerInfo * __this));
IL2CPP_REGISTER_METHOD(0x020D03C0, String *, get_UniqueKeyContainerName, (CspKeyContainerInfo * __this));
}
