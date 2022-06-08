#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_tlsctx_certificate_callback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0248C230, void, Invoke, (UnityTls_unitytls_tlsctx_certificate_callback * __this, Void * userData, UnityTls_unitytls_tlsctx * ctx, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509name * caList, void * caListLen, UnityTls_unitytls_x509list_ref * chain, UnityTls_unitytls_key_ref * key, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x0248C930, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_tlsctx_certificate_callback * __this, Void * userData, UnityTls_unitytls_tlsctx * ctx, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509name * caList, void * caListLen, UnityTls_unitytls_x509list_ref * chain, UnityTls_unitytls_key_ref * key, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnityTls_unitytls_tlsctx_certificate_callback * __this, IAsyncResult * result));
}
