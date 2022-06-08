using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::SslCipherSuite {
IL2CPP_REGISTER_METHOD(0x01F7CDB0, void, __ctor, (SslCipherSuite * __this, int16_t code, String * name, CipherAlgorithmType__Enum cipherAlgorithmType, HashAlgorithmType__Enum hashAlgorithmType, ExchangeAlgorithmType__Enum exchangeAlgorithmType, bool exportable, bool blockMode, uint8_t keyMaterialSize, uint8_t expandedKeyMaterialSize, int16_t effectiveKeyBytes, uint8_t ivSize, uint8_t blockSize));
IL2CPP_REGISTER_METHOD(0x01F7CFB0, Byte__Array *, ComputeServerRecordMAC, (SslCipherSuite * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHOD(0x01F7D3A0, Byte__Array *, ComputeClientRecordMAC, (SslCipherSuite * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHOD(0x01F7D7A0, void, ComputeMasterSecret, (SslCipherSuite * __this, Byte__Array * preMasterSecret));
IL2CPP_REGISTER_METHOD(0x01F7DA60, void, ComputeKeys, (SslCipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F7E0B0, Byte__Array *, prf, (SslCipherSuite * __this, Byte__Array * secret, String * label, Byte__Array * random));
}
