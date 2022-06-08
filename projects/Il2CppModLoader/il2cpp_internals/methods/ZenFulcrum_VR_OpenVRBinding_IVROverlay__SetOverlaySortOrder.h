using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlaySortOrder {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlaySortOrder * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlaySortOrder * __this, uint64_t ulOverlayHandle, uint32_t unSortOrder));
IL2CPP_REGISTER_METHOD(0x02D80C60, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlaySortOrder * __this, uint64_t ulOverlayHandle, uint32_t unSortOrder, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlaySortOrder * __this, IAsyncResult * result));
}
