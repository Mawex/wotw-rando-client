#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryObjectWithMapTyped * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (BinaryObjectWithMapTyped * __this, BinaryHeaderEnum__Enum binaryHeaderEnum));
IL2CPP_REGISTER_METHOD(0x01D8EE00, void, Set, (BinaryObjectWithMapTyped * __this, int32_t objectId, String * name, int32_t numMembers, String__Array * memberNames, BinaryTypeEnum__Enum__Array * binaryTypeEnumA, Object__Array * typeInformationA, Int32__Array * memberAssemIds, int32_t assemId));
IL2CPP_REGISTER_METHOD(0x01D8EE50, void, Write, (BinaryObjectWithMapTyped * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01D8F0F0, void, Read, (BinaryObjectWithMapTyped * __this, _BinaryParser * input));
}
