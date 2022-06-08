#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlBinaryStorage {
IL2CPP_REGISTER_METHOD(0x02842470, void, __ctor, (SqlBinaryStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x028425F0, Object *, Aggregate, (SqlBinaryStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047685E0, SqlBinaryStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02842800, int32_t, Compare, (SqlBinaryStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02842860, int32_t, CompareValueTo, (SqlBinaryStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02842950, Object *, ConvertValue, (SqlBinaryStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (SqlBinaryStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02842A80, Object *, Get, (SqlBinaryStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (SqlBinaryStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02842B40, void, Set, (SqlBinaryStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02842B90, void, SetCapacity, (SqlBinaryStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02842C90, Object *, ConvertXmlToObject, (SqlBinaryStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02842FE0, String *, ConvertObjectToXml, (SqlBinaryStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02843340, Object *, GetEmptyStorage, (SqlBinaryStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x028433C0, void, CopyValue, (SqlBinaryStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02843540, void, SetStorage, (SqlBinaryStorage * __this, Object * store, BitArray * nullbits));
}
