#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlCharsStorage {
IL2CPP_REGISTER_METHOD(0x02847880, void, __ctor, (SqlCharsStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x028479B0, Object *, Aggregate, (SqlCharsStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04730B70, SqlCharsStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Compare, (SqlCharsStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, CompareValueTo, (SqlCharsStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (SqlCharsStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02846A70, Object *, Get, (SqlCharsStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02846AB0, bool, IsNull, (SqlCharsStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02847BA0, void, Set, (SqlCharsStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02847D60, void, SetCapacity, (SqlCharsStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02847E60, Object *, ConvertXmlToObject, (SqlCharsStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02848340, String *, ConvertObjectToXml, (SqlCharsStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x028486A0, Object *, GetEmptyStorage, (SqlCharsStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02848720, void, CopyValue, (SqlCharsStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x028488F0, void, SetStorage, (SqlCharsStorage * __this, Object * store, BitArray * nullbits));
}
