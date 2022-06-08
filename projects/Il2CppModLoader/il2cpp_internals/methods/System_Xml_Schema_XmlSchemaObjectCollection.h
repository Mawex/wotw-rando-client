using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaObjectCollection {
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (XmlSchemaObjectCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CB68C0, XmlSchemaObject *, get_Item, (XmlSchemaObjectCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01CB69B0, void, set_Item, (XmlSchemaObjectCollection * __this, int32_t index, XmlSchemaObject * value));
IL2CPP_REGISTER_METHOD(0x01CB6A60, XmlSchemaObjectEnumerator *, GetEnumerator, (XmlSchemaObjectCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CB6BD0, int32_t, Add, (XmlSchemaObjectCollection * __this, XmlSchemaObject * item));
IL2CPP_REGISTER_METHOD(0x01CB6C70, void, Insert, (XmlSchemaObjectCollection * __this, int32_t index, XmlSchemaObject * item));
IL2CPP_REGISTER_METHOD(0x01CB6D20, void, Remove, (XmlSchemaObjectCollection * __this, XmlSchemaObject * item));
IL2CPP_REGISTER_METHOD(0x01CB6DC0, void, OnInsert, (XmlSchemaObjectCollection * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x01CB6DE0, void, OnSet, (XmlSchemaObjectCollection * __this, int32_t index, Object * oldValue, Object * newValue));
IL2CPP_REGISTER_METHOD(0x01CB6E40, void, OnClear, (XmlSchemaObjectCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CB6E60, void, OnRemove, (XmlSchemaObjectCollection * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x01CB6E80, XmlSchemaObjectCollection *, Clone, (XmlSchemaObjectCollection * __this));
IL2CPP_REGISTER_METHOD(0x01CB7000, void, Add, (XmlSchemaObjectCollection * __this, XmlSchemaObjectCollection * collToAdd));
}
