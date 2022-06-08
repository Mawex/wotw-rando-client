#include <interception_macros.h>

namespace app::methods::System::Xml::XmlDeclaration {
IL2CPP_REGISTER_METHOD(0x0196B610, void, __ctor, (XmlDeclaration * __this, String * version, String * encoding, String * standalone, XmlDocument * doc));
IL2CPP_REGISTER_METHODINFO(0x04741538, XmlDeclaration__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Version, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Version, (XmlDeclaration * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Encoding, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x0196B800, void, set_Encoding, (XmlDeclaration * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Standalone, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x0196B8B0, void, set_Standalone, (XmlDeclaration * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470DD40, XmlDeclaration_set_Standalone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0195B1F0, String *, get_Value, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x0195B210, void, set_Value, (XmlDeclaration * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0196BA30, String *, get_InnerText, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x0196BC70, void, set_InnerText, (XmlDeclaration * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477AC20, XmlDeclaration_set_InnerText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0196BE20, String *, get_Name, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, String *, get_LocalName, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x007EC3F0, XmlNodeType__Enum, get_NodeType, (XmlDeclaration * __this));
IL2CPP_REGISTER_METHOD(0x0196BEA0, XmlNode *, CloneNode, (XmlDeclaration * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x0196BEF0, void, WriteTo, (XmlDeclaration * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlDeclaration * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x0196BF60, bool, IsValidXmlVersion, (XmlDeclaration * __this, String * ver));
}
