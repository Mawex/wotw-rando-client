using namespace app;

namespace app::methods::System::Data::SqlTypes::SqlByte {
IL2CPP_REGISTER_METHOD(0x001D66C0, void, __ctor, (SqlByte__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001D66D0, void, __ctor, (SqlByte__Boxed * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D66E0, uint8_t, get_Value, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04712F70, SqlByte_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E50760, SqlByte, operator_, (uint8_t x));
IL2CPP_REGISTER_METHOD(0x001D66F0, String *, ToString, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E50770, SqlByte, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHODINFO(0x0473DED0, SqlByte_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E508C0, SqlByte, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHODINFO(0x04715030, SqlByte_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E50A10, SqlByte, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHODINFO(0x0472AE70, SqlByte_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E50B60, SqlByte, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHODINFO(0x047680F0, SqlByte_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E50C80, SqlByte, operator_, (SqlInt64 x));
IL2CPP_REGISTER_METHODINFO(0x047950A8, SqlByte_op_Explicit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E50DB0, SqlBoolean, operator___, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHOD(0x01E50E90, SqlBoolean, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHOD(0x01E50F70, SqlBoolean, operator__, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHOD(0x01E51050, SqlBoolean, LessThan, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHOD(0x01E51100, SqlBoolean, GreaterThan, (SqlByte x, SqlByte y));
IL2CPP_REGISTER_METHOD(0x001D6730, SqlDouble, ToSqlDouble, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6760, SqlInt64, ToSqlInt64, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6790, int32_t, CompareTo, (SqlByte__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04727740, SqlByte_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D68D0, int32_t, CompareTo, (SqlByte__Boxed * __this, SqlByte value));
IL2CPP_REGISTER_METHOD(0x001D68E0, bool, Equals, (SqlByte__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001D68F0, int32_t, GetHashCode, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlByte__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6920, void, IXmlSerializable_ReadXml, (SqlByte__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001D6AA0, void, IXmlSerializable_WriteXml, (SqlByte__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E516A0, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E517F0, void, __cctor, (MethodInfo * method));
}
