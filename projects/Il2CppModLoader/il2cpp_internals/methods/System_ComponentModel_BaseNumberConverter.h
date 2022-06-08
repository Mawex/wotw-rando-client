#include <interception_macros.h>

namespace app::methods::System::ComponentModel::BaseNumberConverter {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowHex, (BaseNumberConverter * __this));
IL2CPP_REGISTER_METHOD(0x024A42A0, Exception *, FromStringError, (BaseNumberConverter * __this, String * failedText, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x024A4510, bool, CanConvertFrom, (BaseNumberConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x024A45F0, Object *, ConvertFrom, (BaseNumberConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04748A30, BaseNumberConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A4950, Object *, ConvertTo, (BaseNumberConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476C160, BaseNumberConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A4C20, bool, CanConvertTo, (BaseNumberConverter * __this, ITypeDescriptorContext * context, Type * t));
IL2CPP_REGISTER_METHOD(0x024A4C70, void, __ctor, (BaseNumberConverter * __this));
}
