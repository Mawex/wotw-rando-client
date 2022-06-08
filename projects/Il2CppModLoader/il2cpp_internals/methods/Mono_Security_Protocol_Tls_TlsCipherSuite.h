#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::TlsCipherSuite {
IL2CPP_REGISTER_METHOD(0x0291AB10, void, __ctor, (TlsCipherSuite * __this, int16_t code, String * name, CipherAlgorithmType__Enum cipherAlgorithmType, HashAlgorithmType__Enum hashAlgorithmType, ExchangeAlgorithmType__Enum exchangeAlgorithmType, bool exportable, bool blockMode, uint8_t keyMaterialSize, uint8_t expandedKeyMaterialSize, int16_t effectiveKeyBytes, uint8_t ivSize, uint8_t blockSize));
IL2CPP_REGISTER_METHOD(0x0291AD30, Byte__Array *, ComputeServerRecordMAC, (TlsCipherSuite * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHOD(0x0291B0A0, Byte__Array *, ComputeClientRecordMAC, (TlsCipherSuite * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHOD(0x0291B410, void, ComputeMasterSecret, (TlsCipherSuite * __this, Byte__Array * preMasterSecret));
IL2CPP_REGISTER_METHOD(0x0291B510, void, ComputeKeys, (TlsCipherSuite * __this));
}
