using namespace app;

namespace app::methods::System::Data::Common::DoubleStorage {
IL2CPP_REGISTER_METHOD(0x02165450, void, __ctor, (DoubleStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02165570, Object *, Aggregate, (DoubleStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047028B8, DoubleStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02165C70, int32_t, Compare, (DoubleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02165D20, int32_t, CompareValueTo, (DoubleStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02165E80, Object *, ConvertValue, (DoubleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02165FB0, void, Copy, (DoubleStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02166070, Object *, Get, (DoubleStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02166180, void, Set, (DoubleStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02166340, void, SetCapacity, (DoubleStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02166450, Object *, ConvertXmlToObject, (DoubleStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02166510, String *, ConvertObjectToXml, (DoubleStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021665E0, Object *, GetEmptyStorage, (DoubleStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02166660, void, CopyValue, (DoubleStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x021667F0, void, SetStorage, (DoubleStorage * __this, Object * store, BitArray * nullbits));
}
