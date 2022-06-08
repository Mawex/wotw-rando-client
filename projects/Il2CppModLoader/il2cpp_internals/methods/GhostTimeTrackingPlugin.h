using namespace app;

namespace app::methods::GhostTimeTrackingPlugin {
IL2CPP_REGISTER_METHOD(0x007E9F70, void, OnStartRecording, (GhostTimeTrackingPlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostTimeTrackingPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007E9FD0, void, RecordCycle, (GhostTimeTrackingPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostTimeTrackingPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostTimeTrackingPlugin * __this));
}
