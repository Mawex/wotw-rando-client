#include <interception_macros.h>

namespace app::methods::CursorInputData {
IL2CPP_REGISTER_METHOD(0x00DBAC70, void, Save, (CursorInputData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00DBACD0, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00DBADB0, void, Load, (CursorInputData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, RecorderFrame_FrameDataTypes__Enum, FrameType, (CursorInputData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CursorInputData * __this));
}
