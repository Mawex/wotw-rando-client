#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayWidthInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayWidthInMeters * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayWidthInMeters * __this, uint64_t ulOverlayHandle, float * pfWidthInMeters));
IL2CPP_REGISTER_METHOD(0x02D7D3B0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayWidthInMeters * __this, uint64_t ulOverlayHandle, float * pfWidthInMeters, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayWidthInMeters * __this, float * pfWidthInMeters, IAsyncResult * result));
}
