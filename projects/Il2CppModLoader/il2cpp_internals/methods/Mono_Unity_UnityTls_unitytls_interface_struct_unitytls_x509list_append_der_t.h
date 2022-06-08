#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * __this, UnityTls_unitytls_x509list * list, uint8_t * buffer, void * bufferLen, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02189F60, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * __this, UnityTls_unitytls_x509list * list, uint8_t * buffer, void * bufferLen, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t * __this, IAsyncResult * result));
}
