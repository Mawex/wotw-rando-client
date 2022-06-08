#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::Extensions::BasicConstraintsExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (BasicConstraintsExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x0291E0C0, void, Decode, (BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04789D90, BasicConstraintsExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291E2F0, void, Encode, (BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CertificateAuthority, (BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291E660, String *, get_Name, (BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291E6E0, String *, ToString, (BasicConstraintsExtension * __this));
}
