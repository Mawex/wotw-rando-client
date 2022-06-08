using namespace app;

namespace app::methods::System::Data::Common::SqlMoneyStorage {
IL2CPP_REGISTER_METHOD(0x0285C370, void, __ctor, (SqlMoneyStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0285C4F0, Object *, Aggregate, (SqlMoneyStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04724330, SqlMoneyStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0285D3A0, int32_t, Compare, (SqlMoneyStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285D420, int32_t, CompareValueTo, (SqlMoneyStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0285D520, Object *, ConvertValue, (SqlMoneyStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02854E00, void, Copy, (SqlMoneyStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0285D5E0, Object *, Get, (SqlMoneyStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02854F40, bool, IsNull, (SqlMoneyStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0285D6B0, void, Set, (SqlMoneyStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x0285D720, void, SetCapacity, (SqlMoneyStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0285D820, Object *, ConvertXmlToObject, (SqlMoneyStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0285DB70, String *, ConvertObjectToXml, (SqlMoneyStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0285DED0, Object *, GetEmptyStorage, (SqlMoneyStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0285DF50, void, CopyValue, (SqlMoneyStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0285E0F0, void, SetStorage, (SqlMoneyStorage * __this, Object * store, BitArray * nullbits));
}
