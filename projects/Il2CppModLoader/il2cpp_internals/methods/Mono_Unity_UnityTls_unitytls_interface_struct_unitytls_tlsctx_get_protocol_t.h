#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, UnityTls_unitytls_protocol__Enum, Invoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t * __this, UnityTls_unitytls_tlsctx * ctx, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t * __this, UnityTls_unitytls_tlsctx * ctx, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, UnityTls_unitytls_protocol__Enum, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t * __this, IAsyncResult * result));
}
