#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlMiscConverter {
IL2CPP_REGISTER_METHOD(0x0224C4C0, void, __ctor, (app::XmlMiscConverter * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x0224C570, XmlValueConverter *, Create, (app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x0224C730, String *, ToString, (app::XmlMiscConverter * this_ptr, app::Object * value, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHODINFO(0x0476C430, XmlMiscConverter_ToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224CE20, Object *, ChangeType_1, (app::XmlMiscConverter * this_ptr, app::String * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHODINFO(0x0474ACD0, XmlMiscConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224D450, Object *, ChangeType_2, (app::XmlMiscConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHODINFO(0x04704348, XmlMiscConverter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224E860, Object *, ChangeTypeWildcardDestination, (app::XmlMiscConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHOD(0x0224E9D0, Object *, ChangeTypeWildcardSource, (app::XmlMiscConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
}
