#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_x509verify_callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_x509verify_callback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0248D200, UnityTls_unitytls_x509verify_result__Enum, Invoke, (UnityTls_unitytls_x509verify_callback * __this, Void * userData, UnityTls_unitytls_x509_ref cert, UnityTls_unitytls_x509verify_result__Enum result, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x0248D620, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_x509verify_callback * __this, Void * userData, UnityTls_unitytls_x509_ref cert, UnityTls_unitytls_x509verify_result__Enum result, UnityTls_unitytls_errorstate * errorState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, UnityTls_unitytls_x509verify_result__Enum, EndInvoke, (UnityTls_unitytls_x509verify_callback * __this, IAsyncResult * result));
}
