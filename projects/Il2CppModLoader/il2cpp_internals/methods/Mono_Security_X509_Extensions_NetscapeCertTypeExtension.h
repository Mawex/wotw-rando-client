#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::Extensions::NetscapeCertTypeExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (NetscapeCertTypeExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x02921BA0, void, Decode, (NetscapeCertTypeExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04702280, NetscapeCertTypeExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02921DD0, String *, get_Name, (NetscapeCertTypeExtension * __this));
IL2CPP_REGISTER_METHOD(0x02921E50, bool, Support, (NetscapeCertTypeExtension * __this, NetscapeCertTypeExtension_CertTypes__Enum usage));
IL2CPP_REGISTER_METHOD(0x02921F50, String *, ToString, (NetscapeCertTypeExtension * __this));
}
