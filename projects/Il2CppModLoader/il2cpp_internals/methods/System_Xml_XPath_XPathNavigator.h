#include <interception_macros.h>

namespace app::methods::System_Xml_XPath::XPathNavigator {
IL2CPP_REGISTER_METHOD(0x00CC2AF0, String *, ToString, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01955CB0, XmlSchemaType *, get_XmlType, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01955D70, Object *, get_TypedValue, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01955F90, Type *, get_ValueType, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019560A0, bool, get_ValueAsBoolean, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019562B0, DateTime, get_ValueAsDateTime, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019564C0, double, get_ValueAsDouble, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019566D0, int32_t, get_ValueAsInt, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019568E0, int64_t, get_ValueAsLong, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01956AF0, Object *, ValueAs, (app::XPathNavigator * this_ptr, app::Type * return_type, app::IXmlNamespaceResolver * ns_resolver));
IL2CPP_REGISTER_METHOD(0x01956D40, Object *, ICloneable_Clone, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01956D60, String *, LookupNamespace, (app::XPathNavigator * this_ptr, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x01956F50, String *, LookupPrefix, (app::XPathNavigator * this_ptr, app::String * namespace_u_r_i));
IL2CPP_REGISTER_METHOD(0x01957200, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (app::XPathNavigator * this_ptr, app::XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, get_UnderlyingObject, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01957520, bool, MoveToNamespace, (app::XPathNavigator * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01957630, IXmlSchemaInfo *, get_SchemaInfo, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019576B0, bool, IsText, (app::XPathNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x019576C0, Object *, get_debuggerDisplayProxy, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XPathNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01957750, void, __cctor, ());
}
