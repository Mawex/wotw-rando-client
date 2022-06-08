#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlDateTimeStorage {
IL2CPP_REGISTER_METHOD(0x028507E0, void, __ctor, (SqlDateTimeStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02850980, Object *, Aggregate, (SqlDateTimeStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0475C548, SqlDateTimeStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02850F20, int32_t, Compare, (SqlDateTimeStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02850FA0, int32_t, CompareValueTo, (SqlDateTimeStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x028510A0, Object *, ConvertValue, (SqlDateTimeStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02851170, void, Copy, (SqlDateTimeStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028511F0, Object *, Get, (SqlDateTimeStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x028512C0, bool, IsNull, (SqlDateTimeStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02851300, void, Set, (SqlDateTimeStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02851370, void, SetCapacity, (SqlDateTimeStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02851470, Object *, ConvertXmlToObject, (SqlDateTimeStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x028517C0, String *, ConvertObjectToXml, (SqlDateTimeStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02851B20, Object *, GetEmptyStorage, (SqlDateTimeStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02851BA0, void, CopyValue, (SqlDateTimeStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02851D40, void, SetStorage, (SqlDateTimeStorage * __this, Object * store, BitArray * nullbits));
}
