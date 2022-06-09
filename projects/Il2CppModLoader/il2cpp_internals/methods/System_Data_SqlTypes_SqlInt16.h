#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlInt16 {
    IL2CPP_REGISTER_METHOD(0x001E4470, void, __ctor_1, (app::SqlInt16__Boxed * this_ptr, bool f_null));
    IL2CPP_REGISTER_METHOD(0x001E4480, void, __ctor_2, (app::SqlInt16__Boxed * this_ptr, int16_t value));
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E4490, int16_t, get_Value, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472C578, SqlInt16_get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B1100, app::SqlInt16, operator__1, (int16_t x));
    IL2CPP_REGISTER_METHOD(0x001E44A0, app::String *, ToString, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022B1120, app::SqlInt16, operator___1, (app::SqlInt16 x));
    IL2CPP_REGISTER_METHOD(0x022B1200, app::SqlInt16, operator___2, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHODINFO(0x04781548, SqlInt16_op_Addition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B1330, app::SqlInt16, operator___3, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHODINFO(0x04783600, SqlInt16_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B1460, app::SqlInt16, operator___4, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHODINFO(0x04711930, SqlInt16_op_Multiply__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B15F0, app::SqlInt16, operator___5, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHODINFO(0x0474B8B8, SqlInt16_op_Division__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B1770, app::SqlInt16, operator__2, (app::SqlByte x));
    IL2CPP_REGISTER_METHOD(0x022B18A0, app::SqlInt16, operator__3, (app::SqlInt64 x));
    IL2CPP_REGISTER_METHODINFO(0x04785480, SqlInt16_op_Explicit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B19C0, app::SqlBoolean, operator___, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHOD(0x022B1A90, app::SqlBoolean, operator___6, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHOD(0x022B1B60, app::SqlBoolean, operator___7, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHOD(0x022B1C30, app::SqlBoolean, LessThan, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHOD(0x022B1CE0, app::SqlBoolean, GreaterThan, (app::SqlInt16 x, app::SqlInt16 y));
    IL2CPP_REGISTER_METHOD(0x001E44E0, app::SqlDouble, ToSqlDouble, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E4510, app::SqlInt64, ToSqlInt64, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E4540, int32_t, CompareTo_1, (app::SqlInt16__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047251F0, SqlInt16_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E4680, int32_t, CompareTo_2, (app::SqlInt16__Boxed * this_ptr, app::SqlInt16 value));
    IL2CPP_REGISTER_METHOD(0x001E4690, bool, Equals, (app::SqlInt16__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x001E46A0, int32_t, GetHashCode, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlInt16__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E46D0, void, IXmlSerializable_ReadXml, (app::SqlInt16__Boxed * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x001E4850, void, IXmlSerializable_WriteXml, (app::SqlInt16__Boxed * this_ptr, app::XmlWriter * writer));
    IL2CPP_REGISTER_METHOD(0x022B2260, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
    IL2CPP_REGISTER_METHOD(0x022B23B0, void, __cctor, ());
}
