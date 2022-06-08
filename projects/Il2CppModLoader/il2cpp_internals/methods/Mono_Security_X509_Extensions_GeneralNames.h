using namespace app;

namespace app::methods::Mono::Security::X509::Extensions::GeneralNames {
IL2CPP_REGISTER_METHOD(0x0291F640, void, __ctor, (GeneralNames * __this, ASN1_1 * sequence));
IL2CPP_REGISTER_METHOD(0x02920050, String__Array *, get_DNSNames, (GeneralNames * __this));
IL2CPP_REGISTER_METHOD(0x02920180, String__Array *, get_IPAddresses, (GeneralNames * __this));
IL2CPP_REGISTER_METHOD(0x029202B0, String *, ToString, (GeneralNames * __this));
}
