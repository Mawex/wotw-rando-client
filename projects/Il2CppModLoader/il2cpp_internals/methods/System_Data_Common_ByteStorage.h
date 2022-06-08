using namespace app;

namespace app::methods::System::Data::Common::ByteStorage {
IL2CPP_REGISTER_METHOD(0x021576E0, void, __ctor, (ByteStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02157800, Object *, Aggregate, (ByteStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04755860, ByteStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02157F70, int32_t, Compare, (ByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02158010, int32_t, CompareValueTo, (ByteStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02158150, Object *, ConvertValue, (ByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02158280, void, Copy, (ByteStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02158340, Object *, Get, (ByteStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02158440, void, Set, (ByteStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02158600, void, SetCapacity, (ByteStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02158710, Object *, ConvertXmlToObject, (ByteStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x021587F0, String *, ConvertObjectToXml, (ByteStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021588D0, Object *, GetEmptyStorage, (ByteStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02158950, void, CopyValue, (ByteStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02158AD0, void, SetStorage, (ByteStorage * __this, Object * store, BitArray * nullbits));
}
