using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentButtonMask {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetComponentButtonMask * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, uint64_t, Invoke, (IVRRenderModels_GetComponentButtonMask * __this, String * pchRenderModelName, String * pchComponentName));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetComponentButtonMask * __this, String * pchRenderModelName, String * pchComponentName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (IVRRenderModels_GetComponentButtonMask * __this, IAsyncResult * result));
}
