using namespace app;

namespace app::methods::Mono::Security::Interface::MonoRemoteCertificateValidationCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MonoRemoteCertificateValidationCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (MonoRemoteCertificateValidationCallback * __this, String * targetHost, X509Certificate_1 * certificate, X509Chain * chain, MonoSslPolicyErrors__Enum sslPolicyErrors));
IL2CPP_REGISTER_METHOD(0x02A46450, IAsyncResult *, BeginInvoke, (MonoRemoteCertificateValidationCallback * __this, String * targetHost, X509Certificate_1 * certificate, X509Chain * chain, MonoSslPolicyErrors__Enum sslPolicyErrors, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (MonoRemoteCertificateValidationCallback * __this, IAsyncResult * result));
}
