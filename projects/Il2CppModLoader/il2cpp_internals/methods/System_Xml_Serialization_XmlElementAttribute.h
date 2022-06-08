using namespace app;

namespace app::methods::System::Xml::Serialization::XmlElementAttribute {
IL2CPP_REGISTER_METHOD(0x025A1A00, void, __ctor, (XmlElementAttribute * __this, String * elementName));
IL2CPP_REGISTER_METHOD(0x025A1A10, void, __ctor, (XmlElementAttribute * __this, String * elementName, Type * type));
IL2CPP_REGISTER_METHOD(0x025A1A20, String *, get_DataType, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x025A1AB0, String *, get_ElementName, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, XmlSchemaForm__Enum, get_Form, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Namespace, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsNullable, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Order, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Type *, get_Type, (XmlElementAttribute * __this));
IL2CPP_REGISTER_METHOD(0x025A1B40, void, AddKeyHash, (XmlElementAttribute * __this, StringBuilder * sb));
}
