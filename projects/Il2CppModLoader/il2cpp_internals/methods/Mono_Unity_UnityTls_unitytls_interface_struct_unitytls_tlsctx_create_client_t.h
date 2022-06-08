using namespace app;

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188290, UnityTls_unitytls_tlsctx *, Invoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * __this, UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t * cn, void * cnLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02188910, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * __this, UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t * cn, void * cnLen, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, UnityTls_unitytls_tlsctx *, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * __this, IAsyncResult * result));
}
