#include <interception_macros.h>

namespace app::methods::System_Xml::XmlComment {
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (app::XmlComment * this_ptr, app::String * comment, app::XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01960390, String *, get_Name, (app::XmlComment * this_ptr));
IL2CPP_REGISTER_METHOD(0x01960390, String *, get_LocalName, (app::XmlComment * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9A0, XmlNodeType__Enum, get_NodeType, (app::XmlComment * this_ptr));
IL2CPP_REGISTER_METHOD(0x019603C0, XmlNode *, CloneNode, (app::XmlComment * this_ptr, bool deep));
IL2CPP_REGISTER_METHOD(0x01960420, void, WriteTo, (app::XmlComment * this_ptr, app::XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (app::XmlComment * this_ptr, app::XmlWriter * w));
}
