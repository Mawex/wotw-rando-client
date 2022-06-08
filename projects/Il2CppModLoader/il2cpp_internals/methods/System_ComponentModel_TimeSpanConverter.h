using namespace app;

namespace app::methods::System::ComponentModel::TimeSpanConverter {
IL2CPP_REGISTER_METHOD(0x029AD780, bool, CanConvertFrom, (TimeSpanConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x029AD860, bool, CanConvertTo, (TimeSpanConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x029AD940, Object *, ConvertFrom, (TimeSpanConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472C240, TimeSpanConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029ADB50, Object *, ConvertTo, (TimeSpanConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476ADE0, TimeSpanConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029ADF00, void, __ctor, (TimeSpanConverter * __this));
}
