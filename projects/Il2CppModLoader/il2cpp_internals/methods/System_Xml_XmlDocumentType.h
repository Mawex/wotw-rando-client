#include <interception_macros.h>

namespace app::methods::System::Xml::XmlDocumentType {
IL2CPP_REGISTER_METHOD(0x01DAB6F0, void, __ctor, (XmlDocumentType * __this, String * name, String * publicId, String * systemId, String * internalSubset, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_LocalName, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlNodeType__Enum, get_NodeType, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x01DAB8D0, XmlNode *, CloneNode, (XmlDocumentType * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x01DAB930, XmlNamedNodeMap *, get_Entities, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x01DABA80, XmlNamedNodeMap *, get_Notations, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_PublicId, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_SystemId, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_InternalSubset, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_ParseWithNamespaces, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x01DABBD0, void, WriteTo, (XmlDocumentType * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlDocumentType * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FBB60, SchemaInfo *, get_DtdSchemaInfo, (XmlDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DtdSchemaInfo, (XmlDocumentType * __this, SchemaInfo * value));
}
