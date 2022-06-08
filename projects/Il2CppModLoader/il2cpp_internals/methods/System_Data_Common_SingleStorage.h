using namespace app;

namespace app::methods::System::Data::Common::SingleStorage {
IL2CPP_REGISTER_METHOD(0x021705C0, void, __ctor, (SingleStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x021706E0, Object *, Aggregate, (SingleStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0470CB28, SingleStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02170E30, int32_t, Compare, (SingleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02170F60, int32_t, CompareValueTo, (SingleStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02171110, Object *, ConvertValue, (SingleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02171240, void, Copy, (SingleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02171300, Object *, Get, (SingleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02171410, void, Set, (SingleStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x021715D0, void, SetCapacity, (SingleStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x021716E0, Object *, ConvertXmlToObject, (SingleStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x021717A0, String *, ConvertObjectToXml, (SingleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02171870, Object *, GetEmptyStorage, (SingleStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x021718F0, void, CopyValue, (SingleStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02171A80, void, SetStorage, (SingleStorage * __this, Object * store, BitArray * nullbits));
}
