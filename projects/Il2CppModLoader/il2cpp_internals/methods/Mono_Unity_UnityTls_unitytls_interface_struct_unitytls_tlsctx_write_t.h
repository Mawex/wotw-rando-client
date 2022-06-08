#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188EB0, void *, Invoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t * __this, UnityTls_unitytls_tlsctx * ctx, uint8_t * data, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02189950, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t * __this, UnityTls_unitytls_tlsctx * ctx, uint8_t * data, void * bufferLen, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t * __this, IAsyncResult * result));
}
