using namespace app;

namespace app::methods::System::Xml::XmlText {
IL2CPP_REGISTER_METHOD(0x01714A50, void, __ctor, (XmlText * __this, String * strData));
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (XmlText * __this, String * strData, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01714AD0, String *, get_Name, (XmlText * __this));
IL2CPP_REGISTER_METHOD(0x01714AD0, String *, get_LocalName, (XmlText * __this));
IL2CPP_REGISTER_METHOD(0x00420230, XmlNodeType__Enum, get_NodeType, (XmlText * __this));
IL2CPP_REGISTER_METHOD(0x01714B00, XmlNode *, get_ParentNode, (XmlText * __this));
IL2CPP_REGISTER_METHOD(0x01714BA0, XmlNode *, CloneNode, (XmlText * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x01707640, String *, get_Value, (XmlText * __this));
IL2CPP_REGISTER_METHOD(0x01714C00, void, set_Value, (XmlText * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01707750, void, WriteTo, (XmlText * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlText * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (XmlText * __this));
}
