#include <interception_macros.h>

namespace app::methods::System::Xml::XmlComment {
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (XmlComment * __this, String * comment, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01960390, String *, get_Name, (XmlComment * __this));
IL2CPP_REGISTER_METHOD(0x01960390, String *, get_LocalName, (XmlComment * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, XmlNodeType__Enum, get_NodeType, (XmlComment * __this));
IL2CPP_REGISTER_METHOD(0x019603C0, XmlNode *, CloneNode, (XmlComment * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x01960420, void, WriteTo, (XmlComment * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlComment * __this, XmlWriter * w));
}
