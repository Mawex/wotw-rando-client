using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTiming {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetFrameTiming * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (IVRCompositor_GetFrameTiming * __this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo));
IL2CPP_REGISTER_METHOD(0x02F420A0, IAsyncResult *, BeginInvoke, (IVRCompositor_GetFrameTiming * __this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRCompositor_GetFrameTiming * __this, Compositor_FrameTiming * pTiming, IAsyncResult * result));
}
