#include <interception_macros.h>

namespace app::methods::MS::Internal::Xml::Cache::XPathDocumentNavigator {
IL2CPP_REGISTER_METHOD(0x021D6E20, void, __ctor, (XPathDocumentNavigator * __this, XPathNode__Array * pageCurrent, int32_t idxCurrent, XPathNode__Array * pageParent, int32_t idxParent));
IL2CPP_REGISTER_METHOD(0x021D6EF0, String *, get_Value, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D72D0, XPathNavigator *, Clone, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D74C0, XPathNodeType__Enum, get_NodeType, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7500, String *, get_LocalName, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7550, String *, get_NamespaceURI, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D75A0, String *, get_Name, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D75F0, String *, get_Prefix, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7640, XmlNameTable *, get_NameTable, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D76A0, bool, MoveToFirstNamespace, (XPathDocumentNavigator * __this, XPathNamespaceScope__Enum namespaceScope));
IL2CPP_REGISTER_METHOD(0x021D7900, bool, MoveToNextNamespace, (XPathDocumentNavigator * __this, XPathNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x021D7A70, bool, MoveToParent, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7B00, bool, IsSamePosition, (XPathDocumentNavigator * __this, XPathNavigator * other));
IL2CPP_REGISTER_METHOD(0x01956D40, Object *, get_UnderlyingObject, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7BE0, bool, HasLineInfo, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7C40, int32_t, get_LineNumber, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7D00, int32_t, get_LinePosition, (XPathDocumentNavigator * __this));
IL2CPP_REGISTER_METHOD(0x021D7DD0, int32_t, GetPositionHashCode, (XPathDocumentNavigator * __this));
}
