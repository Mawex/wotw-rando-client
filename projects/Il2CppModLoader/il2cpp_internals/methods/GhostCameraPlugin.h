using namespace app;

namespace app::methods::GhostCameraPlugin {
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostCameraPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E15450, void, RecordCycle, (GhostCameraPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostCameraPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostCameraPlugin * __this));
}
