using namespace app;

namespace app::methods::System::Xml::XmlCDataSection {
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (XmlCDataSection * __this, String * data, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x0195EF30, String *, get_Name, (XmlCDataSection * __this));
IL2CPP_REGISTER_METHOD(0x0195EF30, String *, get_LocalName, (XmlCDataSection * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, XmlNodeType__Enum, get_NodeType, (XmlCDataSection * __this));
IL2CPP_REGISTER_METHOD(0x01714B00, XmlNode *, get_ParentNode, (XmlCDataSection * __this));
IL2CPP_REGISTER_METHOD(0x0195EF60, XmlNode *, CloneNode, (XmlCDataSection * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x0195EFC0, void, WriteTo, (XmlCDataSection * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlCDataSection * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (XmlCDataSection * __this));
}
