#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ReleaseNativeOverlayHandle {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ReleaseNativeOverlayHandle * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_ReleaseNativeOverlayHandle * __this, uint64_t ulOverlayHandle, void * pNativeTextureHandle));
IL2CPP_REGISTER_METHOD(0x02D7DF40, IAsyncResult *, BeginInvoke, (IVROverlay_ReleaseNativeOverlayHandle * __this, uint64_t ulOverlayHandle, void * pNativeTextureHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_ReleaseNativeOverlayHandle * __this, IAsyncResult * result));
}
