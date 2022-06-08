#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlAttributeAttribute {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlAttributeAttribute * __this, String * attributeName));
IL2CPP_REGISTER_METHOD(0x01C9B110, String *, get_AttributeName, (XmlAttributeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01C9B1A0, String *, get_DataType, (XmlAttributeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DataType, (XmlAttributeAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB970, XmlSchemaForm__Enum, get_Form, (XmlAttributeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Namespace, (XmlAttributeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01C9B230, void, AddKeyHash, (XmlAttributeAttribute * __this, StringBuilder * sb));
}
