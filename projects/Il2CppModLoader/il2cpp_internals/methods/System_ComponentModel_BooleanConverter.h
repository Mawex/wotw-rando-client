#include <interception_macros.h>

namespace app::methods::System::ComponentModel::BooleanConverter {
IL2CPP_REGISTER_METHOD(0x024A5150, bool, CanConvertFrom, (BooleanConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x024A5230, Object *, ConvertFrom, (BooleanConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04768060, BooleanConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A5440, TypeConverter_StandardValuesCollection *, GetStandardValues, (BooleanConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (BooleanConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (BooleanConverter * __this, ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x024A56D0, void, __ctor, (BooleanConverter * __this));
}
