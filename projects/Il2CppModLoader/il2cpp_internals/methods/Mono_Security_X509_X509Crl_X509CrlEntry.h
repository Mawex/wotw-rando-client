using namespace app;

namespace app::methods::Mono::Security::X509::X509Crl_X509CrlEntry {
IL2CPP_REGISTER_METHOD(0x03164BB0, void, __ctor, (X509Crl_X509CrlEntry * __this, Byte__Array * serialNumber, DateTime revocationDate, X509ExtensionCollection_1 * extensions));
IL2CPP_REGISTER_METHOD(0x03164D10, void, __ctor, (X509Crl_X509CrlEntry * __this, ASN1_1 * entry));
IL2CPP_REGISTER_METHOD(0x03164F90, Byte__Array *, get_SerialNumber, (X509Crl_X509CrlEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, DateTime, get_RevocationDate, (X509Crl_X509CrlEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, X509ExtensionCollection_1 *, get_Extensions, (X509Crl_X509CrlEntry * __this));
IL2CPP_REGISTER_METHOD(0x031650D0, Byte__Array *, GetBytes, (X509Crl_X509CrlEntry * __this));
}
