using namespace app;

namespace app::methods::System::Data::Common::SqlUdtStorage {
IL2CPP_REGISTER_METHOD(0x02861550, void, __ctor, (SqlUdtStorage * __this, DataColumn * column, Type * type));
IL2CPP_REGISTER_METHOD(0x02861620, void, __ctor, (SqlUdtStorage * __this, DataColumn * column, Type * type, Object * nullValue));
IL2CPP_REGISTER_METHOD(0x028617D0, Object *, GetStaticNullForUdtType, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x04728D70, SqlUdtStorage_GetStaticNullForUdtType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02861B60, bool, IsNull, (SqlUdtStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02861C70, Object *, Aggregate, (SqlUdtStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04715998, SqlUdtStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02861CC0, int32_t, Compare, (SqlUdtStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02861D10, int32_t, CompareValueTo, (SqlUdtStorage * __this, int32_t recordNo1, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04749870, SqlUdtStorage_CompareValueTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02861F70, void, Copy, (SqlUdtStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02846A70, Object *, Get, (SqlUdtStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x02862050, void, Set, (SqlUdtStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472EF58, SqlUdtStorage_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028622F0, void, SetCapacity, (SqlUdtStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02862400, Object *, ConvertXmlToObject, (SqlUdtStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02862870, Object *, ConvertXmlToObject, (SqlUdtStorage * __this, XmlReader * xmlReader, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x02862AD0, String *, ConvertObjectToXml, (SqlUdtStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02862EA0, void, ConvertObjectToXml, (SqlUdtStorage * __this, Object * value, XmlWriter * xmlWriter, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x02863000, Object *, GetEmptyStorage, (SqlUdtStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02863080, void, CopyValue, (SqlUdtStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02863250, void, SetStorage, (SqlUdtStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x02863310, void, __cctor, (MethodInfo * method));
}
