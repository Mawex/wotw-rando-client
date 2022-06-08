#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlDoubleStorage {
IL2CPP_REGISTER_METHOD(0x02853D30, void, __ctor, (SqlDoubleStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02853EB0, Object *, Aggregate, (SqlDoubleStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047266B8, SqlDoubleStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02854BC0, int32_t, Compare, (SqlDoubleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02854C40, int32_t, CompareValueTo, (SqlDoubleStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02854D40, Object *, ConvertValue, (SqlDoubleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, (SqlDoubleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02854E70, Object *, Get, (SqlDoubleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, (SqlDoubleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02854F90, void, Set, (SqlDoubleStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02855000, void, SetCapacity, (SqlDoubleStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02855100, Object *, ConvertXmlToObject, (SqlDoubleStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02855450, String *, ConvertObjectToXml, (SqlDoubleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x028557B0, Object *, GetEmptyStorage, (SqlDoubleStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02855830, void, CopyValue, (SqlDoubleStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x028559D0, void, SetStorage, (SqlDoubleStorage * __this, Object * store, BitArray * nullbits));
}
