#include <interception_macros.h>

namespace app::methods::System_ComponentModel::TimeSpanConverter {
IL2CPP_REGISTER_METHOD(0x029AD780, bool, CanConvertFrom, (app::TimeSpanConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type));
IL2CPP_REGISTER_METHOD(0x029AD860, bool, CanConvertTo, (app::TimeSpanConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type));
IL2CPP_REGISTER_METHOD(0x029AD940, Object *, ConvertFrom, (app::TimeSpanConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472C240, TimeSpanConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029ADB50, Object *, ConvertTo, (app::TimeSpanConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type));
IL2CPP_REGISTER_METHODINFO(0x0476ADE0, TimeSpanConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029ADF00, void, __ctor, (app::TimeSpanConverter * this_ptr));
}
