using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTexture_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_LoadTexture_Async * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRRenderModelError__Enum, Invoke, (IVRRenderModels_LoadTexture_Async * __this, int32_t textureId, void * * ppTexture));
IL2CPP_REGISTER_METHOD(0x02CE4C60, IAsyncResult *, BeginInvoke, (IVRRenderModels_LoadTexture_Async * __this, int32_t textureId, void * * ppTexture, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRRenderModelError__Enum, EndInvoke, (IVRRenderModels_LoadTexture_Async * __this, void * * ppTexture, IAsyncResult * result));
}
