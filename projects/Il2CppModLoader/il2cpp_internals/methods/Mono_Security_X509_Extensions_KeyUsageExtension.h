#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::Extensions::KeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (KeyUsageExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02920F20, void, Decode, (KeyUsageExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04714038, KeyUsageExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02921150, void, Encode, (KeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x02921570, String *, get_Name, (KeyUsageExtension * __this));
IL2CPP_REGISTER_METHOD(0x029215F0, bool, Support, (KeyUsageExtension * __this, KeyUsages__Enum usage));
IL2CPP_REGISTER_METHOD(0x029216F0, String *, ToString, (KeyUsageExtension * __this));
}
