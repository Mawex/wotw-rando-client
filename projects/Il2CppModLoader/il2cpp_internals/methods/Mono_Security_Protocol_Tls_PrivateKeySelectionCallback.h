#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::PrivateKeySelectionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PrivateKeySelectionCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, AsymmetricAlgorithm *, Invoke, (app::PrivateKeySelectionCallback * this_ptr, app::X509Certificate_1 * certificate, app::String * target_host));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::PrivateKeySelectionCallback * this_ptr, app::X509Certificate_1 * certificate, app::String * target_host, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, AsymmetricAlgorithm *, EndInvoke, (app::PrivateKeySelectionCallback * this_ptr, app::IAsyncResult * result));
}
