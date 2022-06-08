#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0248BB30, UnityTls_unitytls_x509verify_result__Enum, Invoke, (UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t * __this, UnityTls_unitytls_x509list_ref chain, UnityTls_unitytls_x509list_ref trustCA, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509verify_callback * cb, Void * userData, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x0248C100, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t * __this, UnityTls_unitytls_x509list_ref chain, UnityTls_unitytls_x509list_ref trustCA, uint8_t * cn, void * cnLen, UnityTls_unitytls_x509verify_callback * cb, Void * userData, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, UnityTls_unitytls_x509verify_result__Enum, EndInvoke, (UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t * __this, IAsyncResult * result));
}
