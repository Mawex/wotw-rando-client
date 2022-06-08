#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslClientStream {
IL2CPP_REGISTER_METHOD(0x01F7E4B0, void, add_ServerCertValidation, (SslClientStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7E5A0, void, remove_ServerCertValidation, (SslClientStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7E690, void, add_ClientCertSelection, (SslClientStream * __this, CertificateSelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7E780, void, remove_ClientCertSelection, (SslClientStream * __this, CertificateSelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7E870, void, add_PrivateKeySelection, (SslClientStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7E960, void, remove_PrivateKeySelection, (SslClientStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x002FB990, Stream *, get_InputBuffer, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x01F7EA50, X509CertificateCollection_1 *, get_ClientCertificates, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x01F7EA80, X509Certificate_1 *, get_SelectedClientCertificate, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, CertificateValidationCallback *, get_ServerCertValidationDelegate, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ServerCertValidationDelegate, (SslClientStream * __this, CertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, CertificateSelectionCallback *, get_ClientCertSelectionDelegate, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_ClientCertSelectionDelegate, (SslClientStream * __this, CertificateSelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, PrivateKeySelectionCallback *, get_PrivateKeyCertSelectionDelegate, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_PrivateKeyCertSelectionDelegate, (SslClientStream * __this, PrivateKeySelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x01F7EAB0, void, add_ServerCertValidation2, (SslClientStream * __this, CertificateValidationCallback2 * value));
IL2CPP_REGISTER_METHOD(0x01F7EBA0, void, remove_ServerCertValidation2, (SslClientStream * __this, CertificateValidationCallback2 * value));
IL2CPP_REGISTER_METHOD(0x01F7EC90, void, __ctor, (SslClientStream * __this, Stream * stream, String * targetHost, bool ownsStream));
IL2CPP_REGISTER_METHOD(0x01F7ECC0, void, __ctor, (SslClientStream * __this, Stream * stream, String * targetHost, X509Certificate_1 * clientCertificate));
IL2CPP_REGISTER_METHOD(0x01F7EF70, void, __ctor, (SslClientStream * __this, Stream * stream, String * targetHost, X509CertificateCollection_1 * clientCertificates));
IL2CPP_REGISTER_METHOD(0x01F7EFA0, void, __ctor, (SslClientStream * __this, Stream * stream, String * targetHost, bool ownsStream, SecurityProtocolType__Enum_1 securityProtocolType));
IL2CPP_REGISTER_METHOD(0x01F7F130, void, __ctor, (SslClientStream * __this, Stream * stream, String * targetHost, bool ownsStream, SecurityProtocolType__Enum_1 securityProtocolType, X509CertificateCollection_1 * clientCertificates));
IL2CPP_REGISTER_METHODINFO(0x04759200, SslClientStream__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7F4C0, void, Finalize, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x01F7F560, void, Dispose, (SslClientStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01F7F5B0, void, SafeEndReceiveRecord, (SslClientStream * __this, IAsyncResult * ar, bool ignoreEmpty));
IL2CPP_REGISTER_METHODINFO(0x0477B200, SslClientStream_SafeEndReceiveRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7F6A0, IAsyncResult *, BeginNegotiateHandshake, (SslClientStream * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F7FA90, void, EndNegotiateHandshake, (SslClientStream * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04754F40, SslClientStream_EndNegotiateHandshake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7FBF0, void, NegotiateAsyncWorker, (SslClientStream * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x047264D8, SslClientStream_NegotiateAsyncWorker__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F810F0, X509Certificate_1 *, OnLocalCertificateSelection, (SslClientStream * __this, X509CertificateCollection_1 * clientCertificates, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates));
IL2CPP_REGISTER_METHOD(0x01F81110, bool, get_HaveRemoteValidation2Callback, (SslClientStream * __this));
IL2CPP_REGISTER_METHOD(0x01F81120, ValidationResult *, OnRemoteCertificateValidation2, (SslClientStream * __this, X509CertificateCollection_2 * collection));
IL2CPP_REGISTER_METHOD(0x01F81140, bool, OnRemoteCertificateValidation, (SslClientStream * __this, X509Certificate_1 * certificate, Int32__Array * errors));
IL2CPP_REGISTER_METHOD(0x01F81170, bool, RaiseServerCertificateValidation, (SslClientStream * __this, X509Certificate_1 * certificate, Int32__Array * certificateErrors));
IL2CPP_REGISTER_METHOD(0x01F81190, ValidationResult *, RaiseServerCertificateValidation2, (SslClientStream * __this, X509CertificateCollection_2 * collection));
IL2CPP_REGISTER_METHOD(0x01F811B0, X509Certificate_1 *, RaiseClientCertificateSelection, (SslClientStream * __this, X509CertificateCollection_1 * clientCertificates, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates));
IL2CPP_REGISTER_METHOD(0x01F811D0, AsymmetricAlgorithm *, OnLocalPrivateKeySelection, (SslClientStream * __this, X509Certificate_1 * certificate, String * targetHost));
IL2CPP_REGISTER_METHOD(0x01F811F0, AsymmetricAlgorithm *, RaisePrivateKeySelection, (SslClientStream * __this, X509Certificate_1 * certificate, String * targetHost));
}
