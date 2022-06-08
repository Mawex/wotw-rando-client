#include <interception_macros.h>

namespace app::methods::System::Data::Common::BigIntegerStorage {
IL2CPP_REGISTER_METHOD(0x02154A20, void, __ctor, (BigIntegerStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02154B70, Object *, Aggregate, (BigIntegerStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04721D40, BigIntegerStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02154BC0, int32_t, Compare, (BigIntegerStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02154C70, int32_t, CompareValueTo, (BigIntegerStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02154DE0, BigInteger_2, ConvertToBigInteger, (Object * value, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHODINFO(0x047642E0, BigIntegerStorage_ConvertToBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021554C0, Object *, ConvertFromBigInteger, (BigInteger_2 value, Type * type, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHODINFO(0x04711CA0, BigIntegerStorage_ConvertFromBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02155BE0, Object *, ConvertValue, (BigIntegerStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (BigIntegerStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02155D80, Object *, Get, (BigIntegerStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02155E90, void, Set, (BigIntegerStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02156030, void, SetCapacity, (BigIntegerStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02156140, Object *, ConvertXmlToObject, (BigIntegerStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02156230, String *, ConvertObjectToXml, (BigIntegerStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02156330, Object *, GetEmptyStorage, (BigIntegerStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x021563B0, void, CopyValue, (BigIntegerStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02156550, void, SetStorage, (BigIntegerStorage * __this, Object * store, BitArray * nullbits));
}
