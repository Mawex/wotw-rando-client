using namespace app;

namespace app::methods::System::Data::Common::Int32Storage {
IL2CPP_REGISTER_METHOD(0x02167D70, void, __ctor, (Int32Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02167E90, Object *, Aggregate, (Int32Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0479A238, Int32Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02168680, int32_t, Compare, (Int32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02168730, int32_t, CompareValueTo, (Int32Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02168890, Object *, ConvertValue, (Int32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021689C0, void, Copy, (Int32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02168A70, Object *, Get, (Int32Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02168B70, void, Set, (Int32Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02168D30, void, SetCapacity, (Int32Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02168E40, Object *, ConvertXmlToObject, (Int32Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02168F20, String *, ConvertObjectToXml, (Int32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02169000, Object *, GetEmptyStorage, (Int32Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02169080, void, CopyValue, (Int32Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02169200, void, SetStorage, (Int32Storage * __this, Object * store, BitArray * nullbits));
}
