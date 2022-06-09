#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlInt64 {
IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor_1, (app::SqlInt64__Boxed * this_ptr, bool f_null));
IL2CPP_REGISTER_METHOD(0x001E4F10, void, __ctor_2, (app::SqlInt64__Boxed * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E4F20, int64_t, get_Value, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471DBC0, SqlInt64_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B3C70, SqlInt64, operator__1, (int64_t x));
IL2CPP_REGISTER_METHOD(0x001E4F30, String *, ToString, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x022B3C80, SqlInt64, operator___1, (app::SqlInt64 x));
IL2CPP_REGISTER_METHOD(0x022B3D80, SqlInt64, operator___2, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04716380, SqlInt64_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B3F40, SqlInt64, operator___3, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04744BB0, SqlInt64_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4100, SqlInt64, operator___4, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04738168, SqlInt64_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4400, SqlInt64, operator___5, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04701A30, SqlInt64_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B45C0, SqlInt64, operator___6, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04764058, SqlInt64_op_Modulus__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4780, SqlInt64, operator__2, (app::SqlByte x));
IL2CPP_REGISTER_METHOD(0x022B48C0, SqlInt64, operator__3, (app::SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022B4A00, SqlInt64, operator__4, (app::SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022B4B40, SqlInt64, operator__5, (app::SqlDecimal x));
IL2CPP_REGISTER_METHODINFO(0x0477DE48, SqlInt64_op_Explicit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4D90, bool, SameSignLong, (int64_t x, int64_t y));
IL2CPP_REGISTER_METHOD(0x022B4DB0, SqlBoolean, operator___, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B4EA0, SqlBoolean, operator___7, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B4F90, SqlBoolean, operator___8, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B5080, SqlBoolean, LessThan, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B5140, SqlBoolean, GreaterThan, (app::SqlInt64 x, app::SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x001E4F70, SqlByte, ToSqlByte, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E4F80, SqlDouble, ToSqlDouble, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E4FB0, SqlInt16, ToSqlInt16, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E4FC0, SqlInt32, ToSqlInt32, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E4FD0, SqlDecimal, ToSqlDecimal, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E5000, int32_t, CompareTo_1, (app::SqlInt64__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04768E18, SqlInt64_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E5150, int32_t, CompareTo_2, (app::SqlInt64__Boxed * this_ptr, app::SqlInt64 value));
IL2CPP_REGISTER_METHOD(0x001E5170, bool, Equals, (app::SqlInt64__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x001E5180, int32_t, GetHashCode, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (app::SqlInt64__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E51B0, void, IXmlSerializable_ReadXml, (app::SqlInt64__Boxed * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E5330, void, IXmlSerializable_WriteXml, (app::SqlInt64__Boxed * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B5DF0, XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
IL2CPP_REGISTER_METHOD(0x022B5F40, void, __cctor, ());
}
