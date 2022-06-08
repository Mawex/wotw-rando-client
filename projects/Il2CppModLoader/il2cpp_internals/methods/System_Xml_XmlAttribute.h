#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAttribute {
IL2CPP_REGISTER_METHOD(0x0195ADF0, void, __ctor, (XmlAttribute * __this, XmlName * name, XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x0473EF30, XmlAttribute__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195AF50, int32_t, get_LocalNameHash, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195AF70, void, __ctor, (XmlAttribute * __this, String * prefix, String * localName, String * namespaceURI, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlName *, get_XmlName, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_XmlName, (XmlAttribute * __this, XmlName * value));
IL2CPP_REGISTER_METHOD(0x0195AFC0, XmlNode *, CloneNode, (XmlAttribute * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlNode *, get_ParentNode, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B0B0, String *, get_Name, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x005E0120, String *, get_LocalName, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B0D0, String *, get_NamespaceURI, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B0F0, String *, get_Prefix, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B110, void, set_Prefix, (XmlAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlNodeType__Enum, get_NodeType, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B1D0, XmlDocument *, get_OwnerDocument, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B1F0, String *, get_Value, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B210, void, set_Value, (XmlAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, IXmlSchemaInfo *, get_SchemaInfo, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B230, void, set_InnerText, (XmlAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195B2A0, bool, PrepareOwnerElementInElementIdAttrMap, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B370, void, ResetOwnerElementInElementIdAttrMap, (XmlAttribute * __this, String * oldInnerText));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B4F0, XmlNode *, AppendChildForLoad, (XmlAttribute * __this, XmlNode * newChild, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlLinkedNode *, get_LastNode, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_LastNode, (XmlAttribute * __this, XmlLinkedNode * value));
IL2CPP_REGISTER_METHOD(0x0195B6C0, bool, IsValidChildType, (XmlAttribute * __this, XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Specified, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195B6D0, XmlNode *, InsertBefore, (XmlAttribute * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x0195B770, XmlNode *, InsertAfter, (XmlAttribute * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x0195B810, XmlNode *, RemoveChild, (XmlAttribute * __this, XmlNode * oldChild));
IL2CPP_REGISTER_METHOD(0x0195B890, XmlNode *, PrependChild, (XmlAttribute * __this, XmlNode * newChild));
IL2CPP_REGISTER_METHOD(0x0195B950, XmlNode *, AppendChild, (XmlAttribute * __this, XmlNode * newChild));
IL2CPP_REGISTER_METHOD(0x0195B9D0, XmlElement *, get_OwnerElement, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195BA90, void, set_InnerXml, (XmlAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195BC10, void, WriteTo, (XmlAttribute * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x0195BCE0, void, WriteContentTo, (XmlAttribute * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x0195BD50, String *, get_BaseURI, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetParent, (XmlAttribute * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195BE30, XmlSpace__Enum, get_XmlSpace, (XmlAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0195BE90, String *, get_XmlLang, (XmlAttribute * __this));
}
