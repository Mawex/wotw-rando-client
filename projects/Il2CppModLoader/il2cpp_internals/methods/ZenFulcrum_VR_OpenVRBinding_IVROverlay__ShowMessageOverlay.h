#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowMessageOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_ShowMessageOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D82400, VRMessageOverlayResponse__Enum, Invoke, (IVROverlay_ShowMessageOverlay * __this, String * pchText, String * pchCaption, String * pchButton0Text, String * pchButton1Text, String * pchButton2Text, String * pchButton3Text));
IL2CPP_REGISTER_METHOD(0x0297E1A0, IAsyncResult *, BeginInvoke, (IVROverlay_ShowMessageOverlay * __this, String * pchText, String * pchCaption, String * pchButton0Text, String * pchButton1Text, String * pchButton2Text, String * pchButton3Text, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, VRMessageOverlayResponse__Enum, EndInvoke, (IVROverlay_ShowMessageOverlay * __this, IAsyncResult * result));
}
