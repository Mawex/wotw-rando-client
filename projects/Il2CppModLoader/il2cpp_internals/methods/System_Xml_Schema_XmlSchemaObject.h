using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaObject {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_LineNumber, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_LineNumber, (XmlSchemaObject * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_LinePosition, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_LinePosition, (XmlSchemaObject * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_SourceUri, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SourceUri, (XmlSchemaObject * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaObject *, get_Parent, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Parent, (XmlSchemaObject * __this, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x01CB6620, XmlSerializerNamespaces *, get_Namespaces, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Namespaces, (XmlSchemaObject * __this, XmlSerializerNamespaces * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAdd, (XmlSchemaObject * __this, XmlSchemaObjectCollection * container, Object * item));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemove, (XmlSchemaObject * __this, XmlSchemaObjectCollection * container, Object * item));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClear, (XmlSchemaObject * __this, XmlSchemaObjectCollection * container));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_IdAttribute, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IdAttribute, (XmlSchemaObject * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetUnhandledAttributes, (XmlSchemaObject * __this, XmlAttribute__Array * moreAttributes));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAnnotation, (XmlSchemaObject * __this, XmlSchemaAnnotation * annotation));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_NameAttribute, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_NameAttribute, (XmlSchemaObject * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsProcessing, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsProcessing, (XmlSchemaObject * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01CB6770, XmlSchemaObject *, Clone, (XmlSchemaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlSchemaObject * __this));
}
