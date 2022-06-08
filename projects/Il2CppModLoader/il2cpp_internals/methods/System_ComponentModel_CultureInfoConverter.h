#include <interception_macros.h>

namespace app::methods::System::ComponentModel::CultureInfoConverter {
IL2CPP_REGISTER_METHOD(0x01FDA1E0, String *, get_DefaultCultureString, (CultureInfoConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FDA260, String *, GetCultureName, (CultureInfoConverter * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FDA290, bool, CanConvertFrom, (CultureInfoConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x01FDA370, bool, CanConvertTo, (CultureInfoConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FDA450, Object *, ConvertFrom, (CultureInfoConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04721608, CultureInfoConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FDAD50, Object *, ConvertTo, (CultureInfoConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0477D328, CultureInfoConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FDB2F0, TypeConverter_StandardValuesCollection *, GetStandardValues, (CultureInfoConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesExclusive, (CultureInfoConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (CultureInfoConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x01FDB670, void, __ctor, (CultureInfoConverter * __this));
}
