#include <interception_macros.h>

namespace app::methods::System_Xml::XmlNamedNodeMap {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XmlNamedNodeMap * this_ptr, app::XmlNode * parent));
IL2CPP_REGISTER_METHOD(0x01DC1020, XmlNode *, GetNamedItem, (app::XmlNamedNodeMap * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01DC1240, XmlNode *, SetNamedItem, (app::XmlNamedNodeMap * this_ptr, app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x0195CDA0, int32_t, get_Count, (app::XmlNamedNodeMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DC1320, IEnumerator *, GetEnumerator, (app::XmlNamedNodeMap * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DC1330, int32_t, FindNodeOffset_1, (app::XmlNamedNodeMap * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01DC14A0, int32_t, FindNodeOffset_2, (app::XmlNamedNodeMap * this_ptr, app::String * local_name, app::String * namespace_u_r_i));
IL2CPP_REGISTER_METHOD(0x01DC1660, XmlNode *, AddNode, (app::XmlNamedNodeMap * this_ptr, app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DC18A0, XmlNode *, AddNodeForLoad, (app::XmlNamedNodeMap * this_ptr, app::XmlNode * node, app::XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01DC1960, XmlNode *, RemoveNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x01DC1B30, XmlNode *, ReplaceNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i, app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01DC1BA0, XmlNode *, InsertNodeAt, (app::XmlNamedNodeMap * this_ptr, int32_t i, app::XmlNode * node));
}
