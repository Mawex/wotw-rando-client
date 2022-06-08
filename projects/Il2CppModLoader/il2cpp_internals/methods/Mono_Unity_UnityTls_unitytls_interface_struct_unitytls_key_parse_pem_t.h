using namespace app;

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02187AF0, UnityTls_unitytls_key *, Invoke, (UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * __this, uint8_t * buffer, void * bufferLen, uint8_t * password, void * passwordLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x021880A0, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * __this, uint8_t * buffer, void * bufferLen, uint8_t * password, void * passwordLen, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, UnityTls_unitytls_key *, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * __this, IAsyncResult * result));
}
