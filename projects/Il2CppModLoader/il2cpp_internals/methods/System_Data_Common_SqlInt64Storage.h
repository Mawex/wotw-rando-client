using namespace app;

namespace app::methods::System::Data::Common::SqlInt64Storage {
IL2CPP_REGISTER_METHOD(0x0285A5B0, void, __ctor, (SqlInt64Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0285A730, Object *, Aggregate, (SqlInt64Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04784288, SqlInt64Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0285B560, int32_t, Compare, (SqlInt64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285B5E0, int32_t, CompareValueTo, (SqlInt64Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0285B6E0, Object *, ConvertValue, (SqlInt64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, (SqlInt64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285B7A0, Object *, Get, (SqlInt64Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, (SqlInt64Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0285B870, void, Set, (SqlInt64Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x0285B8E0, void, SetCapacity, (SqlInt64Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0285B9E0, Object *, ConvertXmlToObject, (SqlInt64Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0285BD30, String *, ConvertObjectToXml, (SqlInt64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0285C090, Object *, GetEmptyStorage, (SqlInt64Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0285C110, void, CopyValue, (SqlInt64Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0285C2B0, void, SetStorage, (SqlInt64Storage * __this, Object * store, BitArray * nullbits));
}
