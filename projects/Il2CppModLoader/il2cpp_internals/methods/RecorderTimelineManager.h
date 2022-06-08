#include <interception_macros.h>

namespace app::methods::RecorderTimelineManager {
IL2CPP_REGISTER_METHOD(0x008FA1E0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_OutputFrameCount, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_OutputFrameCount, (RecorderTimelineManager * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x008FA280, void, SetTimeline, (RecorderTimelineManager * __this, GameObject * timeline));
IL2CPP_REGISTER_METHOD(0x008FA390, void, Awake, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x008FA4E0, void, Start, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x008FA6F0, void, OnRecorderAwake, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04742988, RecorderTimelineManager_OnRecorderAwake__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008FA7A0, void, Update, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x008FA970, void, FixedUpdate, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x008FAA30, AsyncRenderCapture *, StartOutputTestScreenShot, (int32_t maxFrameCount, Action_1_Int32_ * onComplete, bool hideUI, bool showFrameCount, int32_t startFrame));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RecorderTimelineManager * __this));
IL2CPP_REGISTER_METHOD(0x008FAD70, void, __cctor, ());
}
