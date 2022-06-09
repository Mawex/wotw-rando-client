#include <interception_macros.h>

namespace app::methods::System_ComponentModel::Int16Converter {
IL2CPP_REGISTER_METHOD(0x01FEEFA0, Type *, get_TargetType, (app::Int16Converter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FEF040, Object *, FromString_1, (app::Int16Converter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FEF220, Object *, FromString_2, (app::Int16Converter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FEF2D0, Object *, FromString_3, (app::Int16Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FEF390, String *, ToString, (app::Int16Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::Int16Converter * this_ptr));
}
