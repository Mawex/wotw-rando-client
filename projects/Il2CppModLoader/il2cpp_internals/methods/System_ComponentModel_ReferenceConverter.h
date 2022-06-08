#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ReferenceConverter {
IL2CPP_REGISTER_METHOD(0x02999290, void, __ctor, (ReferenceConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02999340, bool, CanConvertFrom, (ReferenceConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x02999420, Object *, ConvertFrom, (ReferenceConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x02999660, Object *, ConvertTo, (ReferenceConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0474F368, ReferenceConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02999870, TypeConverter_StandardValuesCollection *, GetStandardValues, (ReferenceConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (ReferenceConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (ReferenceConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValueAllowed, (ReferenceConverter * __this, ITypeDescriptorContext * context, Object * value));
IL2CPP_REGISTER_METHOD(0x02999F70, void, __cctor, ());
}
