#include <interception_macros.h>

namespace app::methods::System_ComponentModel::ByteConverter {
IL2CPP_REGISTER_METHOD(0x024A5B20, Type *, get_TargetType, (app::ByteConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x024A5BC0, Object *, FromString_1, (app::ByteConverter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x024A5C80, Object *, FromString_2, (app::ByteConverter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x024A5D40, Object *, FromString_3, (app::ByteConverter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x024A5DF0, String *, ToString, (app::ByteConverter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::ByteConverter * this_ptr));
}
