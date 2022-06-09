#include <interception_macros.h>

namespace app::methods::System_Xml::XmlAttribute {
IL2CPP_REGISTER_METHOD(0x0195ADF0, void, __ctor_1, (app::XmlAttribute * this_ptr, app::XmlName * name, app::XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x0473EF30, XmlAttribute__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195AF50, int32_t, get_LocalNameHash, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195AF70, void, __ctor_2, (app::XmlAttribute * this_ptr, app::String * prefix, app::String * local_name, app::String * namespace_u_r_i, app::XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlName *, get_XmlName, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_XmlName, (app::XmlAttribute * this_ptr, app::XmlName * value));
IL2CPP_REGISTER_METHOD(0x0195AFC0, XmlNode *, CloneNode, (app::XmlAttribute * this_ptr, bool deep));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlNode *, get_ParentNode, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B0B0, String *, get_Name, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x005E0120, String *, get_LocalName, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B0D0, String *, get_NamespaceURI, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B0F0, String *, get_Prefix, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B110, void, set_Prefix, (app::XmlAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlNodeType__Enum, get_NodeType, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B1D0, XmlDocument *, get_OwnerDocument, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B1F0, String *, get_Value, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B210, void, set_Value, (app::XmlAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, IXmlSchemaInfo *, get_SchemaInfo, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B230, void, set_InnerText, (app::XmlAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0195B2A0, bool, PrepareOwnerElementInElementIdAttrMap, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B370, void, ResetOwnerElementInElementIdAttrMap, (app::XmlAttribute * this_ptr, app::String * old_inner_text));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B4F0, XmlNode *, AppendChildForLoad, (app::XmlAttribute * this_ptr, app::XmlNode * new_child, app::XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlLinkedNode *, get_LastNode, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_LastNode, (app::XmlAttribute * this_ptr, app::XmlLinkedNode * value));
IL2CPP_REGISTER_METHOD(0x0195B6C0, bool, IsValidChildType, (app::XmlAttribute * this_ptr, app::XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Specified, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195B6D0, XmlNode *, InsertBefore, (app::XmlAttribute * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child));
IL2CPP_REGISTER_METHOD(0x0195B770, XmlNode *, InsertAfter, (app::XmlAttribute * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child));
IL2CPP_REGISTER_METHOD(0x0195B810, XmlNode *, RemoveChild, (app::XmlAttribute * this_ptr, app::XmlNode * old_child));
IL2CPP_REGISTER_METHOD(0x0195B890, XmlNode *, PrependChild, (app::XmlAttribute * this_ptr, app::XmlNode * new_child));
IL2CPP_REGISTER_METHOD(0x0195B950, XmlNode *, AppendChild, (app::XmlAttribute * this_ptr, app::XmlNode * new_child));
IL2CPP_REGISTER_METHOD(0x0195B9D0, XmlElement *, get_OwnerElement, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195BA90, void, set_InnerXml, (app::XmlAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0195BC10, void, WriteTo, (app::XmlAttribute * this_ptr, app::XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x0195BCE0, void, WriteContentTo, (app::XmlAttribute * this_ptr, app::XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x0195BD50, String *, get_BaseURI, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetParent, (app::XmlAttribute * this_ptr, app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195BE30, XmlSpace__Enum, get_XmlSpace, (app::XmlAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195BE90, String *, get_XmlLang, (app::XmlAttribute * this_ptr));
}
