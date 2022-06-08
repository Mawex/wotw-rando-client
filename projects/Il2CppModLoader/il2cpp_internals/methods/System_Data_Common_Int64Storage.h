using namespace app;

namespace app::methods::System::Data::Common::Int64Storage {
IL2CPP_REGISTER_METHOD(0x021692D0, void, __ctor, (Int64Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x021693F0, Object *, Aggregate, (Int64Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04737338, Int64Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02169D20, int32_t, Compare, (Int64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02169DD0, int32_t, CompareValueTo, (Int64Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02169F30, Object *, ConvertValue, (Int64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0216A060, void, Copy, (Int64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216A110, Object *, Get, (Int64Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216A210, void, Set, (Int64Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x0216A3D0, void, SetCapacity, (Int64Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0216A4E0, Object *, ConvertXmlToObject, (Int64Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0216A5C0, String *, ConvertObjectToXml, (Int64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0216A6A0, Object *, GetEmptyStorage, (Int64Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0216A720, void, CopyValue, (Int64Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0216A8A0, void, SetStorage, (Int64Storage * __this, Object * store, BitArray * nullbits));
}
