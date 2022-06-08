#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslServerStream {
IL2CPP_REGISTER_METHOD(0x01F82390, void, add_ClientCertValidation, (SslServerStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x01F82480, void, remove_ClientCertValidation, (SslServerStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x01F82570, void, add_PrivateKeySelection, (SslServerStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F82660, void, remove_PrivateKeySelection, (SslServerStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F82750, X509Certificate_1 *, get_ClientCertificate, (SslServerStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, CertificateValidationCallback *, get_ClientCertValidationDelegate, (SslServerStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ClientCertValidationDelegate, (SslServerStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, PrivateKeySelectionCallback *, get_PrivateKeyCertSelectionDelegate, (SslServerStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_PrivateKeyCertSelectionDelegate, (SslServerStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F827A0, void, add_ClientCertValidation2, (SslServerStream * __this, CertificateValidationCallback2 * value));
IL2CPP_REGISTER_METHOD(0x01F82890, void, remove_ClientCertValidation2, (SslServerStream * __this, CertificateValidationCallback2 * value));
IL2CPP_REGISTER_METHOD(0x01F82980, void, __ctor, (SslServerStream * __this, Stream * stream, X509Certificate_1 * serverCertificate));
IL2CPP_REGISTER_METHOD(0x01F829B0, void, __ctor, (SslServerStream * __this, Stream * stream, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, bool ownsStream));
IL2CPP_REGISTER_METHOD(0x01F829E0, void, __ctor, (SslServerStream * __this, Stream * stream, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, bool requestClientCertificate, bool ownsStream));
IL2CPP_REGISTER_METHOD(0x01F82A20, void, __ctor, (SslServerStream * __this, Stream * stream, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, bool ownsStream, SecurityProtocolType__Enum_1 securityProtocolType));
IL2CPP_REGISTER_METHOD(0x01F82A50, void, __ctor, (SslServerStream * __this, Stream * stream, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, bool requestClientCertificate, bool ownsStream, SecurityProtocolType__Enum_1 securityProtocolType));
IL2CPP_REGISTER_METHOD(0x01F82DB0, void, Finalize, (SslServerStream * __this));
IL2CPP_REGISTER_METHOD(0x01F82E50, void, Dispose, (SslServerStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01F82E90, IAsyncResult *, BeginNegotiateHandshake, (SslServerStream * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F82F70, void, EndNegotiateHandshake, (SslServerStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0471FA38, SslServerStream_EndNegotiateHandshake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F834B0, X509Certificate_1 *, OnLocalCertificateSelection, (SslServerStream * __this, X509CertificateCollection_1 * clientCertificates, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates));
IL2CPP_REGISTER_METHODINFO(0x0470DA08, SslServerStream_OnLocalCertificateSelection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F81140, bool, OnRemoteCertificateValidation, (SslServerStream * __this, X509Certificate_1 * certificate, Int32__Array * errors));
IL2CPP_REGISTER_METHOD(0x0107BE90, bool, get_HaveRemoteValidation2Callback, (SslServerStream * __this));
IL2CPP_REGISTER_METHOD(0x01F83500, ValidationResult *, OnRemoteCertificateValidation2, (SslServerStream * __this, X509CertificateCollection_2 * collection));
IL2CPP_REGISTER_METHOD(0x01F81170, bool, RaiseClientCertificateValidation, (SslServerStream * __this, X509Certificate_1 * certificate, Int32__Array * certificateErrors));
IL2CPP_REGISTER_METHOD(0x01F83520, AsymmetricAlgorithm *, OnLocalPrivateKeySelection, (SslServerStream * __this, X509Certificate_1 * certificate, String * targetHost));
IL2CPP_REGISTER_METHOD(0x01F811F0, AsymmetricAlgorithm *, RaisePrivateKeySelection, (SslServerStream * __this, X509Certificate_1 * certificate, String * targetHost));
}
