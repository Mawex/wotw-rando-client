using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateDashboardOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_CreateDashboardOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D792C0, EVROverlayError__Enum, Invoke, (IVROverlay_CreateDashboardOverlay * __this, String * pchOverlayKey, String * pchOverlayFriendlyName, uint64_t * pMainHandle, uint64_t * pThumbnailHandle));
IL2CPP_REGISTER_METHOD(0x02D798F0, IAsyncResult *, BeginInvoke, (IVROverlay_CreateDashboardOverlay * __this, String * pchOverlayKey, String * pchOverlayFriendlyName, uint64_t * pMainHandle, uint64_t * pThumbnailHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_CreateDashboardOverlay * __this, uint64_t * pMainHandle, uint64_t * pThumbnailHandle, IAsyncResult * result));
}
