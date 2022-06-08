#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DateTimeOffsetConverter {
IL2CPP_REGISTER_METHOD(0x01FDFD00, bool, CanConvertFrom, (DateTimeOffsetConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x01FDFDE0, bool, CanConvertTo, (DateTimeOffsetConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FDFEC0, Object *, ConvertFrom, (DateTimeOffsetConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04788338, DateTimeOffsetConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE0200, Object *, ConvertTo, (DateTimeOffsetConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FE1160, void, __ctor, (DateTimeOffsetConverter * __this));
}
