#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlMiscConverter {
IL2CPP_REGISTER_METHOD(0x0224C4C0, void, __ctor, (XmlMiscConverter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0224C570, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0224C730, String *, ToString, (XmlMiscConverter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0476C430, XmlMiscConverter_ToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224CE20, Object *, ChangeType, (XmlMiscConverter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0474ACD0, XmlMiscConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224D450, Object *, ChangeType, (XmlMiscConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04704348, XmlMiscConverter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224E860, Object *, ChangeTypeWildcardDestination, (XmlMiscConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0224E9D0, Object *, ChangeTypeWildcardSource, (XmlMiscConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
}
