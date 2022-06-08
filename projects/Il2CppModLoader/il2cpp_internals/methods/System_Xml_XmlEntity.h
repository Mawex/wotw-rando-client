using namespace app;

namespace app::methods::System::Xml::XmlEntity {
IL2CPP_REGISTER_METHOD(0x01DB52D0, void, __ctor, (XmlEntity * __this, String * name, String * strdata, String * publicId, String * systemId, String * notationName, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01DB5380, XmlNode *, CloneNode, (XmlEntity * __this, bool deep));
IL2CPP_REGISTER_METHODINFO(0x04779FD8, XmlEntity_CloneNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_LocalName, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x01DAF6D0, String *, get_InnerText, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x01DB53F0, void, set_InnerText, (XmlEntity * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04777B10, XmlEntity_set_InnerText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x01DB5460, XmlLinkedNode *, get_LastNode, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_LastNode, (XmlEntity * __this, XmlLinkedNode * value));
IL2CPP_REGISTER_METHOD(0x01DB5600, bool, IsValidChildType, (XmlEntity * __this, XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x005D89A0, XmlNodeType__Enum, get_NodeType, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_SystemId, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x01DB5620, void, set_InnerXml, (XmlEntity * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04741370, XmlEntity_set_InnerXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteTo, (XmlEntity * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlEntity * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_BaseURI, (XmlEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetBaseURI, (XmlEntity * __this, String * inBaseURI));
}
