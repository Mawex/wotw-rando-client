#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlBoolean {
IL2CPP_REGISTER_METHOD(0x001D6160, void, __ctor, (SqlBoolean__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x001D6170, void, __ctor, (SqlBoolean__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001D6180, void, __ctor, (SqlBoolean__Boxed * __this, int32_t value, bool fNull));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D61A0, bool, get_Value, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04790E20, SqlBoolean_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D61B0, bool, get_IsTrue, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D61C0, bool, get_IsFalse, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E4FB10, SqlBoolean, operator_, (bool x));
IL2CPP_REGISTER_METHOD(0x01E4FB20, bool, op_True, (SqlBoolean x));
IL2CPP_REGISTER_METHOD(0x01E4FB30, SqlBoolean, operator__, (SqlBoolean x, SqlBoolean y));
IL2CPP_REGISTER_METHOD(0x01E4FC80, SqlBoolean, operator__, (SqlBoolean x, SqlBoolean y));
IL2CPP_REGISTER_METHOD(0x001D61D0, uint8_t, get_ByteValue, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047694E8, SqlBoolean_get_ByteValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D61E0, String *, ToString, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E4FE80, SqlBoolean, operator___, (SqlBoolean x, SqlBoolean y));
IL2CPP_REGISTER_METHOD(0x01E4FF50, SqlBoolean, And, (SqlBoolean x, SqlBoolean y));
IL2CPP_REGISTER_METHOD(0x01E50120, SqlBoolean, Or, (SqlBoolean x, SqlBoolean y));
IL2CPP_REGISTER_METHOD(0x001D6280, int32_t, CompareTo, (SqlBoolean__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04793280, SqlBoolean_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D63C0, int32_t, CompareTo, (SqlBoolean__Boxed * __this, SqlBoolean value));
IL2CPP_REGISTER_METHOD(0x001D63D0, bool, Equals, (SqlBoolean__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001D63E0, int32_t, GetHashCode, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlBoolean__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6410, void, IXmlSerializable_ReadXml, (SqlBoolean__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001D6570, void, IXmlSerializable_WriteXml, (SqlBoolean__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E50490, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E505E0, void, __cctor, ());
}
