using namespace app;

namespace app::methods::System::Xml::Schema::TypedObject {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Dim, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsList, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x01ABCC10, bool, get_IsDecimal, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x004173F0, Decimal__Array *, get_Dvalue, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_Value, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaDatatype *, get_Type, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x01ABCC30, void, __ctor, (TypedObject * __this, Object * obj, String * svalue, XmlSchemaDatatype * xsdtype));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, ToString, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x01ABCE30, void, SetDecimal, (TypedObject * __this));
IL2CPP_REGISTER_METHOD(0x01ABD3C0, bool, ListDValueEquals, (TypedObject * __this, TypedObject * other));
IL2CPP_REGISTER_METHOD(0x01ABD570, bool, Equals, (TypedObject * __this, TypedObject * other));
}
