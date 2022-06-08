#include <interception_macros.h>

namespace app::methods::CheckpointPlugin {
IL2CPP_REGISTER_METHOD(0x00417870, bool, OnGameLoad, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (CheckpointPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (CheckpointPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x0131FD30, void, Exit, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0131FDD0, void, Awake, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0131FE90, void, OnDestroy, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0131FF50, void, PerformLoadFromCurrentFrame, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01320260, void, RestoreCheckpointPart1, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x047348D0, CheckpointPlugin_RestoreCheckpointPart1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013204A0, void, RestoreCheckpointPart2, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x04735338, CheckpointPlugin_RestoreCheckpointPart2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01320710, void, OnFinishedLoading, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x04744A90, CheckpointPlugin_OnFinishedLoading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01320930, void, PerformLoad, (CheckpointPlugin * __this, int32_t keyframe));
IL2CPP_REGISTER_METHOD(0x01320AA0, void, PerformLoadFromFrame, (CheckpointPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01320B70, void, ApplyPreviousInput, (CheckpointPlugin * __this, int32_t frame, Recorder_1 * recorder));
IL2CPP_REGISTER_METHOD(0x01320DF0, void, MakeCheckpointAtEndOfFrame, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01321070, void, MakeCheckpoint, (CheckpointPlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x04719D78, CheckpointPlugin_MakeCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01321370, void, __ctor, (CheckpointPlugin * __this));
}
