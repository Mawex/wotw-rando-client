#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0257C610, void, __ctor, (X509KeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x0257C770, void, __ctor, (X509KeyUsageExtension * __this, AsnEncodedData * encodedKeyUsage, bool critical));
IL2CPP_REGISTER_METHOD(0x0257C900, void, __ctor, (X509KeyUsageExtension * __this, X509KeyUsageFlags__Enum keyUsages, bool critical));
IL2CPP_REGISTER_METHOD(0x0257CAA0, X509KeyUsageFlags__Enum, get_KeyUsages, (X509KeyUsageExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x047366B8, X509KeyUsageExtension_get_KeyUsages__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257CB60, void, CopyFrom, (X509KeyUsageExtension * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x04759620, X509KeyUsageExtension_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257CE70, X509KeyUsageFlags__Enum, GetValidFlags, (X509KeyUsageExtension * __this, X509KeyUsageFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0257CE80, AsnDecodeStatus__Enum, Decode, (X509KeyUsageExtension * __this, Byte__Array * extension));
IL2CPP_REGISTER_METHOD(0x0257D0F0, Byte__Array *, Encode, (X509KeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x0257D640, String *, ToString, (X509KeyUsageExtension * __this, bool multiLine));
}
