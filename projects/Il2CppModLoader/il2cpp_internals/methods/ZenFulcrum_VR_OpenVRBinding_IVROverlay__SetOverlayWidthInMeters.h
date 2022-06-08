#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayWidthInMeters {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayWidthInMeters * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7E860, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayWidthInMeters * __this, uint64_t ulOverlayHandle, float fWidthInMeters));
IL2CPP_REGISTER_METHOD(0x02D81450, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayWidthInMeters * __this, uint64_t ulOverlayHandle, float fWidthInMeters, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayWidthInMeters * __this, IAsyncResult * result));
}
