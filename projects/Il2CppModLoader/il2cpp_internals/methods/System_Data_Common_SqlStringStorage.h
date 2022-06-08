#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlStringStorage {
IL2CPP_REGISTER_METHOD(0x0285FDF0, void, __ctor, (SqlStringStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0285FF80, Object *, Aggregate, (SqlStringStorage * __this, Int32__Array * recordNos, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04743A68, SqlStringStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02860370, int32_t, Compare, (SqlStringStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028604C0, int32_t, Compare, (SqlStringStorage * __this, SqlString valueNo1, SqlString valueNo2));
IL2CPP_REGISTER_METHOD(0x02860550, int32_t, CompareValueTo, (SqlStringStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x028606E0, Object *, ConvertValue, (SqlStringStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x028607B0, void, Copy, (SqlStringStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02860830, Object *, Get, (SqlStringStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02860900, int32_t, GetStringLength, (SqlStringStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x028609E0, bool, IsNull, (SqlStringStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02860A20, void, Set, (SqlStringStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02860A90, void, SetCapacity, (SqlStringStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02860B90, Object *, ConvertXmlToObject, (SqlStringStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02860F00, String *, ConvertObjectToXml, (SqlStringStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02861260, Object *, GetEmptyStorage, (SqlStringStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x028612E0, void, CopyValue, (SqlStringStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02861490, void, SetStorage, (SqlStringStorage * __this, Object * store, BitArray * nullbits));
}
