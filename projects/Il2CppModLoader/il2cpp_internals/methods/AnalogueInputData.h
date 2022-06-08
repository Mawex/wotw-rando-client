#include <interception_macros.h>

namespace app::methods::AnalogueInputData {
IL2CPP_REGISTER_METHOD(0x004F9CE0, void, Initialize, (AnalogueInputData * __this));
IL2CPP_REGISTER_METHOD(0x004F9CF0, bool, UpdateInputs, (AnalogueInputData * __this));
IL2CPP_REGISTER_METHOD(0x004F9DE0, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x004F9F20, void, Save, (AnalogueInputData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x004F9FB0, void, Load, (AnalogueInputData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x004FA040, RecorderFrame_FrameDataTypes__Enum, FrameType, (AnalogueInputData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AnalogueInputData * __this));
}
