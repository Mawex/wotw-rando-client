#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x021D4A00, void, __ctor, (X509EnhancedKeyUsageExtension * __this, AsnEncodedData * encodedEnhancedKeyUsages, bool critical));
IL2CPP_REGISTER_METHOD(0x021D4B90, void, CopyFrom, (X509EnhancedKeyUsageExtension * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x04740638, X509EnhancedKeyUsageExtension_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D4EA0, AsnDecodeStatus__Enum, Decode, (X509EnhancedKeyUsageExtension * __this, Byte__Array * extension));
IL2CPP_REGISTER_METHODINFO(0x04750870, X509EnhancedKeyUsageExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D52F0, String *, ToString, (X509EnhancedKeyUsageExtension * __this, bool multiLine));
}
