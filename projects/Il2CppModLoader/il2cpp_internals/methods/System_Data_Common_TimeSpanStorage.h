using namespace app;

namespace app::methods::System::Data::Common::TimeSpanStorage {
IL2CPP_REGISTER_METHOD(0x02864130, void, __ctor, (TimeSpanStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02864280, Object *, Aggregate, (TimeSpanStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04701A40, TimeSpanStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028650D0, int32_t, Compare, (TimeSpanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028652E0, int32_t, CompareValueTo, (TimeSpanStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02865490, TimeSpan, ConvertToTimeSpan, (Object * value));
IL2CPP_REGISTER_METHOD(0x02865710, Object *, ConvertValue, (TimeSpanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021627E0, void, Copy, (TimeSpanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028657F0, Object *, Get, (TimeSpanStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02865950, void, Set, (TimeSpanStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02865AD0, void, SetCapacity, (TimeSpanStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02865BE0, Object *, ConvertXmlToObject, (TimeSpanStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02865C90, String *, ConvertObjectToXml, (TimeSpanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02865DA0, Object *, GetEmptyStorage, (TimeSpanStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02865E20, void, CopyValue, (TimeSpanStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02865FA0, void, SetStorage, (TimeSpanStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x02866070, void, __cctor, (MethodInfo * method));
}
