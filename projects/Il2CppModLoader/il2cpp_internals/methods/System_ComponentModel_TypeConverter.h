#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeConverter {
IL2CPP_REGISTER_METHOD(0x02944320, bool, get_UseCompatibleTypeConversion, ());
IL2CPP_REGISTER_METHOD(0x024A9E40, bool, CanConvertFrom, (TypeConverter * __this, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x029443D0, bool, CanConvertFrom, (TypeConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x02944480, bool, CanConvertTo, (TypeConverter * __this, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x029444A0, bool, CanConvertTo, (TypeConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x02944550, Object *, ConvertFrom, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02944630, Object *, ConvertFrom, (TypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04712938, TypeConverter_ConvertFrom_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029446F0, Object *, ConvertFromInvariantString, (TypeConverter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x029447C0, Object *, ConvertFromInvariantString, (TypeConverter * __this, ITypeDescriptorContext * context, String * text));
IL2CPP_REGISTER_METHOD(0x02944890, Object *, ConvertFromString, (TypeConverter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x029448C0, Object *, ConvertFromString, (TypeConverter * __this, ITypeDescriptorContext * context, String * text));
IL2CPP_REGISTER_METHOD(0x029449B0, Object *, ConvertFromString, (TypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, String * text));
IL2CPP_REGISTER_METHOD(0x029449D0, Object *, ConvertTo, (TypeConverter * __this, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x02944A00, Object *, ConvertTo, (TypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04775630, TypeConverter_ConvertTo_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02944BE0, String *, ConvertToInvariantString, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02944CA0, String *, ConvertToInvariantString, (TypeConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x02944D70, String *, ConvertToString, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02944ED0, String *, ConvertToString, (TypeConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x02945030, String *, ConvertToString, (TypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x02945150, Object *, CreateInstance, (TypeConverter * __this, IDictionary * propertyValues));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, CreateInstance, (TypeConverter * __this, ITypeDescriptorContext * context, IDictionary * propertyValues));
IL2CPP_REGISTER_METHOD(0x02945170, Exception *, GetConvertFromException, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04714468, TypeConverter_GetConvertFromException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029452F0, Exception *, GetConvertToException, (TypeConverter * __this, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04751A80, TypeConverter_GetConvertToException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C5D30, bool, GetCreateInstanceSupported, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetCreateInstanceSupported, (TypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x029454B0, PropertyDescriptorCollection *, GetProperties, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02945600, PropertyDescriptorCollection *, GetProperties, (TypeConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptorCollection *, GetProperties, (TypeConverter * __this, ITypeDescriptorContext * context, Object * value, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x02945750, bool, GetPropertiesSupported, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (TypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x012B3270, ICollection *, GetStandardValues, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, TypeConverter_StandardValuesCollection *, GetStandardValues, (TypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02945770, bool, GetStandardValuesExclusive, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesExclusive, (TypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02945790, bool, GetStandardValuesSupported, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesSupported, (TypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x029457B0, bool, IsValid, (TypeConverter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x029457D0, bool, IsValid, (TypeConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x029459C0, PropertyDescriptorCollection *, SortProperties, (TypeConverter * __this, PropertyDescriptorCollection * props, String__Array * names));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
