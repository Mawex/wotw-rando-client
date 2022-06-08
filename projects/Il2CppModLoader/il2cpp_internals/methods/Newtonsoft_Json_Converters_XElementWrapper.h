#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::XElementWrapper {
IL2CPP_REGISTER_METHOD(0x01A58EF0, XElement *, get_Element, (XElementWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XElementWrapper * __this, XElement * element));
IL2CPP_REGISTER_METHOD(0x01A58FC0, void, SetAttributeNode, (XElementWrapper * __this, IXmlNode * attribute));
IL2CPP_REGISTER_METHOD(0x01A590E0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (XElementWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59740, bool, HasImplicitNamespaceAttribute, (XElementWrapper * __this, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x01A59A90, IXmlNode *, AppendChild, (XElementWrapper * __this, IXmlNode * newChild));
IL2CPP_REGISTER_METHOD(0x01A59AB0, String *, get_Value, (XElementWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59AE0, String *, get_LocalName, (XElementWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59B10, String *, get_NamespaceUri, (XElementWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59B50, String *, GetPrefixOfNamespace, (XElementWrapper * __this, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x01A59BA0, bool, get_IsEmpty, (XElementWrapper * __this));
}
