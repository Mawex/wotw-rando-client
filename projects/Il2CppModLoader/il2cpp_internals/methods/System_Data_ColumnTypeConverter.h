using namespace app;

namespace app::methods::System::Data::ColumnTypeConverter {
IL2CPP_REGISTER_METHOD(0x02151820, bool, CanConvertTo, (ColumnTypeConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x02151900, Object *, ConvertTo, (ColumnTypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04794E08, ColumnTypeConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02151EB0, bool, CanConvertFrom, (ColumnTypeConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x02151F90, Object *, ConvertFrom, (ColumnTypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x02152230, TypeConverter_StandardValuesCollection *, GetStandardValues, (ColumnTypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (ColumnTypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (ColumnTypeConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02152450, void, __cctor, (MethodInfo * method));
}
