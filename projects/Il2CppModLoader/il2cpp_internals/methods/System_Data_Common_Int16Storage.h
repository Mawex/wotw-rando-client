#include <interception_macros.h>

namespace app::methods::System::Data::Common::Int16Storage {
IL2CPP_REGISTER_METHOD(0x021668C0, void, __ctor, (Int16Storage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x021669E0, Object *, Aggregate, (Int16Storage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0471EF10, Int16Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021671E0, int32_t, Compare, (Int16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02167280, int32_t, CompareValueTo, (Int16Storage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x021673D0, Object *, ConvertValue, (Int16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, (Int16Storage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02167500, Object *, Get, (Int16Storage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02167600, void, Set, (Int16Storage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x021677C0, void, SetCapacity, (Int16Storage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x021678D0, Object *, ConvertXmlToObject, (Int16Storage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x021679B0, String *, ConvertObjectToXml, (Int16Storage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02167A90, Object *, GetEmptyStorage, (Int16Storage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02167B10, void, CopyValue, (Int16Storage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02167CA0, void, SetStorage, (Int16Storage * __this, Object * store, BitArray * nullbits));
}
