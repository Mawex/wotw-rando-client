#include <interception_macros.h>

namespace app::methods::Mono::Net::Security::ServerCertValidationCallbackWrapper {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ServerCertValidationCallbackWrapper * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (ServerCertValidationCallbackWrapper * __this, ServerCertValidationCallback * callback, X509Certificate_1 * certificate, X509Chain * chain, MonoSslPolicyErrors__Enum sslPolicyErrors));
IL2CPP_REGISTER_METHOD(0x02185CC0, IAsyncResult *, BeginInvoke, (ServerCertValidationCallbackWrapper * __this, ServerCertValidationCallback * callback, X509Certificate_1 * certificate, X509Chain * chain, MonoSslPolicyErrors__Enum sslPolicyErrors, AsyncCallback * __callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (ServerCertValidationCallbackWrapper * __this, IAsyncResult * result));
}
