#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t * __this, UnityTls_unitytls_tlsctx * ctx, UnityTls_unitytls_tlsctx_certificate_callback * cb, Void * userData, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x01BD1540, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t * __this, UnityTls_unitytls_tlsctx * ctx, UnityTls_unitytls_tlsctx_certificate_callback * cb, Void * userData, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t * __this, IAsyncResult * result));
}
