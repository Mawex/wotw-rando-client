#include <interception_macros.h>

namespace app::methods::System::ComponentModel::GuidConverter {
IL2CPP_REGISTER_METHOD(0x01FEDA40, bool, CanConvertFrom, (GuidConverter * __this, ITypeDescriptorContext * context, Type * sourceType));
IL2CPP_REGISTER_METHOD(0x01FEDB20, bool, CanConvertTo, (GuidConverter * __this, ITypeDescriptorContext * context, Type * destinationType));
IL2CPP_REGISTER_METHOD(0x01FEDC00, Object *, ConvertFrom, (GuidConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value));
IL2CPP_REGISTER_METHOD(0x01FEDD30, Object *, ConvertTo, (GuidConverter * __this, ITypeDescriptorContext * context, CultureInfo * culture, Object * value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04786010, GuidConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FEE0F0, void, __ctor, (GuidConverter * __this));
}
