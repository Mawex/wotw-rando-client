#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Converters::XObjectWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XObjectWrapper * this_ptr, app::XObject * xml_object));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_WrappedNode, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01717030, XmlNodeType__Enum, get_NodeType, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_LocalName, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59BD0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59C70, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, IXmlNode *, get_ParentNode, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Value, (app::XObjectWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59D10, IXmlNode *, AppendChild, (app::XObjectWrapper * this_ptr, app::IXmlNode * new_child));
IL2CPP_REGISTER_METHODINFO(0x04709F30, XObjectWrapper_AppendChild__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_NamespaceUri, (app::XObjectWrapper * this_ptr));
}
