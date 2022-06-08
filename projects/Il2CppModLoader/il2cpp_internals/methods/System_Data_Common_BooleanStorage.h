using namespace app;

namespace app::methods::System::Data::Common::BooleanStorage {
IL2CPP_REGISTER_METHOD(0x02156620, void, __ctor, (BooleanStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02156740, Object *, Aggregate, (BooleanStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0478BCD0, BooleanStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02156A80, int32_t, Compare, (BooleanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02156B70, int32_t, CompareValueTo, (BooleanStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02156CD0, Object *, ConvertValue, (BooleanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02156E00, void, Copy, (BooleanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02156EC0, Object *, Get, (BooleanStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02156FD0, void, Set, (BooleanStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02157190, void, SetCapacity, (BooleanStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x021572A0, Object *, ConvertXmlToObject, (BooleanStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02157350, String *, ConvertObjectToXml, (BooleanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02157410, Object *, GetEmptyStorage, (BooleanStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02157490, void, CopyValue, (BooleanStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02157610, void, SetStorage, (BooleanStorage * __this, Object * store, BitArray * nullbits));
}
