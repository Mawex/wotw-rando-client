using namespace app;

namespace app::methods::Mono::Net::Security::MobileTlsContext {
IL2CPP_REGISTER_METHOD(0x02182D80, void, __ctor, (MobileTlsContext * __this, MobileAuthenticatedStream * parent, bool serverMode, String * targetHost, SslProtocols__Enum enabledProtocols, X509Certificate_1 * serverCertificate, X509CertificateCollection_1 * clientCertificates, bool askForClientCert));
IL2CPP_REGISTER_METHOD(0x002FA280, MobileAuthenticatedStream *, get_Parent, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x02182EF0, MonoTlsSettings *, get_Settings, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsServer, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_TargetHost, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ServerName, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, X509CertificateCollection_1 *, get_ClientCertificates, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, X509Certificate_1 *, get_LocalServerCertificate, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x02182F10, bool, ValidateCertificate, (MobileTlsContext * __this, X509Certificate_1 * leaf, X509Chain * chain));
IL2CPP_REGISTER_METHOD(0x02183060, bool, ValidateCertificate, (MobileTlsContext * __this, X509CertificateCollection_1 * certificates));
IL2CPP_REGISTER_METHOD(0x021831B0, X509Certificate_1 *, SelectClientCertificate, (MobileTlsContext * __this, X509Certificate_1 * serverCertificate, String__Array * acceptableIssuers));
IL2CPP_REGISTER_METHODINFO(0x04796010, MobileTlsContext_SelectClientCertificate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021833C0, void, Dispose, (MobileTlsContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (MobileTlsContext * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02183470, void, Finalize, (MobileTlsContext * __this));
}
