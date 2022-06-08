using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__RenderModelHasComponent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_RenderModelHasComponent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (IVRRenderModels_RenderModelHasComponent * __this, String * pchRenderModelName, String * pchComponentName));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (IVRRenderModels_RenderModelHasComponent * __this, String * pchRenderModelName, String * pchComponentName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRRenderModels_RenderModelHasComponent * __this, IAsyncResult * result));
}
