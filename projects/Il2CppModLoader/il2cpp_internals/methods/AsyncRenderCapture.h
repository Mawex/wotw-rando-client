#include <interception_macros.h>

namespace app::methods::AsyncRenderCapture {
IL2CPP_REGISTER_METHOD(0x00843D70, Type *, get_GameViewType, ());
IL2CPP_REGISTER_METHOD(0x00843DF0, void, set_GameViewType, (Type * value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_CaptureCount, (AsyncRenderCapture * __this));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_CaptureCount, (AsyncRenderCapture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00843E90, void, Begin, (AsyncRenderCapture * __this, int32_t maxFrameCount, Action_1_Int32_ * onComplete, bool showFrameCount, int32_t startFrame));
IL2CPP_REGISTER_METHODINFO(0x04737A20, AsyncRenderCapture_Begin__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (AsyncRenderCapture * __this));
IL2CPP_REGISTER_METHOD(0x00843FA0, void, Render, (AsyncRenderCapture * __this, RenderTarget * target));
IL2CPP_REGISTER_METHOD(0x00844480, void, AsyncResult, (AsyncRenderCapture * __this, AsyncGPUReadbackRequest req, int32_t frameCount));
IL2CPP_REGISTER_METHOD(0x00844650, void, Update, (AsyncRenderCapture * __this));
IL2CPP_REGISTER_METHOD(0x00844760, void, OnGUI, (AsyncRenderCapture * __this));
IL2CPP_REGISTER_METHOD(0x00844910, void, __ctor, (AsyncRenderCapture * __this));
}
