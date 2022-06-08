using namespace app;

namespace app::methods::System::Data::Common::SqlSingleStorage {
IL2CPP_REGISTER_METHOD(0x0285E1B0, void, __ctor, (SqlSingleStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0285E330, Object *, Aggregate, (SqlSingleStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0475EEC8, SqlSingleStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0285F060, int32_t, Compare, (SqlSingleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285F0C0, int32_t, CompareValueTo, (SqlSingleStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0285F1B0, Object *, ConvertValue, (SqlSingleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (SqlSingleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285F270, Object *, Get, (SqlSingleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02859AB0, bool, IsNull, (SqlSingleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0285F330, void, Set, (SqlSingleStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x0285F380, void, SetCapacity, (SqlSingleStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0285F480, Object *, ConvertXmlToObject, (SqlSingleStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0285F7D0, String *, ConvertObjectToXml, (SqlSingleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0285FB30, Object *, GetEmptyStorage, (SqlSingleStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0285FBB0, void, CopyValue, (SqlSingleStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0285FD30, void, SetStorage, (SqlSingleStorage * __this, Object * store, BitArray * nullbits));
}
