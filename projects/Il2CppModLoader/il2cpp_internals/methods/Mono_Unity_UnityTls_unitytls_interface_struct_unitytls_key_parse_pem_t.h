#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02187AF0, UnityTls_unitytls_key *, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * this_ptr, app::uint8_t * buffer, app::void * buffer_len, app::uint8_t * password, app::void * password_len, app::UnityTls_unitytls_errorstate * error_state));
IL2CPP_REGISTER_METHOD(0x021880A0, IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * this_ptr, app::uint8_t * buffer, app::void * buffer_len, app::uint8_t * password, app::void * password_len, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, UnityTls_unitytls_key *, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t * this_ptr, app::IAsyncResult * result));
}
