#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DateTimeConverter {
IL2CPP_REGISTER_METHOD(0x01FDEA30, bool, CanConvertFrom, (DateTimeConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x01FDEB10, bool, CanConvertTo, (DateTimeConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FDEBF0, Object *, ConvertFrom, (DateTimeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04714920, DateTimeConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FDEF20, Object *, ConvertTo, (DateTimeConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FDFC70, void, __ctor, (DateTimeConverter * __this));
}
