#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X500DistinguishedName {
IL2CPP_REGISTER_METHOD(0x021C26E0, void, __ctor, (X500DistinguishedName * __this, Byte__Array * encodedDistinguishedName));
IL2CPP_REGISTER_METHODINFO(0x0478F0D0, X500DistinguishedName__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C28B0, String *, Decode, (X500DistinguishedName * __this, X500DistinguishedNameFlags__Enum flag));
IL2CPP_REGISTER_METHODINFO(0x047802D8, X500DistinguishedName_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C2B50, String *, Format, (X500DistinguishedName * __this, bool multiLine));
IL2CPP_REGISTER_METHOD(0x021C2BC0, String *, GetSeparator, (X500DistinguishedNameFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x021C2C60, void, DecodeRawData, (X500DistinguishedName * __this));
IL2CPP_REGISTER_METHOD(0x021C2E20, String *, Canonize, (String * s));
IL2CPP_REGISTER_METHOD(0x021C31A0, bool, AreEqual, (X500DistinguishedName * name1, X500DistinguishedName * name2));
}
