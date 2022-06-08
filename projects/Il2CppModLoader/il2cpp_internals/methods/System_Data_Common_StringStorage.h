#include <interception_macros.h>

namespace app::methods::System::Data::Common::StringStorage {
IL2CPP_REGISTER_METHOD(0x02863480, void, __ctor, (StringStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x028635A0, Object *, Aggregate, (StringStorage * __this, Int32__Array * recordNos, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04785CF0, StringStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02863940, int32_t, Compare, (StringStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02863A00, int32_t, CompareValueTo, (StringStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02863B20, Object *, ConvertValue, (StringStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (StringStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216B5A0, Object *, Get, (StringStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x02863B50, int32_t, GetStringLength, (StringStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (StringStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02863BA0, void, Set, (StringStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02863C80, void, SetCapacity, (StringStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x00502220, Object *, ConvertXmlToObject, (StringStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02863D80, String *, ConvertObjectToXml, (StringStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02863E20, Object *, GetEmptyStorage, (StringStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02863EA0, void, CopyValue, (StringStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02864070, void, SetStorage, (StringStorage * __this, Object * store, BitArray * nullbits));
}
