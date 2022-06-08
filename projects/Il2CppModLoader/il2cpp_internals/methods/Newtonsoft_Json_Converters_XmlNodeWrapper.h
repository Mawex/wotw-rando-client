using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::XmlNodeWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlNodeWrapper * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_WrappedNode, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01717090, XmlNodeType__Enum, get_NodeType, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x017174B0, String *, get_LocalName, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A62E50, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A63270, IXmlNode *, WrapNode, (XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01A636C0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A63BB0, bool, get_HasAttributes, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A63CE0, IXmlNode *, get_ParentNode, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01717030, String *, get_Value, (XmlNodeWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A63DF0, void, set_Value, (XmlNodeWrapper * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01A63E20, IXmlNode *, AppendChild, (XmlNodeWrapper * __this, IXmlNode * newChild));
IL2CPP_REGISTER_METHOD(0x016FB480, String *, get_NamespaceUri, (XmlNodeWrapper * __this));
}
