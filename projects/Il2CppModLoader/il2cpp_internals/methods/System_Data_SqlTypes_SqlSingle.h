#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlSingle {
    IL2CPP_REGISTER_METHOD(0x001E49E0, void, __ctor_1, (app::SqlSingle__Boxed * this_ptr, bool f_null));
    IL2CPP_REGISTER_METHOD(0x001E5B40, void, __ctor_2, (app::SqlSingle__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHODINFO(0x04770CB8, SqlSingle__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E5B50, void, __ctor_3, (app::SqlSingle__Boxed * this_ptr, double value));
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5B60, float, get_Value, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477DDE8, SqlSingle_get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B8640, app::SqlSingle, operator__1, (float x));
    IL2CPP_REGISTER_METHOD(0x001E5B70, app::String *, ToString, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022B8670, app::SqlSingle, operator___1, (app::SqlSingle x));
    IL2CPP_REGISTER_METHOD(0x022B8760, app::SqlSingle, operator___2, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHODINFO(0x04750D80, SqlSingle_op_Addition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B88B0, app::SqlSingle, operator___3, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHODINFO(0x0471AB80, SqlSingle_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B8A00, app::SqlSingle, operator___4, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHODINFO(0x04717488, SqlSingle_op_Multiply__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B8B50, app::SqlSingle, operator___5, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHODINFO(0x04731F08, SqlSingle_op_Division__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B8CF0, app::SqlSingle, operator__2, (app::SqlByte x));
    IL2CPP_REGISTER_METHOD(0x022B8E30, app::SqlSingle, operator__3, (app::SqlInt16 x));
    IL2CPP_REGISTER_METHOD(0x022B8F70, app::SqlSingle, operator__4, (app::SqlInt32 x));
    IL2CPP_REGISTER_METHOD(0x022B90B0, app::SqlSingle, operator__5, (app::SqlInt64 x));
    IL2CPP_REGISTER_METHOD(0x022B9190, app::SqlSingle, operator__6, (app::SqlMoney x));
    IL2CPP_REGISTER_METHOD(0x022B9270, app::SqlSingle, operator__7, (app::SqlDecimal x));
    IL2CPP_REGISTER_METHOD(0x022B9360, app::SqlSingle, operator__8, (app::SqlDouble x));
    IL2CPP_REGISTER_METHOD(0x022B9440, app::SqlBoolean, operator___, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHOD(0x022B9530, app::SqlBoolean, operator___6, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHOD(0x022B9610, app::SqlBoolean, operator___7, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHOD(0x022B96F0, app::SqlBoolean, LessThan, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHOD(0x022B97A0, app::SqlBoolean, GreaterThan, (app::SqlSingle x, app::SqlSingle y));
    IL2CPP_REGISTER_METHOD(0x001E5BC0, app::SqlDouble, ToSqlDouble, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5BF0, int32_t, CompareTo_1, (app::SqlSingle__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0475BD48, SqlSingle_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E5D30, int32_t, CompareTo_2, (app::SqlSingle__Boxed * this_ptr, app::SqlSingle value));
    IL2CPP_REGISTER_METHOD(0x001E5D40, bool, Equals, (app::SqlSingle__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x001E5D50, int32_t, GetHashCode, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlSingle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5D90, void, IXmlSerializable_ReadXml, (app::SqlSingle__Boxed * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x001E5EF0, void, IXmlSerializable_WriteXml, (app::SqlSingle__Boxed * this_ptr, app::XmlWriter * writer));
    IL2CPP_REGISTER_METHOD(0x022B9CA0, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
    IL2CPP_REGISTER_METHOD(0x022B9DF0, void, __cctor, ());
}
