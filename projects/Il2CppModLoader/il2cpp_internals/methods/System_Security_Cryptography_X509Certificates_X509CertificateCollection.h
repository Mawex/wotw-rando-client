using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509CertificateCollection {
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509CertificateCollection_1 * __this));
IL2CPP_REGISTER_METHOD(0x021CB260, void, __ctor, (X509CertificateCollection_1 * __this, X509Certificate_1__Array * value));
IL2CPP_REGISTER_METHOD(0x021CB380, void, __ctor, (X509CertificateCollection_1 * __this, X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHOD(0x021CB4D0, X509Certificate_1 *, get_Item, (X509CertificateCollection_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x021CB5D0, int32_t, Add, (X509CertificateCollection_1 * __this, X509Certificate_1 * value));
IL2CPP_REGISTER_METHODINFO(0x0470CB20, X509CertificateCollection_1_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CB6B0, void, AddRange, (X509CertificateCollection_1 * __this, X509Certificate_1__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04724418, X509CertificateCollection_1_AddRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CB7D0, void, AddRange, (X509CertificateCollection_1 * __this, X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHODINFO(0x04780498, X509CertificateCollection_1_AddRange_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CB910, X509CertificateCollection_X509CertificateEnumerator_1 *, GetEnumerator, (X509CertificateCollection_1 * __this));
IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode, (X509CertificateCollection_1 * __this));
}
