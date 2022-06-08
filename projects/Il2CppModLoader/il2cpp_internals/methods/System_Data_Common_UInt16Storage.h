#include <interception_macros.h>

namespace app::methods::System::Data::Common::UInt16Storage {
IL2CPP_REGISTER_METHOD(0x02866120, void, __ctor, (UInt16Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02866270, Object *, Aggregate, (UInt16Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047178B8, UInt16Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02866AC0, int32_t, Compare, (UInt16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02866C40, int32_t, CompareValueTo, (UInt16Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02866DC0, Object *, ConvertValue, (UInt16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, (UInt16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02866EF0, Object *, Get, (UInt16Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02867040, void, Set, (UInt16Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02867240, void, SetCapacity, (UInt16Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02867350, Object *, ConvertXmlToObject, (UInt16Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02867430, String *, ConvertObjectToXml, (UInt16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02867510, Object *, GetEmptyStorage, (UInt16Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02867590, void, CopyValue, (UInt16Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02867720, void, SetStorage, (UInt16Storage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
