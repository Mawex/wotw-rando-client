using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectProgress {
IL2CPP_REGISTER_METHOD(0x01D94700, void, __ctor, (ObjectProgress * __this));
IL2CPP_REGISTER_METHOD(0x01D94850, void, Init, (ObjectProgress * __this));
IL2CPP_REGISTER_METHOD(0x01D948B0, void, ArrayCountIncrement, (ObjectProgress * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01D948C0, bool, GetNext, (ObjectProgress * __this, BinaryTypeEnum__Enum * outBinaryTypeEnum, Object * * outTypeInformation));
IL2CPP_REGISTER_METHOD(0x01D94A10, void, __cctor, (MethodInfo * method));
}
