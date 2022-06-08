using namespace app;

namespace app::methods::System::Data::Common::DateTimeOffsetStorage {
IL2CPP_REGISTER_METHOD(0x021603E0, void, __ctor, (DateTimeOffsetStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02160530, Object *, Aggregate, (DateTimeOffsetStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04712C10, DateTimeOffsetStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02160A60, int32_t, Compare, (DateTimeOffsetStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02160E70, int32_t, CompareValueTo, (DateTimeOffsetStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02161130, Object *, ConvertValue, (DateTimeOffsetStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (DateTimeOffsetStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02161200, Object *, Get, (DateTimeOffsetStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02161430, void, Set, (DateTimeOffsetStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x021615D0, void, SetCapacity, (DateTimeOffsetStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x021616E0, Object *, ConvertXmlToObject, (DateTimeOffsetStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x021617A0, String *, ConvertObjectToXml, (DateTimeOffsetStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02161890, Object *, GetEmptyStorage, (DateTimeOffsetStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02161910, void, CopyValue, (DateTimeOffsetStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02161AB0, void, SetStorage, (DateTimeOffsetStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x02161B80, void, __cctor, (MethodInfo * method));
}
