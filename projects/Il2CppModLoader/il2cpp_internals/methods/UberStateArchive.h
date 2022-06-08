#include <interception_macros.h>

namespace app::methods::UberStateArchive {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_CaretPosition, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x03148C40, void, __ctor, (UberStateArchive * __this, Byte__Array * data, bool writing));
IL2CPP_REGISTER_METHOD(0x03148C50, uint8_t, Serialize, (UberStateArchive * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x03148CD0, float, Serialize, (UberStateArchive * __this, float value));
IL2CPP_REGISTER_METHOD(0x03148D40, int16_t, Serialize, (UberStateArchive * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x03148DC0, uint16_t, Serialize, (UberStateArchive * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x03148DF0, int32_t, Serialize, (UberStateArchive * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x03148E40, bool, Serialize, (UberStateArchive * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03148EC0, Vector2, Serialize, (UberStateArchive * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x03148F90, Vector3, Serialize, (UberStateArchive * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x031490E0, Quaternion, Serialize, (UberStateArchive * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x03149270, void, WriteBool, (UberStateArchive * __this, bool v));
IL2CPP_REGISTER_METHOD(0x03149270, void, WriteByte, (UberStateArchive * __this, uint8_t v));
IL2CPP_REGISTER_METHOD(0x031492B0, void, WriteUInt16, (UberStateArchive * __this, uint16_t v));
IL2CPP_REGISTER_METHOD(0x03149310, void, WriteUInt32, (UberStateArchive * __this, uint32_t v));
IL2CPP_REGISTER_METHOD(0x031492B0, void, WriteInt16, (UberStateArchive * __this, int16_t v));
IL2CPP_REGISTER_METHOD(0x03149310, void, WriteInt32, (UberStateArchive * __this, int32_t v));
IL2CPP_REGISTER_METHOD(0x03149340, void, WriteFloat, (UberStateArchive * __this, float v));
IL2CPP_REGISTER_METHOD(0x03149370, uint8_t, ReadByte, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x031493C0, bool, ReadBool, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x03149410, uint16_t, ReadUInt16, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x03149490, uint32_t, ReadUInt32, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x031494C0, int16_t, ReadInt16, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x03149490, int32_t, ReadInt32, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x031494D0, float, ReadFloat, (UberStateArchive * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AssertCaretPosition, (UberStateArchive * __this, int64_t start, int64_t expectedDelta, uint16_t id));
}
