using namespace app;

namespace app::methods::System::Net::ServerCertValidationCallback {
IL2CPP_REGISTER_METHOD(0x01BD34E0, void, __ctor, (ServerCertValidationCallback * __this, RemoteCertificateValidationCallback * validationCallback));
IL2CPP_REGISTER_METHOD(0x002FA280, RemoteCertificateValidationCallback *, get_ValidationCallback, (ServerCertValidationCallback * __this));
IL2CPP_REGISTER_METHOD(0x01BD3590, void, Callback, (ServerCertValidationCallback * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0474A940, ServerCertValidationCallback_Callback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD36B0, bool, Invoke, (ServerCertValidationCallback * __this, Object * request, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslPolicyErrors));
}
