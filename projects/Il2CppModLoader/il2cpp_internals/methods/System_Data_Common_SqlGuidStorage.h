using namespace app;

namespace app::methods::System::Data::Common::SqlGuidStorage {
IL2CPP_REGISTER_METHOD(0x02855A90, void, __ctor, (SqlGuidStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02855C20, Object *, Aggregate, (SqlGuidStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04771800, SqlGuidStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02855E30, int32_t, Compare, (SqlGuidStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02855E90, int32_t, CompareValueTo, (SqlGuidStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02855F80, Object *, ConvertValue, (SqlGuidStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (SqlGuidStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02856040, Object *, Get, (SqlGuidStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (SqlGuidStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02856100, void, Set, (SqlGuidStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02856150, void, SetCapacity, (SqlGuidStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02856250, Object *, ConvertXmlToObject, (SqlGuidStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x028565A0, String *, ConvertObjectToXml, (SqlGuidStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02856900, Object *, GetEmptyStorage, (SqlGuidStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02856980, void, CopyValue, (SqlGuidStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02856B00, void, SetStorage, (SqlGuidStorage * __this, Object * store, BitArray * nullbits));
}
