using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlaySortOrder {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlaySortOrder * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlaySortOrder * __this, uint64_t ulOverlayHandle, uint32_t * punSortOrder));
IL2CPP_REGISTER_METHOD(0x02D7BC70, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlaySortOrder * __this, uint64_t ulOverlayHandle, uint32_t * punSortOrder, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlaySortOrder * __this, uint32_t * punSortOrder, IAsyncResult * result));
}
