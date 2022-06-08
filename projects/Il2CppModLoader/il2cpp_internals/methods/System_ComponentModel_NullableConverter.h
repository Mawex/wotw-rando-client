using namespace app;

namespace app::methods::System::ComponentModel::NullableConverter {
IL2CPP_REGISTER_METHOD(0x02991010, void, __ctor, (NullableConverter * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0475FB10, NullableConverter__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02991160, bool, CanConvertFrom, (NullableConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x02991250, Object *, ConvertFrom, (NullableConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x029913A0, bool, CanConvertTo, (NullableConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x029914C0, Object *, ConvertTo, (NullableConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476C3C8, NullableConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029918E0, Object *, CreateInstance, (NullableConverter * __this, ITypeDescriptorContext * context, IDictionary * propertyValues));
IL2CPP_REGISTER_METHOD(0x02991900, bool, GetCreateInstanceSupported, (NullableConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991920, PropertyDescriptorCollection *, GetProperties, (NullableConverter * __this, ITypeDescriptorContext * context, Object * value, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x02991950, bool, GetPropertiesSupported, (NullableConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991970, TypeConverter_StandardValuesCollection *, GetStandardValues, (NullableConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991CC0, bool, GetStandardValuesExclusive, (NullableConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x023A0050, bool, GetStandardValuesSupported, (NullableConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991CE0, bool, IsValid, (NullableConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_NullableType, (NullableConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_UnderlyingType, (NullableConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, TypeConverter *, get_UnderlyingTypeConverter, (NullableConverter * __this));
}
