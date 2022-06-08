#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetKeyboardText {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetKeyboardText * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D79D50, uint32_t, Invoke, (IVROverlay_GetKeyboardText * __this, StringBuilder * pchText, uint32_t cchText));
IL2CPP_REGISTER_METHOD(0x02D7A280, IAsyncResult *, BeginInvoke, (IVROverlay_GetKeyboardText * __this, StringBuilder * pchText, uint32_t cchText, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVROverlay_GetKeyboardText * __this, IAsyncResult * result));
}
