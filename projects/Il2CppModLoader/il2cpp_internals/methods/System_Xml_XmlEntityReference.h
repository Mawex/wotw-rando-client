using namespace app;

namespace app::methods::System::Xml::XmlEntityReference {
IL2CPP_REGISTER_METHOD(0x01DB5690, void, __ctor, (XmlEntityReference * __this, String * name, XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x0476F9D0, XmlEntityReference__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_LocalName, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Value, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x01DB57F0, void, set_Value, (XmlEntityReference * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04706158, XmlEntityReference_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008E77B0, XmlNodeType__Enum, get_NodeType, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x01DB5860, XmlNode *, CloneNode, (XmlEntityReference * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x01DB58B0, void, SetParent, (XmlEntityReference * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DB5A70, void, SetParentForLoad, (XmlEntityReference * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlLinkedNode *, get_LastNode, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LastNode, (XmlEntityReference * __this, XmlLinkedNode * value));
IL2CPP_REGISTER_METHOD(0x01DAE3C0, bool, IsValidChildType, (XmlEntityReference * __this, XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01DB5A90, void, WriteTo, (XmlEntityReference * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x01DB5AC0, void, WriteContentTo, (XmlEntityReference * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x01DB5D40, String *, get_BaseURI, (XmlEntityReference * __this));
IL2CPP_REGISTER_METHOD(0x01DB5D80, String *, ConstructBaseURI, (XmlEntityReference * __this, String * baseURI, String * systemId));
IL2CPP_REGISTER_METHOD(0x01DB5EA0, String *, get_ChildBaseURI, (XmlEntityReference * __this));
}
