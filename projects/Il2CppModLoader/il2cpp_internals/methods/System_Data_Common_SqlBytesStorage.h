using namespace app;

namespace app::methods::System::Data::Common::SqlBytesStorage {
IL2CPP_REGISTER_METHOD(0x02846750, void, __ctor, (SqlBytesStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02846880, Object *, Aggregate, (SqlBytesStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0475D4A8, SqlBytesStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Compare, (SqlBytesStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, CompareValueTo, (SqlBytesStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (SqlBytesStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02846A70, Object *, Get, (SqlBytesStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02846AB0, bool, IsNull, (SqlBytesStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02846B00, void, Set, (SqlBytesStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02846CC0, void, SetCapacity, (SqlBytesStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02846DC0, Object *, ConvertXmlToObject, (SqlBytesStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02847210, String *, ConvertObjectToXml, (SqlBytesStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02847570, Object *, GetEmptyStorage, (SqlBytesStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x028475F0, void, CopyValue, (SqlBytesStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x028477C0, void, SetStorage, (SqlBytesStorage * __this, Object * store, BitArray * nullbits));
}
