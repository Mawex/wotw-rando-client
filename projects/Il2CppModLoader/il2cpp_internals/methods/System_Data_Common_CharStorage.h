#include <interception_macros.h>

namespace app::methods::System::Data::Common::CharStorage {
IL2CPP_REGISTER_METHOD(0x02158BA0, void, __ctor, (CharStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02158CC0, Object *, Aggregate, (CharStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04757580, CharStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02159030, int32_t, Compare, (CharStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x021590D0, int32_t, CompareValueTo, (CharStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02159210, Object *, ConvertValue, (CharStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02159340, void, Copy, (CharStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02159400, Object *, Get, (CharStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02159500, void, Set, (CharStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04727C40, CharStorage_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02159710, void, SetCapacity, (CharStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02159820, Object *, ConvertXmlToObject, (CharStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x021598D0, String *, ConvertObjectToXml, (CharStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x021599A0, Object *, GetEmptyStorage, (CharStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02159A20, void, CopyValue, (CharStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02159BA0, void, SetStorage, (CharStorage * __this, Object * store, BitArray * nullbits));
}
