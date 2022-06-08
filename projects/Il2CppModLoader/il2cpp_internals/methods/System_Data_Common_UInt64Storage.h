#include <interception_macros.h>

namespace app::methods::System::Data::Common::UInt64Storage {
IL2CPP_REGISTER_METHOD(0x02868EC0, void, __ctor, (UInt64Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02869010, Object *, Aggregate, (UInt64Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0472EDA8, UInt64Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028699C0, int32_t, Compare, (UInt64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02869B40, int32_t, CompareValueTo, (UInt64Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02869CD0, Object *, ConvertValue, (UInt64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0216A060, void, Copy, (UInt64Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02869E00, Object *, Get, (UInt64Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02869F50, void, Set, (UInt64Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x0286A150, void, SetCapacity, (UInt64Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0286A260, Object *, ConvertXmlToObject, (UInt64Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0286A340, String *, ConvertObjectToXml, (UInt64Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0286A420, Object *, GetEmptyStorage, (UInt64Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0286A4A0, void, CopyValue, (UInt64Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0286A620, void, SetStorage, (UInt64Storage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
