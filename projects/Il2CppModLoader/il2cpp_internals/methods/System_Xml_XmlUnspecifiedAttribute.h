using namespace app;

namespace app::methods::System::Xml::XmlUnspecifiedAttribute {
IL2CPP_REGISTER_METHOD(0x0195AF70, void, __ctor, (XmlUnspecifiedAttribute * __this, String * prefix, String * localName, String * namespaceURI, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Specified, (XmlUnspecifiedAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FC3A30, XmlNode *, CloneNode, (XmlUnspecifiedAttribute * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x01FC3BD0, void, set_InnerText, (XmlUnspecifiedAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01FC3C50, XmlNode *, InsertBefore, (XmlUnspecifiedAttribute * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x01FC3CE0, XmlNode *, InsertAfter, (XmlUnspecifiedAttribute * __this, XmlNode * newChild, XmlNode * refChild));
IL2CPP_REGISTER_METHOD(0x01FC3D70, XmlNode *, RemoveChild, (XmlUnspecifiedAttribute * __this, XmlNode * oldChild));
IL2CPP_REGISTER_METHOD(0x01FC3E00, XmlNode *, AppendChild, (XmlUnspecifiedAttribute * __this, XmlNode * newChild));
IL2CPP_REGISTER_METHOD(0x01FC3E90, void, WriteTo, (XmlUnspecifiedAttribute * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, SetSpecified, (XmlUnspecifiedAttribute * __this, bool f));
}
