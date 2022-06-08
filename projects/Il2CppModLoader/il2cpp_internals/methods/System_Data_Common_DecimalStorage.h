#include <interception_macros.h>

namespace app::methods::System::Data::Common::DecimalStorage {
IL2CPP_REGISTER_METHOD(0x02163820, void, __ctor, (DecimalStorage * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02163970, Object *, Aggregate, (DecimalStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x047415B0, DecimalStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021645E0, int32_t, Compare, (DecimalStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02164840, int32_t, CompareValueTo, (DecimalStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHOD(0x02164A60, Object *, ConvertValue, (DecimalStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02155CC0, void, Copy, (DecimalStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x02164B90, Object *, Get, (DecimalStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02164C90, void, Set, (DecimalStorage * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHOD(0x02164EA0, void, SetCapacity, (DecimalStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02164FB0, Object *, ConvertXmlToObject, (DecimalStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02165070, String *, ConvertObjectToXml, (DecimalStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02165160, Object *, GetEmptyStorage, (DecimalStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x021651E0, void, CopyValue, (DecimalStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02165380, void, SetStorage, (DecimalStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
