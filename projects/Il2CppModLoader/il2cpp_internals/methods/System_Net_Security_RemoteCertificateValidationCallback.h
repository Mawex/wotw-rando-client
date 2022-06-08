using namespace app;

namespace app::methods::System::Net::Security::RemoteCertificateValidationCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (RemoteCertificateValidationCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (RemoteCertificateValidationCallback * __this, Object * sender, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslPolicyErrors));
IL2CPP_REGISTER_METHOD(0x01BD1BA0, IAsyncResult *, BeginInvoke, (RemoteCertificateValidationCallback * __this, Object * sender, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslPolicyErrors, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (RemoteCertificateValidationCallback * __this, IAsyncResult * result));
}
