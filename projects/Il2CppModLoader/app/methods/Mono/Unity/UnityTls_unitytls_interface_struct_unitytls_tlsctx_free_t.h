#pragma once
#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t * this_ptr, app::UnityTls_unitytls_tlsctx * ctx))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t * this_ptr, app::UnityTls_unitytls_tlsctx * ctx, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t * this_ptr, app::IAsyncResult * result))
}
