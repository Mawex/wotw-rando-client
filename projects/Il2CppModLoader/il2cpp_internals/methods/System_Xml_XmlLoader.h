#include <interception_macros.h>

namespace app::methods::System::Xml::XmlLoader {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlLoader * __this));
IL2CPP_REGISTER_METHOD(0x01DB9B00, void, Load, (XmlLoader * __this, XmlDocument * doc, XmlReader * reader, bool preserveWhitespace));
IL2CPP_REGISTER_METHODINFO(0x04710990, XmlLoader_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB9E10, void, LoadDocSequence, (XmlLoader * __this, XmlDocument * parentDoc));
IL2CPP_REGISTER_METHOD(0x01DB9E90, XmlNode *, ReadCurrentNode, (XmlLoader * __this, XmlDocument * doc, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0472B608, XmlLoader_ReadCurrentNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBA060, XmlNode *, LoadNode, (XmlLoader * __this, bool skipOverWhitespace));
IL2CPP_REGISTER_METHODINFO(0x04726C88, XmlLoader_LoadNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBA7A0, XmlAttribute *, LoadAttributeNode, (XmlLoader * __this));
IL2CPP_REGISTER_METHODINFO(0x04754C28, XmlLoader_LoadAttributeNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBAB60, XmlAttribute *, LoadDefaultAttribute, (XmlLoader * __this));
IL2CPP_REGISTER_METHOD(0x01DBAD80, void, LoadAttributeValue, (XmlLoader * __this, XmlNode * parent, bool direct));
IL2CPP_REGISTER_METHODINFO(0x0473DF40, XmlLoader_LoadAttributeValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBB310, XmlEntityReference *, LoadEntityReferenceNode, (XmlLoader * __this, bool direct));
IL2CPP_REGISTER_METHOD(0x01DBB660, XmlDeclaration *, LoadDeclarationNode, (XmlLoader * __this));
IL2CPP_REGISTER_METHOD(0x01DBB980, XmlDocumentType *, LoadDocumentTypeNode, (XmlLoader * __this));
IL2CPP_REGISTER_METHOD(0x01DBBCB0, XmlNode *, LoadNodeDirect, (XmlLoader * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C0B8, XmlLoader_LoadNodeDirect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBC750, XmlAttribute *, LoadAttributeNodeDirect, (XmlLoader * __this));
IL2CPP_REGISTER_METHOD(0x01DBCAC0, void, ParseDocumentType, (XmlLoader * __this, XmlDocumentType * dtNode));
IL2CPP_REGISTER_METHOD(0x01DBCB50, void, ParseDocumentType, (XmlLoader * __this, XmlDocumentType * dtNode, bool bUseResolver, XmlResolver * resolver));
IL2CPP_REGISTER_METHOD(0x01DBD0B0, void, LoadDocumentType, (XmlLoader * __this, IDtdInfo * dtdInfo, XmlDocumentType * dtNode));
IL2CPP_REGISTER_METHODINFO(0x04788838, XmlLoader_LoadDocumentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBE010, XmlParserContext *, GetContext, (XmlLoader * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DBEB80, XmlNamespaceManager *, ParsePartialContent, (XmlLoader * __this, XmlNode * parentNode, String * innerxmltext, XmlNodeType__Enum nt));
IL2CPP_REGISTER_METHOD(0x01DBEDB0, void, LoadInnerXmlElement, (XmlLoader * __this, XmlElement * node, String * innerxmltext));
IL2CPP_REGISTER_METHOD(0x01DBEE50, void, LoadInnerXmlAttribute, (XmlLoader * __this, XmlAttribute * node, String * innerxmltext));
IL2CPP_REGISTER_METHOD(0x01DBEE70, void, RemoveDuplicateNamespace, (XmlLoader * __this, XmlElement * elem, XmlNamespaceManager * mgr, bool fCheckElemAttrs));
IL2CPP_REGISTER_METHOD(0x01DBF320, String *, EntitizeName, (XmlLoader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DBF3B0, void, ExpandEntity, (XmlLoader * __this, XmlEntity * ent));
IL2CPP_REGISTER_METHOD(0x01DBF420, void, ExpandEntityReference, (XmlLoader * __this, XmlEntityReference * eref));
IL2CPP_REGISTER_METHODINFO(0x04768F58, XmlLoader_ExpandEntityReference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DBFBF0, XmlReader *, CreateInnerXmlReader, (XmlLoader * __this, String * xmlFragment, XmlNodeType__Enum nt, XmlParserContext * context, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01DBFFC0, void, ParseXmlDeclarationValue, (String * strValue, String * * version, String * * encoding, String * * standalone));
IL2CPP_REGISTER_METHOD(0x01DC0280, Exception *, UnexpectedNodeType, (XmlNodeType__Enum nodetype));
}
