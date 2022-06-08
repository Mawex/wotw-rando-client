#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Int32Converter {
IL2CPP_REGISTER_METHOD(0x01FEF4D0, Type *, get_TargetType, (Int32Converter * __this));
IL2CPP_REGISTER_METHOD(0x01FEF570, Object *, FromString, (Int32Converter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FEF630, Object *, FromString, (Int32Converter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FEF6F0, Object *, FromString, (Int32Converter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FEF7A0, String *, ToString, (Int32Converter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (Int32Converter * __this));
}
