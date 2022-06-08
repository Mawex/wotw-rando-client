#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboardForOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ShowKeyboardForOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D81C40, EVROverlayError__Enum, Invoke, (IVROverlay_ShowKeyboardForOverlay * __this, uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue));
IL2CPP_REGISTER_METHOD(0x02D822A0, IAsyncResult *, BeginInvoke, (IVROverlay_ShowKeyboardForOverlay * __this, uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_ShowKeyboardForOverlay * __this, IAsyncResult * result));
}
