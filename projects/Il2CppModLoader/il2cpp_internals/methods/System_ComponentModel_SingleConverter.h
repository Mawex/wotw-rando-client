#include <interception_macros.h>

namespace app::methods::System_ComponentModel::SingleConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (app::SingleConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x029ACE30, Type *, get_TargetType, (app::SingleConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x029ACED0, Object *, FromString_1, (app::SingleConverter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x029AD000, Object *, FromString_2, (app::SingleConverter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x029AD0C0, Object *, FromString_3, (app::SingleConverter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x029AD180, String *, ToString, (app::SingleConverter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::SingleConverter * this_ptr));
}
