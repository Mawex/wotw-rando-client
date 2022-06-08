#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord {
IL2CPP_REGISTER_METHOD(0x00D34AF0, void, __ctor, (SerializationHeaderRecord * __this));
IL2CPP_REGISTER_METHOD(0x01DA1550, void, __ctor, (SerializationHeaderRecord * __this, BinaryHeaderEnum__Enum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion));
IL2CPP_REGISTER_METHOD(0x01DA1580, void, Write, (SerializationHeaderRecord * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01B5AAD0, int32_t, GetInt32, (Byte__Array * buffer, int32_t index));
IL2CPP_REGISTER_METHOD(0x01DA1670, void, Read, (SerializationHeaderRecord * __this, _BinaryParser * input));
IL2CPP_REGISTER_METHODINFO(0x04783700, SerializationHeaderRecord_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (SerializationHeaderRecord * __this));
}
