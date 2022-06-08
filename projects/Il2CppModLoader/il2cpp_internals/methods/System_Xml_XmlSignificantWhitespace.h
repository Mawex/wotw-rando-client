using namespace app;

namespace app::methods::System::Xml::XmlSignificantWhitespace {
IL2CPP_REGISTER_METHOD(0x01707400, void, __ctor, (XmlSignificantWhitespace * __this, String * strData, XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x047394E0, XmlSignificantWhitespace__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01707510, String *, get_Name, (XmlSignificantWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01707510, String *, get_LocalName, (XmlSignificantWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x00C8F220, XmlNodeType__Enum, get_NodeType, (XmlSignificantWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01707540, XmlNode *, get_ParentNode, (XmlSignificantWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x017075E0, XmlNode *, CloneNode, (XmlSignificantWhitespace * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x01707640, String *, get_Value, (XmlSignificantWhitespace * __this));
IL2CPP_REGISTER_METHOD(0x01707660, void, set_Value, (XmlSignificantWhitespace * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472D540, XmlSignificantWhitespace_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01707750, void, WriteTo, (XmlSignificantWhitespace * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlSignificantWhitespace * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsText, (XmlSignificantWhitespace * __this));
}
