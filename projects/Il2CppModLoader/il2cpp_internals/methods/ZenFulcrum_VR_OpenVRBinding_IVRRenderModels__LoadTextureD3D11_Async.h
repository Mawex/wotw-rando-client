using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTextureD3D11_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_LoadTextureD3D11_Async * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRRenderModelError__Enum, Invoke, (IVRRenderModels_LoadTextureD3D11_Async * __this, int32_t textureId, void * pD3D11Device, void * * ppD3D11Texture2D));
IL2CPP_REGISTER_METHOD(0x02CE4B70, IAsyncResult *, BeginInvoke, (IVRRenderModels_LoadTextureD3D11_Async * __this, int32_t textureId, void * pD3D11Device, void * * ppD3D11Texture2D, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRRenderModelError__Enum, EndInvoke, (IVRRenderModels_LoadTextureD3D11_Async * __this, void * * ppD3D11Texture2D, IAsyncResult * result));
}
