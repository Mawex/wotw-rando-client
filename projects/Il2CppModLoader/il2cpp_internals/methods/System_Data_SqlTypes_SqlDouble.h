#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlDouble {
IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor_1, (app::SqlDouble__Boxed * this_ptr, bool f_null));
IL2CPP_REGISTER_METHOD(0x001E3B80, void, __ctor_2, (app::SqlDouble__Boxed * this_ptr, double value));
IL2CPP_REGISTER_METHODINFO(0x04756768, SqlDouble__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E3B90, double, get_Value, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047705E8, SqlDouble_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE0B0, SqlDouble, operator__1, (double x));
IL2CPP_REGISTER_METHOD(0x001E3BA0, String *, ToString, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x022AE0D0, SqlDouble, operator___1, (app::SqlDouble x));
IL2CPP_REGISTER_METHOD(0x022AE1D0, SqlDouble, operator___2, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x047805C0, SqlDouble_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE350, SqlDouble, operator___3, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0472BA38, SqlDouble_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE4D0, SqlDouble, operator___4, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0474DAE0, SqlDouble_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE650, SqlDouble, operator___5, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0475EEA0, SqlDouble_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE820, SqlDouble, operator__2, (app::SqlByte x));
IL2CPP_REGISTER_METHOD(0x022AE970, SqlDouble, operator__3, (app::SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022AEAC0, SqlDouble, operator__4, (app::SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022AEC00, SqlDouble, operator__5, (app::SqlInt64 x));
IL2CPP_REGISTER_METHOD(0x022AED00, SqlDouble, operator__6, (app::SqlSingle x));
IL2CPP_REGISTER_METHOD(0x022AEE40, SqlDouble, operator__7, (app::SqlMoney x));
IL2CPP_REGISTER_METHOD(0x022AEF40, SqlDouble, operator__8, (app::SqlDecimal x));
IL2CPP_REGISTER_METHOD(0x022AF040, SqlBoolean, operator___, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF120, SqlBoolean, operator___6, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF200, SqlBoolean, operator___7, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF2E0, SqlBoolean, LessThan, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF450, SqlBoolean, GreaterThan, (app::SqlDouble x, app::SqlDouble y));
IL2CPP_REGISTER_METHOD(0x001E3BF0, SqlSingle, ToSqlSingle, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E3C00, int32_t, CompareTo_1, (app::SqlDouble__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473A5F8, SqlDouble_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E3D50, int32_t, CompareTo_2, (app::SqlDouble__Boxed * this_ptr, app::SqlDouble value));
IL2CPP_REGISTER_METHOD(0x001E3D70, bool, Equals, (app::SqlDouble__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x001E3D80, int32_t, GetHashCode, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (app::SqlDouble__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E3DC0, void, IXmlSerializable_ReadXml, (app::SqlDouble__Boxed * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E3F20, void, IXmlSerializable_WriteXml, (app::SqlDouble__Boxed * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022AFC10, XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
IL2CPP_REGISTER_METHOD(0x022AFD60, void, __cctor, ());
}
