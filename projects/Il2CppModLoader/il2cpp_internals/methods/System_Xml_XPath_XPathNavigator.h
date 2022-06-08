using namespace app;

namespace app::methods::System::Xml::XPath::XPathNavigator {
IL2CPP_REGISTER_METHOD(0x00CC2AF0, String *, ToString, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01955CB0, XmlSchemaType *, get_XmlType, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01955D70, Object *, get_TypedValue, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01955F90, Type *, get_ValueType, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019560A0, bool, get_ValueAsBoolean, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019562B0, DateTime, get_ValueAsDateTime, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019564C0, double, get_ValueAsDouble, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019566D0, int32_t, get_ValueAsInt, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019568E0, int64_t, get_ValueAsLong, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01956AF0, Object *, ValueAs, (XPathNavigator * __this, Type * returnType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x01956D40, Object *, ICloneable_Clone, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01956D60, String *, LookupNamespace, (XPathNavigator * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01956F50, String *, LookupPrefix, (XPathNavigator * __this, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x01957200, IDictionary_2_System_String_System_String_ *, GetNamespacesInScope, (XPathNavigator * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, get_UnderlyingObject, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01957520, bool, MoveToNamespace, (XPathNavigator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01957630, IXmlSchemaInfo *, get_SchemaInfo, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x019576B0, bool, IsText, (XPathNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x019576C0, Object *, get_debuggerDisplayProxy, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XPathNavigator * __this));
IL2CPP_REGISTER_METHOD(0x01957750, void, __cctor, (MethodInfo * method));
}
