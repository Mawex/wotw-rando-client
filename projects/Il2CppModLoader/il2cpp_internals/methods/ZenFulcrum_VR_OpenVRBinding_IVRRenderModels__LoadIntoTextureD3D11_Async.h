#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, app::void * p_dst_texture));
IL2CPP_REGISTER_METHOD(0x02CE49C0, IAsyncResult *, BeginInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, app::void * p_dst_texture, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::IAsyncResult * result));
}
