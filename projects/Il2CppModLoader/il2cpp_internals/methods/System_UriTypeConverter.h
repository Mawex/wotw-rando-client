using namespace app;

namespace app::methods::System::UriTypeConverter {
IL2CPP_REGISTER_METHOD(0x031A0790, void, __ctor, (UriTypeConverter * __this));
IL2CPP_REGISTER_METHOD(0x031A0820, bool, CanConvert, (UriTypeConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x031A0910, bool, CanConvertFrom, (UriTypeConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHODINFO(0x04781578, UriTypeConverter_CanConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031A09F0, bool, CanConvertTo, (UriTypeConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x031A0AB0, Object *, ConvertFrom, (UriTypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474F438, UriTypeConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031A0D80, Object *, ConvertTo, (UriTypeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0474F1A0, UriTypeConverter_ConvertTo__MethodInfo);
}
