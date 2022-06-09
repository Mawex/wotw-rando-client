#include <interception_macros.h>

namespace app::methods::Mono_Security_X509_Extensions::KeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (app::KeyUsageExtension * this_ptr, app::X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02920F20, void, Decode, (app::KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04714038, KeyUsageExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02921150, void, Encode, (app::KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x02921570, String *, get_Name, (app::KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x029215F0, bool, Support, (app::KeyUsageExtension * this_ptr, app::KeyUsages__Enum usage));
IL2CPP_REGISTER_METHOD(0x029216F0, String *, ToString, (app::KeyUsageExtension * this_ptr));
}
