using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryObjectWithMap * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (BinaryObjectWithMap * __this, BinaryHeaderEnum__Enum binaryHeaderEnum));
IL2CPP_REGISTER_METHOD(0x01D8EA90, void, Set, (BinaryObjectWithMap * __this, int32_t objectId, String * name, int32_t numMembers, String__Array * memberNames, int32_t assemId));
IL2CPP_REGISTER_METHOD(0x01D8EAC0, void, Write, (BinaryObjectWithMap * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01D8EC10, void, Read, (BinaryObjectWithMap * __this, _BinaryParser * input));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BinaryObjectWithMap * __this));
}
