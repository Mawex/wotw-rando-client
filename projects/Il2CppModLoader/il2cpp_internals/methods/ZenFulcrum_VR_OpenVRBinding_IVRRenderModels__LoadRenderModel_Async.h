using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadRenderModel_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_LoadRenderModel_Async * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02AD6B00, EVRRenderModelError__Enum, Invoke, (IVRRenderModels_LoadRenderModel_Async * __this, String * pchRenderModelName, void * * ppRenderModel));
IL2CPP_REGISTER_METHOD(0x02CE4A90, IAsyncResult *, BeginInvoke, (IVRRenderModels_LoadRenderModel_Async * __this, String * pchRenderModelName, void * * ppRenderModel, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRRenderModelError__Enum, EndInvoke, (IVRRenderModels_LoadRenderModel_Async * __this, void * * ppRenderModel, IAsyncResult * result));
}
