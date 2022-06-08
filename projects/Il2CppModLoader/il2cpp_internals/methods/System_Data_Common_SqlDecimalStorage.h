#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlDecimalStorage {
IL2CPP_REGISTER_METHOD(0x02851E00, void, __ctor, (SqlDecimalStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02851F90, Object *, Aggregate, (SqlDecimalStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04752CC8, SqlDecimalStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02852E30, int32_t, Compare, (SqlDecimalStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02852EB0, int32_t, CompareValueTo, (SqlDecimalStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02852FB0, Object *, ConvertValue, (SqlDecimalStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02853080, void, Copy, (SqlDecimalStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02853100, Object *, Get, (SqlDecimalStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x028531D0, bool, IsNull, (SqlDecimalStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02853220, void, Set, (SqlDecimalStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02853290, void, SetCapacity, (SqlDecimalStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02853390, Object *, ConvertXmlToObject, (SqlDecimalStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x028536F0, String *, ConvertObjectToXml, (SqlDecimalStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02853A50, Object *, GetEmptyStorage, (SqlDecimalStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02853AD0, void, CopyValue, (SqlDecimalStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02853C70, void, SetStorage, (SqlDecimalStorage * __this, Object * store, BitArray * nullbits));
}
