#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAttributeCollection {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlAttributeCollection * __this, XmlNode * parent));
IL2CPP_REGISTER_METHOD(0x0195BF70, XmlAttribute *, get_ItemOf, (XmlAttributeCollection * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x04702848, XmlAttributeCollection_get_ItemOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195C0A0, XmlAttribute *, get_ItemOf, (XmlAttributeCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0195C240, XmlAttribute *, get_ItemOf, (XmlAttributeCollection * __this, String * localName, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x0195C420, int32_t, FindNodeOffsetNS, (XmlAttributeCollection * __this, XmlAttribute * node));
IL2CPP_REGISTER_METHOD(0x0195C650, XmlNode *, SetNamedItem, (XmlAttributeCollection * __this, XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x04738E30, XmlAttributeCollection_SetNamedItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195C800, XmlAttribute *, Append, (XmlAttributeCollection * __this, XmlAttribute * node));
IL2CPP_REGISTER_METHODINFO(0x047373F0, XmlAttributeCollection_Append__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195CA80, XmlAttribute *, Remove, (XmlAttributeCollection * __this, XmlAttribute * node));
IL2CPP_REGISTER_METHOD(0x0195CB00, XmlAttribute *, RemoveAt, (XmlAttributeCollection * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0195CBD0, void, RemoveAll, (XmlAttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x0195CD10, void, ICollection_CopyTo, (XmlAttributeCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (XmlAttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICollection_get_SyncRoot, (XmlAttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x0195CDA0, int32_t, ICollection_get_Count, (XmlAttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x0195CDB0, XmlNode *, AddNode, (XmlAttributeCollection * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195D030, XmlNode *, InsertNodeAt, (XmlAttributeCollection * __this, int32_t i, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195D130, XmlNode *, RemoveNodeAt, (XmlAttributeCollection * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0195D360, void, Detach, (XmlAttributeCollection * __this, XmlAttribute * attr));
IL2CPP_REGISTER_METHOD(0x0195D430, void, InsertParentIntoElementIdAttrMap, (XmlAttributeCollection * __this, XmlAttribute * attr));
IL2CPP_REGISTER_METHOD(0x0195D670, void, RemoveParentFromElementIdAttrMap, (XmlAttributeCollection * __this, XmlAttribute * attr));
IL2CPP_REGISTER_METHOD(0x0195D8B0, int32_t, RemoveDuplicateAttribute, (XmlAttributeCollection * __this, XmlAttribute * attr));
IL2CPP_REGISTER_METHOD(0x0195DA10, bool, PrepareParentInElementIdAttrMap, (XmlAttributeCollection * __this, String * attrPrefix, String * attrLocalName));
IL2CPP_REGISTER_METHOD(0x0195DBA0, void, ResetParentInElementIdAttrMap, (XmlAttributeCollection * __this, String * oldVal, String * newVal));
IL2CPP_REGISTER_METHOD(0x0195DCC0, XmlAttribute *, InternalAppendAttribute, (XmlAttributeCollection * __this, XmlAttribute * node));
}
