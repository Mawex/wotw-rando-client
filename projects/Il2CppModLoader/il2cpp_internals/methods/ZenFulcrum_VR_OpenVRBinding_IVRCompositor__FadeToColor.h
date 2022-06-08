#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeToColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_FadeToColor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F41370, void, Invoke, (IVRCompositor_FadeToColor * __this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground));
IL2CPP_REGISTER_METHOD(0x02F418F0, IAsyncResult *, BeginInvoke, (IVRCompositor_FadeToColor * __this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRCompositor_FadeToColor * __this, IAsyncResult * result));
}
