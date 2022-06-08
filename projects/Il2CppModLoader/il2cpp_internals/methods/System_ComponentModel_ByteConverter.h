using namespace app;

namespace app::methods::System::ComponentModel::ByteConverter {
IL2CPP_REGISTER_METHOD(0x024A5B20, Type *, get_TargetType, (ByteConverter * __this));
IL2CPP_REGISTER_METHOD(0x024A5BC0, Object *, FromString, (ByteConverter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x024A5C80, Object *, FromString, (ByteConverter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x024A5D40, Object *, FromString, (ByteConverter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x024A5DF0, String *, ToString, (ByteConverter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (ByteConverter * __this));
}
