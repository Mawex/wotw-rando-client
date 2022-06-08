#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlByteStorage {
IL2CPP_REGISTER_METHOD(0x02844A10, void, __ctor, (SqlByteStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02844BA0, Object *, Aggregate, (SqlByteStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0476BE20, SqlByteStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02845910, int32_t, Compare, (SqlByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02845970, int32_t, CompareValueTo, (SqlByteStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02845A60, Object *, ConvertValue, (SqlByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02845B20, void, Copy, (SqlByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02845B90, Object *, Get, (SqlByteStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02845C50, bool, IsNull, (SqlByteStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02845C90, void, Set, (SqlByteStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02845CE0, void, SetCapacity, (SqlByteStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02845DE0, Object *, ConvertXmlToObject, (SqlByteStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02846130, String *, ConvertObjectToXml, (SqlByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02846490, Object *, GetEmptyStorage, (SqlByteStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02846510, void, CopyValue, (SqlByteStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02846690, void, SetStorage, (SqlByteStorage * __this, Object * store, BitArray * nullbits));
}
