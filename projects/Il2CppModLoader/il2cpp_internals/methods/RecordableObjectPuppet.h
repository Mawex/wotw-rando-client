#include <interception_macros.h>

namespace app::methods::RecordableObjectPuppet {
IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_UniqueRecordingId, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00736630, bool, get_IsRecording, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00736650, void, OnInitializeLivePuppet, (RecordableObjectPuppet * __this, IPuppetBase * puppet));
IL2CPP_REGISTER_METHOD(0x00736660, void, OnInitializeGhostPuppet, (RecordableObjectPuppet * __this, IPuppetBase * puppet, int32_t recordingId, GhostPlayer * player));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, SetupRecordingLink, (RecordableObjectPuppet * __this, RecordingLink * recordingLink));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordTransform, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00736690, void, SetTransform, (RecordableObjectPuppet * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00736760, void, BeginInteraction, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, SetUniqueRecordingId, (RecordableObjectPuppet * __this, int32_t uniqueRecordingId));
IL2CPP_REGISTER_METHOD(0x00736990, void, EndInteraction, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_IsInteracting, (RecordableObjectPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00736A90, void, __ctor, (RecordableObjectPuppet * __this));
}
