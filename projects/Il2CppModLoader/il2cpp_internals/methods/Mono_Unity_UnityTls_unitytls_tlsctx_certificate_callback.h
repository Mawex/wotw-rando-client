#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTls_unitytls_tlsctx_certificate_callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UnityTls_unitytls_tlsctx_certificate_callback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0248C230, void, Invoke, (app::UnityTls_unitytls_tlsctx_certificate_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_tlsctx * ctx, app::uint8_t * cn, app::void * cn_len, app::UnityTls_unitytls_x509name * ca_list, app::void * ca_list_len, app::UnityTls_unitytls_x509list_ref * chain, app::UnityTls_unitytls_key_ref * key, app::UnityTls_unitytls_errorstate * error_state));
IL2CPP_REGISTER_METHOD(0x0248C930, IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_tlsctx_certificate_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_tlsctx * ctx, app::uint8_t * cn, app::void * cn_len, app::UnityTls_unitytls_x509name * ca_list, app::void * ca_list_len, app::UnityTls_unitytls_x509list_ref * chain, app::UnityTls_unitytls_key_ref * key, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_tlsctx_certificate_callback * this_ptr, app::IAsyncResult * result));
}
