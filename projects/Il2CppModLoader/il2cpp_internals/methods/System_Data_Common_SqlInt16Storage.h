using namespace app;

namespace app::methods::System::Data::Common::SqlInt16Storage {
IL2CPP_REGISTER_METHOD(0x02856BC0, void, __ctor, (SqlInt16Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02856D40, Object *, Aggregate, (SqlInt16Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04728778, SqlInt16Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02857AB0, int32_t, Compare, (SqlInt16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02857B10, int32_t, CompareValueTo, (SqlInt16Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02857C00, Object *, ConvertValue, (SqlInt16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02857CC0, void, Copy, (SqlInt16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02857D30, Object *, Get, (SqlInt16Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02857DF0, bool, IsNull, (SqlInt16Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02857E30, void, Set, (SqlInt16Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02857E80, void, SetCapacity, (SqlInt16Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02857F80, Object *, ConvertXmlToObject, (SqlInt16Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x028582D0, String *, ConvertObjectToXml, (SqlInt16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02858630, Object *, GetEmptyStorage, (SqlInt16Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x028586B0, void, CopyValue, (SqlInt16Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02858830, void, SetStorage, (SqlInt16Storage * __this, Object * store, BitArray * nullbits));
}
