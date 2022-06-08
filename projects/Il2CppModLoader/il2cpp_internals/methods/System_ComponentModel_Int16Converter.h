#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Int16Converter {
IL2CPP_REGISTER_METHOD(0x01FEEFA0, Type *, get_TargetType, (Int16Converter * __this));
IL2CPP_REGISTER_METHOD(0x01FEF040, Object *, FromString, (Int16Converter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FEF220, Object *, FromString, (Int16Converter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FEF2D0, Object *, FromString, (Int16Converter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FEF390, String *, ToString, (Int16Converter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (Int16Converter * __this));
}
