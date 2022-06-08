#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::Extensions::SubjectAltNameExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (SubjectAltNameExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02922360, void, Decode, (SubjectAltNameExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E950, SubjectAltNameExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029225E0, String *, get_Name, (SubjectAltNameExtension * __this));
IL2CPP_REGISTER_METHOD(0x02922660, String__Array *, get_DNSNames, (SubjectAltNameExtension * __this));
IL2CPP_REGISTER_METHOD(0x02922790, String__Array *, get_IPAddresses, (SubjectAltNameExtension * __this));
IL2CPP_REGISTER_METHOD(0x02384AA0, String *, ToString, (SubjectAltNameExtension * __this));
}
