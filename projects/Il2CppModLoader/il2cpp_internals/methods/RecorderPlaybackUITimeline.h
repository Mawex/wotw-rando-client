#include <interception_macros.h>

namespace app::methods::RecorderPlaybackUITimeline {
IL2CPP_REGISTER_METHOD(0x008F92D0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsInitialised, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F9350, int32_t, get_TotalFrames, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F9400, int32_t, get_CurrentFrame, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F9420, int32_t, KeyframeBack, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F9500, int32_t, KeyframeForward, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F95E0, int32_t, GetKeyframe, (RecorderPlaybackUITimeline * __this, int32_t keyframe));
IL2CPP_REGISTER_METHOD(0x008F9690, void, Start, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F96A0, void, Initialise, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x008F9970, void, OnDestory, (RecorderPlaybackUITimeline * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RecorderPlaybackUITimeline * __this));
}
