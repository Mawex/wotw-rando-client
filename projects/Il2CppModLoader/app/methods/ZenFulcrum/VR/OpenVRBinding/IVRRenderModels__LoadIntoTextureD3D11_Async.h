#pragma once
#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, void * p_dst_texture))
    IL2CPP_REGISTER_METHOD(0x02CE49C0, app::IAsyncResult *, BeginInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, void * p_dst_texture, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::IAsyncResult * result))
}
