#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRRenderModels__LoadTextureD3D11_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, int32_t texture_id, app::void * p_d3_d11_device, app::void * * pp_d3_d11_texture2_d));
IL2CPP_REGISTER_METHOD(0x02CE4B70, IAsyncResult *, BeginInvoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, int32_t texture_id, app::void * p_d3_d11_device, app::void * * pp_d3_d11_texture2_d, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, app::void * * pp_d3_d11_texture2_d, app::IAsyncResult * result));
}
