#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlDateTime {
IL2CPP_REGISTER_METHOD(0x001D6C50, void, __ctor, (SqlDateTime__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001D6C60, void, __ctor, (SqlDateTime__Boxed * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x001D6C70, void, __ctor, (SqlDateTime__Boxed * __this, int32_t dayTicks, int32_t timeTicks));
IL2CPP_REGISTER_METHODINFO(0x04701AE0, SqlDateTime__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E534D0, TimeSpan, ToTimeSpan, (SqlDateTime value));
IL2CPP_REGISTER_METHOD(0x01E535C0, DateTime, ToDateTime, (SqlDateTime value));
IL2CPP_REGISTER_METHOD(0x01E53750, SqlDateTime, FromTimeSpan, (TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x047469C8, SqlDateTime_FromTimeSpan__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E53990, SqlDateTime, FromDateTime, (DateTime value));
IL2CPP_REGISTER_METHOD(0x001D6C80, DateTime, get_Value, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04705DA8, SqlDateTime_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D6C90, int32_t, get_DayTicks, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04776210, SqlDateTime_get_DayTicks__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D6CA0, int32_t, get_TimeTicks, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04753480, SqlDateTime_get_TimeTicks__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E53D40, SqlDateTime, operator_, (DateTime value));
IL2CPP_REGISTER_METHOD(0x001D6CB0, String *, ToString, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01E53D60, SqlBoolean, operator___, (SqlDateTime x, SqlDateTime y));
IL2CPP_REGISTER_METHOD(0x01E53E70, SqlBoolean, operator__, (SqlDateTime x, SqlDateTime y));
IL2CPP_REGISTER_METHOD(0x01E53FC0, SqlBoolean, operator__, (SqlDateTime x, SqlDateTime y));
IL2CPP_REGISTER_METHOD(0x01E54110, SqlBoolean, LessThan, (SqlDateTime x, SqlDateTime y));
IL2CPP_REGISTER_METHOD(0x01E541F0, SqlBoolean, GreaterThan, (SqlDateTime x, SqlDateTime y));
IL2CPP_REGISTER_METHOD(0x001D6D90, int32_t, CompareTo, (SqlDateTime__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04771468, SqlDateTime_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D6EE0, int32_t, CompareTo, (SqlDateTime__Boxed * __this, SqlDateTime value));
IL2CPP_REGISTER_METHOD(0x001D6F10, bool, Equals, (SqlDateTime__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001D6F20, int32_t, GetHashCode, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D6F60, void, IXmlSerializable_ReadXml, (SqlDateTime__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04797038, SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D6F70, void, IXmlSerializable_WriteXml, (SqlDateTime__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E54BF0, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E54D40, void, __cctor, ());
}
