using namespace app;

namespace app::methods::System::Data::SqlTypes::SqlBinary {
IL2CPP_REGISTER_METHOD(0x00120B90, void, __ctor, (SqlBinary__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001D5C30, void, __ctor, (SqlBinary__Boxed * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D5C50, Byte__Array *, get_Value, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CCF8, SqlBinary_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D5C60, int32_t, get_Length, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DB38, SqlBinary_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4E990, SqlBinary, operator_, (Byte__Array * x));
IL2CPP_REGISTER_METHOD(0x001D5D10, String *, ToString, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E4EAA0, EComparison__Enum, PerformCompareByte, (Byte__Array * x, Byte__Array * y));
IL2CPP_REGISTER_METHOD(0x01E4EBD0, SqlBoolean, operator___, (SqlBinary x, SqlBinary y));
IL2CPP_REGISTER_METHOD(0x01E4ECF0, SqlBoolean, operator__, (SqlBinary x, SqlBinary y));
IL2CPP_REGISTER_METHOD(0x01E4EE10, SqlBoolean, operator__, (SqlBinary x, SqlBinary y));
IL2CPP_REGISTER_METHOD(0x001D5D20, SqlGuid, ToSqlGuid, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D5E90, int32_t, CompareTo, (SqlBinary__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04796120, SqlBinary_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D5FD0, int32_t, CompareTo, (SqlBinary__Boxed * __this, SqlBinary value));
IL2CPP_REGISTER_METHOD(0x001D5FE0, bool, Equals, (SqlBinary__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01E4F4A0, int32_t, HashByteArray, (Byte__Array * rgbValue, int32_t length));
IL2CPP_REGISTER_METHOD(0x001D5FF0, int32_t, GetHashCode, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlBinary__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6000, void, IXmlSerializable_ReadXml, (SqlBinary__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001D6010, void, IXmlSerializable_WriteXml, (SqlBinary__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E4F870, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E4F9C0, void, __cctor, (MethodInfo * method));
}
