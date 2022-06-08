#include <interception_macros.h>

namespace app::methods::GhostSceneTrackingPlugin {
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostSceneTrackingPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007E56D0, void, RecordCycle, (GhostSceneTrackingPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostSceneTrackingPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E56F0, RuntimeSceneMetaData *, GetCurrentScene, (GhostSceneTrackingPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostSceneTrackingPlugin * __this));
}
