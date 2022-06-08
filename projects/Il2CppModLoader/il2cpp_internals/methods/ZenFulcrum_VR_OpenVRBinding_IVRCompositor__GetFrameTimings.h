#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimings {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetFrameTimings * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, uint32_t, Invoke, (IVRCompositor_GetFrameTimings * __this, Compositor_FrameTiming * pTiming, uint32_t nFrames));
IL2CPP_REGISTER_METHOD(0x02F42180, IAsyncResult *, BeginInvoke, (IVRCompositor_GetFrameTimings * __this, Compositor_FrameTiming * pTiming, uint32_t nFrames, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRCompositor_GetFrameTimings * __this, Compositor_FrameTiming * pTiming, IAsyncResult * result));
}
