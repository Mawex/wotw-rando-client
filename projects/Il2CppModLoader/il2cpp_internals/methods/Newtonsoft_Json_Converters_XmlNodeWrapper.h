#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Converters::XmlNodeWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XmlNodeWrapper * this_ptr, app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_WrappedNode, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01717090, XmlNodeType__Enum, get_NodeType, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x017174B0, String *, get_LocalName, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A62E50, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A63270, IXmlNode *, WrapNode, (app::XmlNode * node));
IL2CPP_REGISTER_METHOD(0x01A636C0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A63BB0, bool, get_HasAttributes, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A63CE0, IXmlNode *, get_ParentNode, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01717030, String *, get_Value, (app::XmlNodeWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A63DF0, void, set_Value, (app::XmlNodeWrapper * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01A63E20, IXmlNode *, AppendChild, (app::XmlNodeWrapper * this_ptr, app::IXmlNode * new_child));
IL2CPP_REGISTER_METHOD(0x016FB480, String *, get_NamespaceUri, (app::XmlNodeWrapper * this_ptr));
}
