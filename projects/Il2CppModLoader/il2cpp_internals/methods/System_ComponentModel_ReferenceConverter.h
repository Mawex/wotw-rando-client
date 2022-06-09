#include <interception_macros.h>

namespace app::methods::System_ComponentModel::ReferenceConverter {
IL2CPP_REGISTER_METHOD(0x02999290, void, __ctor, (app::ReferenceConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x02999340, bool, CanConvertFrom, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type));
IL2CPP_REGISTER_METHOD(0x02999420, Object *, ConvertFrom, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02999660, Object *, ConvertTo, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type));
IL2CPP_REGISTER_METHODINFO(0x0474F368, ReferenceConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02999870, TypeConverter_StandardValuesCollection *, GetStandardValues, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValueAllowed, (app::ReferenceConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02999F70, void, __cctor, ());
}
