using namespace app;

namespace app::methods::System::Data::Common::SqlInt32Storage {
IL2CPP_REGISTER_METHOD(0x028588F0, void, __ctor, (SqlInt32Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02858A80, Object *, Aggregate, (SqlInt32Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0478DEB0, SqlInt32Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028597E0, int32_t, Compare, (SqlInt32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02859840, int32_t, CompareValueTo, (SqlInt32Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02859930, Object *, ConvertValue, (SqlInt32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (SqlInt32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028599F0, Object *, Get, (SqlInt32Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02859AB0, bool, IsNull, (SqlInt32Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02859AF0, void, Set, (SqlInt32Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02859B40, void, SetCapacity, (SqlInt32Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02859C40, Object *, ConvertXmlToObject, (SqlInt32Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02859F90, String *, ConvertObjectToXml, (SqlInt32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0285A2F0, Object *, GetEmptyStorage, (SqlInt32Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0285A370, void, CopyValue, (SqlInt32Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0285A4F0, void, SetStorage, (SqlInt32Storage * __this, Object * store, BitArray * nullbits));
}
