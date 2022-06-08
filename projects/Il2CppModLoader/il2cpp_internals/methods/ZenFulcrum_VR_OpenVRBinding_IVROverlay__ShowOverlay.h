using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ShowOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (IVROverlay_ShowOverlay * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02CE2A70, IAsyncResult *, BeginInvoke, (IVROverlay_ShowOverlay * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_ShowOverlay * __this, IAsyncResult * result));
}
