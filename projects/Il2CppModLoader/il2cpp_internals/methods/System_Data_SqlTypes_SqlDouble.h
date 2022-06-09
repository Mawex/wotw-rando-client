#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlDouble {
    IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor_1, (app::SqlDouble__Boxed * this_ptr, bool f_null));
    IL2CPP_REGISTER_METHOD(0x001E3B80, void, __ctor_2, (app::SqlDouble__Boxed * this_ptr, double value));
    IL2CPP_REGISTER_METHODINFO(0x04756768, SqlDouble__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E3B90, double, get_Value, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047705E8, SqlDouble_get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022AE0B0, app::SqlDouble, operator__1, (double x));
    IL2CPP_REGISTER_METHOD(0x001E3BA0, app::String *, ToString, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022AE0D0, app::SqlDouble, operator___1, (app::SqlDouble x));
    IL2CPP_REGISTER_METHOD(0x022AE1D0, app::SqlDouble, operator___2, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHODINFO(0x047805C0, SqlDouble_op_Addition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022AE350, app::SqlDouble, operator___3, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHODINFO(0x0472BA38, SqlDouble_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022AE4D0, app::SqlDouble, operator___4, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHODINFO(0x0474DAE0, SqlDouble_op_Multiply__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022AE650, app::SqlDouble, operator___5, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHODINFO(0x0475EEA0, SqlDouble_op_Division__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022AE820, app::SqlDouble, operator__2, (app::SqlByte x));
    IL2CPP_REGISTER_METHOD(0x022AE970, app::SqlDouble, operator__3, (app::SqlInt16 x));
    IL2CPP_REGISTER_METHOD(0x022AEAC0, app::SqlDouble, operator__4, (app::SqlInt32 x));
    IL2CPP_REGISTER_METHOD(0x022AEC00, app::SqlDouble, operator__5, (app::SqlInt64 x));
    IL2CPP_REGISTER_METHOD(0x022AED00, app::SqlDouble, operator__6, (app::SqlSingle x));
    IL2CPP_REGISTER_METHOD(0x022AEE40, app::SqlDouble, operator__7, (app::SqlMoney x));
    IL2CPP_REGISTER_METHOD(0x022AEF40, app::SqlDouble, operator__8, (app::SqlDecimal x));
    IL2CPP_REGISTER_METHOD(0x022AF040, app::SqlBoolean, operator___, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHOD(0x022AF120, app::SqlBoolean, operator___6, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHOD(0x022AF200, app::SqlBoolean, operator___7, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHOD(0x022AF2E0, app::SqlBoolean, LessThan, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHOD(0x022AF450, app::SqlBoolean, GreaterThan, (app::SqlDouble x, app::SqlDouble y));
    IL2CPP_REGISTER_METHOD(0x001E3BF0, app::SqlSingle, ToSqlSingle, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E3C00, int32_t, CompareTo_1, (app::SqlDouble__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0473A5F8, SqlDouble_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E3D50, int32_t, CompareTo_2, (app::SqlDouble__Boxed * this_ptr, app::SqlDouble value));
    IL2CPP_REGISTER_METHOD(0x001E3D70, bool, Equals, (app::SqlDouble__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x001E3D80, int32_t, GetHashCode, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlDouble__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E3DC0, void, IXmlSerializable_ReadXml, (app::SqlDouble__Boxed * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x001E3F20, void, IXmlSerializable_WriteXml, (app::SqlDouble__Boxed * this_ptr, app::XmlWriter * writer));
    IL2CPP_REGISTER_METHOD(0x022AFC10, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
    IL2CPP_REGISTER_METHOD(0x022AFD60, void, __cctor, ());
}
