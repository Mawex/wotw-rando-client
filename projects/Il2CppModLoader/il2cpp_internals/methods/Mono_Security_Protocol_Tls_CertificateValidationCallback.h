using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::CertificateValidationCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CertificateValidationCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (CertificateValidationCallback * __this, X509Certificate_1 * certificate, Int32__Array * certificateErrors));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (CertificateValidationCallback * __this, X509Certificate_1 * certificate, Int32__Array * certificateErrors, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (CertificateValidationCallback * __this, IAsyncResult * result));
}
