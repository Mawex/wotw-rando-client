using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayColor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7A530, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayColor * __this, uint64_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue));
IL2CPP_REGISTER_METHOD(0x02D7A950, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayColor * __this, uint64_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayColor * __this, float * pfRed, float * pfGreen, float * pfBlue, IAsyncResult * result));
}
