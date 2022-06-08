using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainElement {
IL2CPP_REGISTER_METHOD(0x021CD040, void, __ctor, (X509ChainElement * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x002FA280, X509Certificate2 *, get_Certificate, (X509ChainElement * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, X509ChainStatus__Array *, get_ChainElementStatus, (X509ChainElement * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, X509ChainStatusFlags__Enum, get_StatusFlags, (X509ChainElement * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_StatusFlags, (X509ChainElement * __this, X509ChainStatusFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x021CD0E0, int32_t, Count, (X509ChainElement * __this, X509ChainStatusFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x021CD110, void, Set, (X509ChainElement * __this, X509ChainStatus__Array * status, int32_t * position, X509ChainStatusFlags__Enum flags, X509ChainStatusFlags__Enum mask));
IL2CPP_REGISTER_METHOD(0x021CD1A0, void, UncompressFlags, (X509ChainElement * __this));
}
