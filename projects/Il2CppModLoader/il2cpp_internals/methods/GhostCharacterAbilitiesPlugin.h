#include <interception_macros.h>

namespace app::methods::GhostCharacterAbilitiesPlugin {
IL2CPP_REGISTER_METHOD(0x00E166C0, void, PlayCycle, (GhostCharacterAbilitiesPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E169A0, void, RecordCycle, (GhostCharacterAbilitiesPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostCharacterAbilitiesPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostCharacterAbilitiesPlugin * __this));
}
