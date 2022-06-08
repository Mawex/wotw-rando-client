using namespace app;

namespace app::methods::System::ComponentModel::EnumConverter {
IL2CPP_REGISTER_METHOD(0x01FE8140, void, __ctor, (EnumConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_EnumType, (EnumConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, TypeConverter_StandardValuesCollection *, get_Values, (EnumConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Values, (EnumConverter * __this, TypeConverter_StandardValuesCollection * value));
IL2CPP_REGISTER_METHOD(0x01FE81F0, bool, CanConvertFrom, (EnumConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x01FE8300, bool, CanConvertTo, (EnumConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FE8410, IComparer *, get_Comparer, (EnumConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FE84B0, Object *, ConvertFrom, (EnumConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04703288, EnumConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE8930, Object *, ConvertTo, (EnumConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x047159E0, EnumConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE9730, TypeConverter_StandardValuesCollection *, GetStandardValues, (EnumConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x01FE9C60, bool, GetStandardValuesExclusive, (EnumConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (EnumConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x01FE9D40, bool, IsValid, (EnumConverter * __this, ITypeDescriptorContext * context, Object * value));
}
