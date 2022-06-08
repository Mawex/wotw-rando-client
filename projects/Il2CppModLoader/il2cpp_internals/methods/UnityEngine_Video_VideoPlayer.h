using namespace app;

namespace app::methods::UnityEngine::Video::VideoPlayer {
IL2CPP_REGISTER_METHOD(0x031B7200, void, set_source, (VideoPlayer * __this, VideoSource__Enum value));
IL2CPP_REGISTER_METHOD(0x031B7260, String *, get_url, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B72B0, void, set_url, (VideoPlayer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x031B7310, void, Prepare, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7360, void, Play, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B73B0, void, Pause, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7400, void, Stop, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7450, double, get_time, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B74A0, void, set_time, (VideoPlayer * __this, double value));
IL2CPP_REGISTER_METHOD(0x031B7500, int64_t, get_frame, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7550, void, set_frame, (VideoPlayer * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x031B75B0, void, StepForward, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7600, float, get_playbackSpeed, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7650, void, set_playbackSpeed, (VideoPlayer * __this, float value));
IL2CPP_REGISTER_METHOD(0x031B76B0, uint64_t, get_frameCount, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7700, double, get_length, (VideoPlayer * __this));
IL2CPP_REGISTER_METHOD(0x031B7750, void, EnableAudioTrack, (VideoPlayer * __this, uint16_t trackIndex, bool enabled));
IL2CPP_REGISTER_METHOD(0x031B77D0, void, SetTargetAudioSource, (VideoPlayer * __this, uint16_t trackIndex, AudioSource * source));
IL2CPP_REGISTER_METHOD(0x031B7840, void, add_prepareCompleted, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7930, void, remove_prepareCompleted, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7A20, void, add_loopPointReached, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7B10, void, remove_loopPointReached, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7C00, void, add_seekCompleted, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7CF0, void, remove_seekCompleted, (VideoPlayer * __this, VideoPlayer_EventHandler * value));
IL2CPP_REGISTER_METHOD(0x031B7DE0, void, InvokePrepareCompletedCallback_Internal, (VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x031B7E10, void, InvokeFrameReadyCallback_Internal, (VideoPlayer * source, int64_t frameIdx));
IL2CPP_REGISTER_METHOD(0x031B7E50, void, InvokeLoopPointReachedCallback_Internal, (VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x031B7E80, void, InvokeStartedCallback_Internal, (VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x031B7EB0, void, InvokeFrameDroppedCallback_Internal, (VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x031B7EE0, void, InvokeErrorReceivedCallback_Internal, (VideoPlayer * source, String * errorStr));
IL2CPP_REGISTER_METHOD(0x031B7F20, void, InvokeSeekCompletedCallback_Internal, (VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x031B7F50, void, InvokeClockResyncOccurredCallback_Internal, (VideoPlayer * source, double seconds));
}
