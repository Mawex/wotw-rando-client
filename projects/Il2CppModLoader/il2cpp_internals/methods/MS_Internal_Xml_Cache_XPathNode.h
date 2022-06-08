#include <interception_macros.h>

namespace app::methods::MS::Internal::Xml::Cache::XPathNode {
IL2CPP_REGISTER_METHOD(0x001DE330, XPathNodeType__Enum, get_NodeType, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE340, String *, get_Prefix, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE360, String *, get_LocalName, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE380, String *, get_Name, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE390, String *, get_NamespaceUri, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE3B0, XPathDocument *, get_Document, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE3D0, int32_t, get_LineNumber, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE400, int32_t, get_LinePosition, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE420, int32_t, get_CollapsedLinePosition, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE450, XPathNodePageInfo *, get_PageInfo, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE470, int32_t, GetParent, (XPathNode__Boxed * __this, XPathNode__Array * * pageNode));
IL2CPP_REGISTER_METHOD(0x001DE4A0, int32_t, GetSibling, (XPathNode__Boxed * __this, XPathNode__Array * * pageNode));
IL2CPP_REGISTER_METHOD(0x001DE4D0, bool, get_IsXmlNamespaceNode, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE4E0, bool, get_HasSibling, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE4F0, bool, get_HasCollapsedText, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE500, bool, get_IsText, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DE510, bool, get_HasNamespaceDecls, (XPathNode__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C30, String *, get_Value, (XPathNode__Boxed * __this));
}
