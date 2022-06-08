#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DecimalConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (DecimalConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FE11F0, Type *, get_TargetType, (DecimalConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FE1290, bool, CanConvertTo, (DecimalConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FE1390, Object *, ConvertTo, (DecimalConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476BBB0, DecimalConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE17B0, Object *, FromString, (DecimalConverter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FE18C0, Object *, FromString, (DecimalConverter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE19B0, Object *, FromString, (DecimalConverter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FE1A90, String *, ToString, (DecimalConverter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (DecimalConverter * __this));
}
