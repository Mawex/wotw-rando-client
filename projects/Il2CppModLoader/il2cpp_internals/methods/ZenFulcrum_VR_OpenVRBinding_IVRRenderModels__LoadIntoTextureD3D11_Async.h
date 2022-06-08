#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_LoadIntoTextureD3D11_Async * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRRenderModelError__Enum, Invoke, (IVRRenderModels_LoadIntoTextureD3D11_Async * __this, int32_t textureId, void * pDstTexture));
IL2CPP_REGISTER_METHOD(0x02CE49C0, IAsyncResult *, BeginInvoke, (IVRRenderModels_LoadIntoTextureD3D11_Async * __this, int32_t textureId, void * pDstTexture, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRRenderModelError__Enum, EndInvoke, (IVRRenderModels_LoadIntoTextureD3D11_Async * __this, IAsyncResult * result));
}
