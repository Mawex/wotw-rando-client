#include <interception_macros.h>

namespace app::methods::MS_Internal_Xml_Cache::XPathDocumentNavigator {
IL2CPP_REGISTER_METHOD(0x021D6E20, void, __ctor, (app::XPathDocumentNavigator * this_ptr, app::XPathNode__Array * page_current, int32_t idx_current, app::XPathNode__Array * page_parent, int32_t idx_parent));
IL2CPP_REGISTER_METHOD(0x021D6EF0, String *, get_Value, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D72D0, XPathNavigator *, Clone, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D74C0, XPathNodeType__Enum, get_NodeType, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7500, String *, get_LocalName, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7550, String *, get_NamespaceURI, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D75A0, String *, get_Name, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D75F0, String *, get_Prefix, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7640, XmlNameTable *, get_NameTable, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D76A0, bool, MoveToFirstNamespace, (app::XPathDocumentNavigator * this_ptr, app::XPathNamespaceScope__Enum namespace_scope));
IL2CPP_REGISTER_METHOD(0x021D7900, bool, MoveToNextNamespace, (app::XPathDocumentNavigator * this_ptr, app::XPathNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x021D7A70, bool, MoveToParent, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7B00, bool, IsSamePosition, (app::XPathDocumentNavigator * this_ptr, app::XPathNavigator * other));
IL2CPP_REGISTER_METHOD(0x01956D40, Object *, get_UnderlyingObject, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7BE0, bool, HasLineInfo, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7C40, int32_t, get_LineNumber, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7D00, int32_t, get_LinePosition, (app::XPathDocumentNavigator * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D7DD0, int32_t, GetPositionHashCode, (app::XPathDocumentNavigator * this_ptr));
}
