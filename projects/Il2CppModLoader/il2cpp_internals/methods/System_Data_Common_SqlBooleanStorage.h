#include <interception_macros.h>

namespace app::methods::System::Data::Common::SqlBooleanStorage {
IL2CPP_REGISTER_METHOD(0x02843600, void, __ctor, (SqlBooleanStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02843790, Object *, Aggregate, (SqlBooleanStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04738D80, SqlBooleanStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02843BD0, int32_t, Compare, (SqlBooleanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02843C30, int32_t, CompareValueTo, (SqlBooleanStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02843D20, Object *, ConvertValue, (SqlBooleanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02843DE0, void, Copy, (SqlBooleanStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02843E50, Object *, Get, (SqlBooleanStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02843F10, bool, IsNull, (SqlBooleanStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02843F50, void, Set, (SqlBooleanStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02843FA0, void, SetCapacity, (SqlBooleanStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x028440A0, Object *, ConvertXmlToObject, (SqlBooleanStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x028443F0, String *, ConvertObjectToXml, (SqlBooleanStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02844750, Object *, GetEmptyStorage, (SqlBooleanStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x028447D0, void, CopyValue, (SqlBooleanStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02844950, void, SetStorage, (SqlBooleanStorage * __this, Object * store, BitArray * nullbits));
}
