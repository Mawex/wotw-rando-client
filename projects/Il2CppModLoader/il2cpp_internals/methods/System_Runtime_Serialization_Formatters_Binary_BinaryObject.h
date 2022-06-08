using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryObject {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryObject * __this));
IL2CPP_REGISTER_METHOD(0x01857090, void, Set, (BinaryObject * __this, int32_t objectId, int32_t mapId));
IL2CPP_REGISTER_METHOD(0x01D8E970, void, Write, (BinaryObject * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01D8D3F0, void, Read, (BinaryObject * __this, _BinaryParser * input));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BinaryObject * __this));
}
