#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeListConverter {
IL2CPP_REGISTER_METHOD(0x0295C510, void, __ctor, (TypeListConverter * __this, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x0295C5C0, bool, CanConvertFrom, (TypeListConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x0295C6A0, bool, CanConvertTo, (TypeListConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x0295C780, Object *, ConvertFrom, (TypeListConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x0295C8E0, Object *, ConvertTo, (TypeListConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476F588, TypeListConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0295CD10, TypeConverter_StandardValuesCollection *, GetStandardValues, (TypeListConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (TypeListConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (TypeListConverter * __this, ITypeDescriptorContext * context));
}
