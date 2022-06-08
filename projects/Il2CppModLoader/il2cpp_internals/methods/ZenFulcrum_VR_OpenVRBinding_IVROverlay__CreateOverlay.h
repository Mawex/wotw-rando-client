using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_CreateOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE72C0, EVROverlayError__Enum, Invoke, (IVROverlay_CreateOverlay * __this, String * pchOverlayKey, String * pchOverlayName, uint64_t * pOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D799F0, IAsyncResult *, BeginInvoke, (IVROverlay_CreateOverlay * __this, String * pchOverlayKey, String * pchOverlayName, uint64_t * pOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_CreateOverlay * __this, uint64_t * pOverlayHandle, IAsyncResult * result));
}
