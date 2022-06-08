#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardPositionForOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetKeyboardPositionForOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7E260, void, Invoke, (IVROverlay_SetKeyboardPositionForOverlay * __this, uint64_t ulOverlayHandle, HmdRect2_t avoidRect));
IL2CPP_REGISTER_METHOD(0x02D7E6A0, IAsyncResult *, BeginInvoke, (IVROverlay_SetKeyboardPositionForOverlay * __this, uint64_t ulOverlayHandle, HmdRect2_t avoidRect, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVROverlay_SetKeyboardPositionForOverlay * __this, IAsyncResult * result));
}
