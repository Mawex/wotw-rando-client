using namespace app;

namespace app::methods::System::Xml::XmlWhitespace {
IL2CPP_REGISTER_METHOD(0x01FD5270, void, __ctor, (XmlWhitespace * __this, String * strData, XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x0470EAA0, XmlWhitespace__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD5380, String *, get_Name, (XmlWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01FD5380, String *, get_LocalName, (XmlWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x004AB2B0, XmlNodeType__Enum, get_NodeType, (XmlWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01707540, XmlNode *, get_ParentNode, (XmlWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01707640, String *, get_Value, (XmlWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01FD53B0, void, set_Value, (XmlWhitespace * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477FBA0, XmlWhitespace_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD54A0, XmlNode *, CloneNode, (XmlWhitespace * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x01FD5500, void, WriteTo, (XmlWhitespace * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlWhitespace * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (XmlWhitespace * __this));
}
