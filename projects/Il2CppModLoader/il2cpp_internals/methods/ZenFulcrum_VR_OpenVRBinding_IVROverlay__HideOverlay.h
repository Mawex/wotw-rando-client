using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HideOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_HideOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (IVROverlay_HideOverlay * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D7DA80, IAsyncResult *, BeginInvoke, (IVROverlay_HideOverlay * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_HideOverlay * __this, IAsyncResult * result));
}
