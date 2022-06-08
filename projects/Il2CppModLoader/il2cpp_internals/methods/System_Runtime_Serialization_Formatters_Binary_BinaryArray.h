using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryArray {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryArray * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, __ctor, (BinaryArray * __this, BinaryHeaderEnum__Enum binaryHeaderEnum));
IL2CPP_REGISTER_METHOD(0x01D8B670, void, Set, (BinaryArray * __this, int32_t objectId, int32_t rank, Int32__Array * lengthA, Int32__Array * lowerBoundA, BinaryTypeEnum__Enum binaryTypeEnum, Object * typeInformation, BinaryArrayTypeEnum__Enum binaryArrayTypeEnum, int32_t assemId));
IL2CPP_REGISTER_METHOD(0x01D8B6E0, void, Write, (BinaryArray * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01D8BBC0, void, Read, (BinaryArray * __this, _BinaryParser * input));
}
