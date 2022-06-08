using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelThumbnailURL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetRenderModelThumbnailURL * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE41C0, uint32_t, Invoke, (IVRRenderModels_GetRenderModelThumbnailURL * __this, String * pchRenderModelName, StringBuilder * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE48D0, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetRenderModelThumbnailURL * __this, String * pchRenderModelName, StringBuilder * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRRenderModels_GetRenderModelThumbnailURL * __this, EVRRenderModelError__Enum * peError, IAsyncResult * result));
}
