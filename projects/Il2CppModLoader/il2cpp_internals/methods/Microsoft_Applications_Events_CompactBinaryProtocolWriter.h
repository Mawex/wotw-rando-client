#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::CompactBinaryProtocolWriter {
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_System_Byte_ *, get_Data, (CompactBinaryProtocolWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA290, void, __ctor, (CompactBinaryProtocolWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CompactBinaryProtocolWriter * __this, List_1_System_Byte_ * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStructBegin, (CompactBinaryProtocolWriter * __this, Object * nullptr_1, bool isBase));
IL2CPP_REGISTER_METHOD(0x002FA4A0, void, writeVarint, (CompactBinaryProtocolWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x002FA660, void, writeVarint, (CompactBinaryProtocolWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x002FA820, void, writeVarint, (CompactBinaryProtocolWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA9E0, void, writeVarint, (CompactBinaryProtocolWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x002FABA0, void, writeVarint, (CompactBinaryProtocolWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FAD60, void, writeVarint, (CompactBinaryProtocolWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002FAF20, void, WriteBlob, (CompactBinaryProtocolWriter * __this, List_1_System_Byte_ * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x002FAFD0, void, WriteBlob, (CompactBinaryProtocolWriter * __this, Byte__Array * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x002FB080, void, WriteBool, (CompactBinaryProtocolWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB180, void, WriteUInt8, (CompactBinaryProtocolWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x002FB280, void, WriteUInt16, (CompactBinaryProtocolWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x002FB290, void, WriteUInt32, (CompactBinaryProtocolWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x002FB2A0, void, WriteUInt64, (CompactBinaryProtocolWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002FB2B0, void, WriteInt8, (CompactBinaryProtocolWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x002FB2C0, void, WriteInt16, (CompactBinaryProtocolWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x002FB2E0, void, WriteInt32, (CompactBinaryProtocolWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB300, void, WriteInt64, (CompactBinaryProtocolWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB320, void, WriteDouble, (CompactBinaryProtocolWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FB3E0, void, WriteString, (CompactBinaryProtocolWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB3E0, void, WriteWString, (CompactBinaryProtocolWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB470, void, WriteContainerBegin, (CompactBinaryProtocolWriter * __this, uint16_t size, uint8_t elementType));
IL2CPP_REGISTER_METHOD(0x002FB4B0, void, WriteMapContainerBegin, (CompactBinaryProtocolWriter * __this, uint16_t size, uint8_t keyType, uint8_t valueType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContainerEnd, (CompactBinaryProtocolWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FB510, void, WriteFieldBegin, (CompactBinaryProtocolWriter * __this, uint8_t type, uint16_t id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFieldEnd, (CompactBinaryProtocolWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FB910, void, WriteStructEnd, (CompactBinaryProtocolWriter * __this, bool isBase));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFieldOmitted, (CompactBinaryProtocolWriter * __this, uint8_t bT_STRING, int32_t v));
}
