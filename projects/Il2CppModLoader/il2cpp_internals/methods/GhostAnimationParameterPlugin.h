#include <interception_macros.h>

namespace app::methods::GhostAnimationParameterPlugin {
IL2CPP_REGISTER_METHOD(0x002FB9F0, GlobalRecordingTable *, get_GlobalRecordingTable, (GhostAnimationParameterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_GlobalRecordingTable, (GhostAnimationParameterPlugin * __this, GlobalRecordingTable * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartRecording, (GhostAnimationParameterPlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (GhostAnimationParameterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostAnimationParameterPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E130A0, void, RecordCycle, (GhostAnimationParameterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostAnimationParameterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterAnimatorForRecording, (GhostAnimationParameterPlugin * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00E13330, void, __ctor, (GhostAnimationParameterPlugin * __this));
}
