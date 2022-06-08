using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryAssembly * __this));
IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set, (BinaryAssembly * __this, int32_t assemId, String * assemblyString));
IL2CPP_REGISTER_METHOD(0x01D8C0C0, void, Write, (BinaryAssembly * __this, _BinaryWriter * sout));
IL2CPP_REGISTER_METHOD(0x01D8C150, void, Read, (BinaryAssembly * __this, _BinaryParser * input));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (BinaryAssembly * __this));
}
