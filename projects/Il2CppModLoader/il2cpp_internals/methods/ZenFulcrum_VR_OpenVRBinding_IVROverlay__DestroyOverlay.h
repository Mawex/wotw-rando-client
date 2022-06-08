using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__DestroyOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_DestroyOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (IVROverlay_DestroyOverlay * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D79AD0, IAsyncResult *, BeginInvoke, (IVROverlay_DestroyOverlay * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_DestroyOverlay * __this, IAsyncResult * result));
}
