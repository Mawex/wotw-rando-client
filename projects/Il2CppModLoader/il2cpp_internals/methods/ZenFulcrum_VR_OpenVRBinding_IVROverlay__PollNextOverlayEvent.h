using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__PollNextOverlayEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_PollNextOverlayEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01679E40, bool, Invoke, (IVROverlay_PollNextOverlayEvent * __this, uint64_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent));
IL2CPP_REGISTER_METHOD(0x02D7DE50, IAsyncResult *, BeginInvoke, (IVROverlay_PollNextOverlayEvent * __this, uint64_t ulOverlayHandle, VREvent_t * pEvent, uint32_t uncbVREvent, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVROverlay_PollNextOverlayEvent * __this, VREvent_t * pEvent, IAsyncResult * result));
}
