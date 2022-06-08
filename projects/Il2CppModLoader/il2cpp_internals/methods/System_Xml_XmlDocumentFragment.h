#include <interception_macros.h>

namespace app::methods::System::Xml::XmlDocumentFragment {
IL2CPP_REGISTER_METHOD(0x01DAAEE0, void, __ctor, (XmlDocumentFragment * __this, XmlDocument * ownerDocument));
IL2CPP_REGISTER_METHODINFO(0x047885A8, XmlDocumentFragment__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DAAFB0, String *, get_Name, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x01DAAFB0, String *, get_LocalName, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x004FA040, XmlNodeType__Enum, get_NodeType, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlNode *, get_ParentNode, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x01DAAFE0, XmlDocument *, get_OwnerDocument, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x01DAB0B0, void, set_InnerXml, (XmlDocumentFragment * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01DAB230, XmlNode *, CloneNode, (XmlDocumentFragment * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsContainer, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlLinkedNode *, get_LastNode, (XmlDocumentFragment * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_LastNode, (XmlDocumentFragment * __this, XmlLinkedNode * value));
IL2CPP_REGISTER_METHOD(0x01DAB2D0, bool, IsValidChildType, (XmlDocumentFragment * __this, XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01DAB380, bool, CanInsertAfter, (XmlDocumentFragment * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x01DAB400, bool, CanInsertBefore, (XmlDocumentFragment * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x01971EE0, void, WriteTo, (XmlDocumentFragment * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x01DAB470, void, WriteContentTo, (XmlDocumentFragment * __this, XmlWriter * w));
}
