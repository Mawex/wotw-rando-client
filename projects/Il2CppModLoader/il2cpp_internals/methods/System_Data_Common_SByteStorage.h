using namespace app;

namespace app::methods::System::Data::Common::SByteStorage {
IL2CPP_REGISTER_METHOD(0x0216F1C0, void, __ctor, (SByteStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0216F2E0, Object *, Aggregate, (SByteStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047209D0, SByteStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216FA50, int32_t, Compare, (SByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216FAF0, int32_t, CompareValueTo, (SByteStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0216FC30, Object *, ConvertValue, (SByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02158280, void, Copy, (SByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216FD60, Object *, Get, (SByteStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216FE60, void, Set, (SByteStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02170020, void, SetCapacity, (SByteStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02170130, Object *, ConvertXmlToObject, (SByteStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02170210, String *, ConvertObjectToXml, (SByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021702F0, Object *, GetEmptyStorage, (SByteStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02170370, void, CopyValue, (SByteStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x021704F0, void, SetStorage, (SByteStorage * __this, Object * store, BitArray * nullbits));
}
