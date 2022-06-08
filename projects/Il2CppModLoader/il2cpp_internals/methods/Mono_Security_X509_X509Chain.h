#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Chain {
IL2CPP_REGISTER_METHOD(0x02940160, void, __ctor, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x029402B0, void, __ctor, (X509Chain_1 * __this, X509CertificateCollection_2 * chain));
IL2CPP_REGISTER_METHOD(0x002FBB00, X509CertificateCollection_2 *, get_Chain, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, X509Certificate_2 *, get_Root, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x00654950, X509ChainStatusFlags__Enum_1, get_Status, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x02940420, X509CertificateCollection_2 *, get_TrustAnchors, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TrustAnchors, (X509Chain_1 * __this, X509CertificateCollection_2 * value));
IL2CPP_REGISTER_METHOD(0x029405A0, void, LoadCertificate, (X509Chain_1 * __this, X509Certificate_2 * x509));
IL2CPP_REGISTER_METHOD(0x029405C0, void, LoadCertificates, (X509Chain_1 * __this, X509CertificateCollection_2 * collection));
IL2CPP_REGISTER_METHOD(0x029405E0, X509Certificate_2 *, FindByIssuerName, (X509Chain_1 * __this, String * issuerName));
IL2CPP_REGISTER_METHOD(0x029407D0, bool, Build, (X509Chain_1 * __this, X509Certificate_2 * leaf));
IL2CPP_REGISTER_METHOD(0x02940C30, void, Reset, (X509Chain_1 * __this));
IL2CPP_REGISTER_METHOD(0x02940D10, bool, IsValid, (X509Chain_1 * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x02940DF0, X509Certificate_2 *, FindCertificateParent, (X509Chain_1 * __this, X509Certificate_2 * child));
IL2CPP_REGISTER_METHOD(0x02940FB0, X509Certificate_2 *, FindCertificateRoot, (X509Chain_1 * __this, X509Certificate_2 * potentialRoot));
IL2CPP_REGISTER_METHOD(0x029411F0, bool, IsTrusted, (X509Chain_1 * __this, X509Certificate_2 * potentialTrusted));
IL2CPP_REGISTER_METHOD(0x02941230, bool, IsParent, (X509Chain_1 * __this, X509Certificate_2 * child, X509Certificate_2 * parent));
}
