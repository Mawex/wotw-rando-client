#include <interception_macros.h>

namespace app::methods::RecorderPlaybackUI {
IL2CPP_REGISTER_METHOD(0x008F4A40, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0040B220, Recorder_1 *, get_Recorder, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_DoBlast, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F4C80, void, set_DoBlast, (RecorderPlaybackUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008F4C90, void, FixedUpdate, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F4DC0, void, Update, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5610, void, NextKeyframe, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5720, void, PreviousKeyframe, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5840, void, GoToKeyframe, (RecorderPlaybackUI * __this, int32_t keyframe));
IL2CPP_REGISTER_METHOD(0x00608720, void, SetSpeed, (RecorderPlaybackUI * __this, int32_t speed));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, GetSpeed, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5B30, void, TogglePlaying, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5B50, void, Play, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5B60, void, Stop, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5B70, void, HideUi, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5CF0, void, ToggleTimeline, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x005D6880, bool, IsUIVisible, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5EA0, void, DoExit, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F5F60, void, IncreaseSpeed, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F6020, void, DecreaseSpeed, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F6030, void, UpdateTimeScale, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F62C0, void, Awake, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F7080, IEnumerator *, Start, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F71D0, void, JumpToFrame, (RecorderPlaybackUI * __this, int32_t frameIndex));
IL2CPP_REGISTER_METHOD(0x008F72C0, void, __ctor, (RecorderPlaybackUI * __this));
IL2CPP_REGISTER_METHOD(0x008F7650, void, __cctor, ());
}
