using namespace app;

namespace app::methods::System::Xml::Linq::XDocument {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x03035470, void, __ctor, (XDocument * __this, XDocument * other));
IL2CPP_REGISTER_METHOD(0x002FB990, XDeclaration *, get_Declaration, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Declaration, (XDocument * __this, XDeclaration * value));
IL2CPP_REGISTER_METHOD(0x00AB4D20, XmlNodeType__Enum, get_NodeType, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x03035690, XElement *, get_Root, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x03035820, void, WriteTo, (XDocument * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04729F28, XDocument_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030359B0, void, AddAttribute, (XDocument * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x047883C0, XDocument_AddAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03035A20, void, AddAttributeSkipNotify, (XDocument * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x04779458, XDocument_AddAttributeSkipNotify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03035A90, XNode *, CloneNode, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x03035BE0, bool, IsWhitespace, (String * s));
IL2CPP_REGISTER_METHOD(0x03035C60, void, ValidateNode, (XDocument * __this, XNode * node, XNode * previous));
IL2CPP_REGISTER_METHODINFO(0x04784168, XDocument_ValidateNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03035ED0, void, ValidateDocument, (XDocument * __this, XNode * previous, XmlNodeType__Enum allowBefore, XmlNodeType__Enum allowAfter));
IL2CPP_REGISTER_METHODINFO(0x04702B78, XDocument_ValidateDocument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036050, void, ValidateString, (XDocument * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04766FC0, XDocument_ValidateString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157AB70, Object *, GetFirstNode, (XDocument * __this));
IL2CPP_REGISTER_METHOD(0x0157AB70, XElement *, GetFirstNode, (XDocument * __this));
IL2CPP_REGISTER_METHODINFO(0x047303A8, XDocument_GetFirstNode_1__MethodInfo);
}
