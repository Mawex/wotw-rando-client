using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboard {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ShowKeyboard * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D81530, EVROverlayError__Enum, Invoke, (IVROverlay_ShowKeyboard * __this, int32_t eInputMode, int32_t eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue));
IL2CPP_REGISTER_METHOD(0x02D81AF0, IAsyncResult *, BeginInvoke, (IVROverlay_ShowKeyboard * __this, int32_t eInputMode, int32_t eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_ShowKeyboard * __this, IAsyncResult * result));
}
