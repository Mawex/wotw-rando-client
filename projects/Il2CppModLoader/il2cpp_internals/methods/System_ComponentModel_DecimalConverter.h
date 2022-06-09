#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DecimalConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (app::DecimalConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE11F0, Type *, get_TargetType, (app::DecimalConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE1290, bool, CanConvertTo, (app::DecimalConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type));
IL2CPP_REGISTER_METHOD(0x01FE1390, Object *, ConvertTo, (app::DecimalConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type));
IL2CPP_REGISTER_METHODINFO(0x0476BBB0, DecimalConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE17B0, Object *, FromString_1, (app::DecimalConverter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FE18C0, Object *, FromString_2, (app::DecimalConverter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE19B0, Object *, FromString_3, (app::DecimalConverter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FE1A90, String *, ToString, (app::DecimalConverter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::DecimalConverter * this_ptr));
}
