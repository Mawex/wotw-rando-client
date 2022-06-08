#include <interception_macros.h>

namespace app::methods::CheckpointData {
IL2CPP_REGISTER_METHOD(0x00AD8BA0, RecorderFrame_FrameDataTypes__Enum, FrameType, (CheckpointData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Record, (BinaryWriter * binaryWriter, List_1_MoonGuid_ * scenes));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Save, (CheckpointData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Load, (CheckpointData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CheckpointData * __this));
}
