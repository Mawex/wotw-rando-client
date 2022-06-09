#include <interception_macros.h>

namespace app::methods::System_ComponentModel::UInt32Converter {
IL2CPP_REGISTER_METHOD(0x0295D350, Type *, get_TargetType, (app::UInt32Converter * this_ptr));
IL2CPP_REGISTER_METHOD(0x0295D3F0, Object *, FromString_1, (app::UInt32Converter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x0295D560, Object *, FromString_2, (app::UInt32Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x0295D620, Object *, FromString_3, (app::UInt32Converter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x0295D6D0, String *, ToString, (app::UInt32Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::UInt32Converter * this_ptr));
}
