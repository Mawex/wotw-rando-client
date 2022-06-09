#include <interception_macros.h>

namespace app::methods::Mono_Security_X509_Extensions::ExtendedKeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (app::ExtendedKeyUsageExtension * this_ptr, app::X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x0291E920, void, Decode, (app::ExtendedKeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04752E30, ExtendedKeyUsageExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291EC10, void, Encode, (app::ExtendedKeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, ArrayList *, get_KeyPurpose, (app::ExtendedKeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291F000, String *, get_Name, (app::ExtendedKeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291F080, String *, ToString, (app::ExtendedKeyUsageExtension * this_ptr));
}
