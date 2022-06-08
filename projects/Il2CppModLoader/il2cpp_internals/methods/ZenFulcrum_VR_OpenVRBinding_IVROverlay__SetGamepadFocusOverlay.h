#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetGamepadFocusOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetGamepadFocusOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVROverlayError__Enum, Invoke, (IVROverlay_SetGamepadFocusOverlay * __this, uint64_t ulNewFocusOverlay));
IL2CPP_REGISTER_METHOD(0x02D7E0E0, IAsyncResult *, BeginInvoke, (IVROverlay_SetGamepadFocusOverlay * __this, uint64_t ulNewFocusOverlay, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetGamepadFocusOverlay * __this, IAsyncResult * result));
}
