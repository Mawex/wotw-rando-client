using namespace app;

namespace app::methods::IGhostRecorderPlugin {
IL2CPP_REGISTER_METHOD(0x002FA280, GhostRecorder *, get_Recorder, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, GhostPlayer *, get_Player, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00B6FFA0, void, InitializeFast, (IGhostRecorderPlugin * __this, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x00B70060, void, HandleNextFrameLogicFast, (IGhostRecorderPlugin * __this, float time, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x00B701E0, void, OnRegister, (IGhostRecorderPlugin * __this, GhostRecorder * recorder));
IL2CPP_REGISTER_METHOD(0x00B701F0, void, OnRegister, (IGhostRecorderPlugin * __this, GhostPlayer * player));
IL2CPP_REGISTER_METHOD(0x00B70200, void, OnUnregister, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00B70210, int32_t, FindNextFrameFast, (IGhostRecorderPlugin * __this, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartRecording, (IGhostRecorderPlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01549FB0, void, Initialize, (IGhostRecorderPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01549EE0, void, HandleNextFrameLogic, (IGhostRecorderPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x02654C00, int32_t, FindNextFrame, (IGhostRecorderPlugin * __this));
}
