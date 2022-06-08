#include <interception_macros.h>

namespace app::methods::System::Data::Common::DateTimeStorage {
IL2CPP_REGISTER_METHOD(0x02161C30, void, __ctor, (DateTimeStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02161D80, Object *, Aggregate, (DateTimeStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04785128, DateTimeStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021622A0, int32_t, Compare, (DateTimeStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x021624C0, int32_t, CompareValueTo, (DateTimeStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x021626B0, Object *, ConvertValue, (DateTimeStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021627E0, void, Copy, (DateTimeStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02162890, Object *, Get, (DateTimeStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02162A00, void, Set, (DateTimeStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04770E78, DateTimeStorage_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02162D80, void, SetCapacity, (DateTimeStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02162E90, Object *, ConvertXmlToObject, (DateTimeStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02163040, String *, ConvertObjectToXml, (DateTimeStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02163210, Object *, GetEmptyStorage, (DateTimeStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02163290, void, CopyValue, (DateTimeStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x021634A0, void, SetStorage, (DateTimeStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x02163770, void, __cctor, ());
}
