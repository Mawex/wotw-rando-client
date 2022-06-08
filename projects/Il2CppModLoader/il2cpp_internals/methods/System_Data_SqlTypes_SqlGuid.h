using namespace app;

namespace app::methods::System::Data::SqlTypes::SqlGuid {
IL2CPP_REGISTER_METHOD(0x00120B90, void, __ctor, (SqlGuid__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E4080, void, __ctor, (SqlGuid__Boxed * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0472C9F8, SqlGuid__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E4090, void, __ctor, (SqlGuid__Boxed * __this, Guid g));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (SqlGuid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E40C0, Guid, get_Value, (SqlGuid__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B298, SqlGuid_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B00A0, SqlGuid, operator_, (Guid x));
IL2CPP_REGISTER_METHOD(0x001E40F0, String *, ToString, (SqlGuid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022B00C0, EComparison__Enum, Compare, (SqlGuid x, SqlGuid y));
IL2CPP_REGISTER_METHOD(0x022B0260, SqlGuid, operator_, (SqlBinary x));
IL2CPP_REGISTER_METHOD(0x022B0350, SqlBoolean, operator___, (SqlGuid x, SqlGuid y));
IL2CPP_REGISTER_METHOD(0x022B0450, SqlBoolean, operator__, (SqlGuid x, SqlGuid y));
IL2CPP_REGISTER_METHOD(0x022B0550, SqlBoolean, operator__, (SqlGuid x, SqlGuid y));
IL2CPP_REGISTER_METHOD(0x001E41A0, int32_t, CompareTo, (SqlGuid__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04788C10, SqlGuid_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E41B0, int32_t, CompareTo, (SqlGuid__Boxed * __this, SqlGuid value));
IL2CPP_REGISTER_METHOD(0x001E41C0, bool, Equals, (SqlGuid__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E41D0, int32_t, GetHashCode, (SqlGuid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlGuid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E42E0, void, IXmlSerializable_ReadXml, (SqlGuid__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E4430, void, IXmlSerializable_WriteXml, (SqlGuid__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B0E20, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022B0F70, void, __cctor, (MethodInfo * method));
}
