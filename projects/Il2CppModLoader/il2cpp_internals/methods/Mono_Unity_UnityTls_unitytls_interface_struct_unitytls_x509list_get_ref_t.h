#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02187780, UnityTls_unitytls_x509list_ref, Invoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * __this, UnityTls_unitytls_x509list * list, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * __this, UnityTls_unitytls_x509list * list, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, UnityTls_unitytls_x509list_ref, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * __this, IAsyncResult * result));
}
