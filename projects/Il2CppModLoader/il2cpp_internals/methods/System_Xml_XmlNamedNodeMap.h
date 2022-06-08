using namespace app;

namespace app::methods::System::Xml::XmlNamedNodeMap {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlNamedNodeMap * __this, XmlNode * parent));
IL2CPP_REGISTER_METHOD(0x01DC1020, XmlNode *, GetNamedItem, (XmlNamedNodeMap * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DC1240, XmlNode *, SetNamedItem, (XmlNamedNodeMap * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195CDA0, int32_t, get_Count, (XmlNamedNodeMap * __this));
IL2CPP_REGISTER_METHOD(0x01DC1320, IEnumerator *, GetEnumerator, (XmlNamedNodeMap * __this));
IL2CPP_REGISTER_METHOD(0x01DC1330, int32_t, FindNodeOffset, (XmlNamedNodeMap * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DC14A0, int32_t, FindNodeOffset, (XmlNamedNodeMap * __this, String * localName, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x01DC1660, XmlNode *, AddNode, (XmlNamedNodeMap * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DC18A0, XmlNode *, AddNodeForLoad, (XmlNamedNodeMap * __this, XmlNode * node, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01DC1960, XmlNode *, RemoveNodeAt, (XmlNamedNodeMap * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01DC1B30, XmlNode *, ReplaceNodeAt, (XmlNamedNodeMap * __this, int32_t i, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DC1BA0, XmlNode *, InsertNodeAt, (XmlNamedNodeMap * __this, int32_t i, XmlNode * node));
}
