using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVROverlay__PollNextOverlayEventPacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CVROverlay_PollNextOverlayEventPacked * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01679E40, bool, Invoke, (CVROverlay_PollNextOverlayEventPacked * __this, uint64_t ulOverlayHandle, VREvent_t_Packed * pEvent, uint32_t uncbVREvent));
IL2CPP_REGISTER_METHOD(0x0167A1E0, IAsyncResult *, BeginInvoke, (CVROverlay_PollNextOverlayEventPacked * __this, uint64_t ulOverlayHandle, VREvent_t_Packed * pEvent, uint32_t uncbVREvent, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (CVROverlay_PollNextOverlayEventPacked * __this, VREvent_t_Packed * pEvent, IAsyncResult * result));
}
