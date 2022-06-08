using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeGrid {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_FadeGrid * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F40F20, void, Invoke, (IVRCompositor_FadeGrid * __this, float fSeconds, bool bFadeIn));
IL2CPP_REGISTER_METHOD(0x02F41290, IAsyncResult *, BeginInvoke, (IVRCompositor_FadeGrid * __this, float fSeconds, bool bFadeIn, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRCompositor_FadeGrid * __this, IAsyncResult * result));
}
