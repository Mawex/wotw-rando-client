using namespace app;

namespace app::methods::System::Data::Common::UInt32Storage {
IL2CPP_REGISTER_METHOD(0x028677F0, void, __ctor, (UInt32Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02867940, Object *, Aggregate, (UInt32Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047621E8, UInt32Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02868190, int32_t, Compare, (UInt32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02868310, int32_t, CompareValueTo, (UInt32Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x028684A0, Object *, ConvertValue, (UInt32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021689C0, void, Copy, (UInt32Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x028685D0, Object *, Get, (UInt32Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02868720, void, Set, (UInt32Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02868920, void, SetCapacity, (UInt32Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02868A30, Object *, ConvertXmlToObject, (UInt32Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02868B10, String *, ConvertObjectToXml, (UInt32Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02868BF0, Object *, GetEmptyStorage, (UInt32Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02868C70, void, CopyValue, (UInt32Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02868DF0, void, SetStorage, (UInt32Storage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
