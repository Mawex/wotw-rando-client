using namespace app;

namespace app::methods::GhostUberStatePlugin {
IL2CPP_REGISTER_METHOD(0x007EC420, void, OnStartRecording, (GhostUberStatePlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (GhostUberStatePlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostUberStatePlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (GhostUberStatePlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostUberStatePlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordStateChange, (GhostUberStatePlugin * __this, IGenericUberState * state, float value));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostUberStatePlugin * __this));
}
