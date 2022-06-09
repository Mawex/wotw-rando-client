#include <interception_macros.h>

namespace app::methods::System_Data_Common::SqlConvert {
IL2CPP_REGISTER_METHOD(0x028489B0, SqlByte, ConvertToSqlByte, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047479C0, SqlConvert_ConvertToSqlByte__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02848BC0, SqlInt16, ConvertToSqlInt16, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047894D0, SqlConvert_ConvertToSqlInt16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02848FC0, SqlInt32, ConvertToSqlInt32, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04739858, SqlConvert_ConvertToSqlInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028495C0, SqlInt64, ConvertToSqlInt64, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047441E8, SqlConvert_ConvertToSqlInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02849B10, SqlDouble, ConvertToSqlDouble, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0471D1B0, SqlConvert_ConvertToSqlDouble__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284A330, SqlDecimal, ConvertToSqlDecimal, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047517E8, SqlConvert_ConvertToSqlDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284AD60, SqlSingle, ConvertToSqlSingle, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0478DDE0, SqlConvert_ConvertToSqlSingle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284B920, SqlMoney, ConvertToSqlMoney, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04730F80, SqlConvert_ConvertToSqlMoney__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284C380, SqlDateTime, ConvertToSqlDateTime, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04744200, SqlConvert_ConvertToSqlDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284C5C0, SqlBoolean, ConvertToSqlBoolean, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04704CC0, SqlConvert_ConvertToSqlBoolean__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284C7C0, SqlGuid, ConvertToSqlGuid, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04753F90, SqlConvert_ConvertToSqlGuid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284C9D0, SqlBinary, ConvertToSqlBinary, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047014C8, SqlConvert_ConvertToSqlBinary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284CC00, SqlString, ConvertToSqlString, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04731858, SqlConvert_ConvertToSqlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284CE40, SqlChars *, ConvertToSqlChars, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474D548, SqlConvert_ConvertToSqlChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284CFC0, SqlBytes *, ConvertToSqlBytes, (app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047554D8, SqlConvert_ConvertToSqlBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284D140, DateTimeOffset, ConvertStringToDateTimeOffset, (app::String * value, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x0284D210, Object *, ChangeTypeForDefaultValue, (app::Object * value, app::Type * type, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x0284D410, Object *, ChangeType2, (app::Object * value, app::StorageType__Enum stype, app::Type * type, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHODINFO(0x04780878, SqlConvert_ChangeType2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0284E9E0, Object *, ChangeTypeForXML, (app::Object * value, app::Type * type));
}
