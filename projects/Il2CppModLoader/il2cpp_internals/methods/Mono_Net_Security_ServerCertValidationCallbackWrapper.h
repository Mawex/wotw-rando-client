#include <interception_macros.h>

namespace app::methods::Mono_Net_Security::ServerCertValidationCallbackWrapper {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ServerCertValidationCallbackWrapper * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (app::ServerCertValidationCallbackWrapper * this_ptr, app::ServerCertValidationCallback * callback, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors));
IL2CPP_REGISTER_METHOD(0x02185CC0, IAsyncResult *, BeginInvoke, (app::ServerCertValidationCallbackWrapper * this_ptr, app::ServerCertValidationCallback * callback, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors, app::AsyncCallback * __callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::ServerCertValidationCallbackWrapper * this_ptr, app::IAsyncResult * result));
}
