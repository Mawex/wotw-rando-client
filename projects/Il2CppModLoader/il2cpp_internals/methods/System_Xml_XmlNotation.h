#include <interception_macros.h>

namespace app::methods::System::Xml::XmlNotation {
IL2CPP_REGISTER_METHOD(0x016FEF80, void, __ctor, (XmlNotation * __this, String * name, String * publicId, String * systemId, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (XmlNotation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_LocalName, (XmlNotation * __this));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, XmlNodeType__Enum, get_NodeType, (XmlNotation * __this));
IL2CPP_REGISTER_METHOD(0x016FF020, XmlNode *, CloneNode, (XmlNotation * __this, bool deep));
IL2CPP_REGISTER_METHODINFO(0x0474DDC8, XmlNotation_CloneNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (XmlNotation * __this));
IL2CPP_REGISTER_METHOD(0x016FF090, void, set_InnerXml, (XmlNotation * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0478E188, XmlNotation_set_InnerXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteTo, (XmlNotation * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlNotation * __this, XmlWriter * w));
}
