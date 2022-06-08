#include <interception_macros.h>

namespace app::methods::GhostRecordingMetaDataPlugin {
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostRecordingMetaDataPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007E4520, void, RecordCycle, (GhostRecordingMetaDataPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostRecordingMetaDataPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E4690, void, OnStopRecording, (GhostRecordingMetaDataPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E4890, void, __ctor, (GhostRecordingMetaDataPlugin * __this));
}
