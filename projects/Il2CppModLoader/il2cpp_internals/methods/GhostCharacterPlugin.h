#include <interception_macros.h>

namespace app::methods::GhostCharacterPlugin {
IL2CPP_REGISTER_METHOD(0x00E17FF0, void, PlayCycle, (GhostCharacterPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E187A0, void, RecordCycle, (GhostCharacterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostCharacterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00E188D0, void, __ctor, (GhostCharacterPlugin * __this));
}
