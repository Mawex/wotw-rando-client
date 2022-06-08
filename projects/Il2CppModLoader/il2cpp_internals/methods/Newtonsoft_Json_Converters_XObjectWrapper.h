using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::XObjectWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XObjectWrapper * __this, XObject * xmlObject));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_WrappedNode, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01717030, XmlNodeType__Enum, get_NodeType, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_LocalName, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59BD0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59C70, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IXmlNode *, get_ParentNode, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Value, (XObjectWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A59D10, IXmlNode *, AppendChild, (XObjectWrapper * __this, IXmlNode * newChild));
IL2CPP_REGISTER_METHODINFO(0x04709F30, XObjectWrapper_AppendChild__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_NamespaceUri, (XObjectWrapper * __this));
}
