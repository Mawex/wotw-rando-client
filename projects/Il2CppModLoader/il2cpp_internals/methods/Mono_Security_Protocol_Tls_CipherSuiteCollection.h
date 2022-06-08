using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::CipherSuiteCollection {
IL2CPP_REGISTER_METHOD(0x01F65030, CipherSuite *, get_Item, (CipherSuiteCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F650F0, CipherSuite *, get_Item, (CipherSuiteCollection * __this, int16_t code));
IL2CPP_REGISTER_METHOD(0x01F651B0, void, __ctor, (CipherSuiteCollection * __this, SecurityProtocolType__Enum_1 protocol));
IL2CPP_REGISTER_METHODINFO(0x04798FF8, CipherSuiteCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F652B0, int32_t, IndexOf, (CipherSuiteCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F65480, int32_t, IndexOf, (CipherSuiteCollection * __this, int16_t code));
IL2CPP_REGISTER_METHOD(0x01F65630, void, Add, (CipherSuiteCollection * __this, int16_t code, String * name, CipherAlgorithmType__Enum cipherType, HashAlgorithmType__Enum hashType, ExchangeAlgorithmType__Enum exchangeType, bool exportable, bool blockMode, uint8_t keyMaterialSize, uint8_t expandedKeyMaterialSize, int16_t effectiveKeyBytes, uint8_t ivSize, uint8_t blockSize));
IL2CPP_REGISTER_METHOD(0x01F65990, IList_1_System_String_ *, GetNames, (CipherSuiteCollection * __this));
}
