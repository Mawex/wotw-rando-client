#include <interception_macros.h>

namespace app::methods::System_Data_Common::SqlInt32Storage {
IL2CPP_REGISTER_METHOD(0x028588F0, void, __ctor, (app::SqlInt32Storage * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02858A80, Object *, Aggregate, (app::SqlInt32Storage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0478DEB0, SqlInt32Storage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028597E0, int32_t, Compare, (app::SqlInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x02859840, int32_t, CompareValueTo, (app::SqlInt32Storage * this_ptr, int32_t record_no, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02859930, Object *, ConvertValue, (app::SqlInt32Storage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02842A10, void, Copy, (app::SqlInt32Storage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x028599F0, Object *, Get, (app::SqlInt32Storage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x02859AB0, bool, IsNull, (app::SqlInt32Storage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x02859AF0, void, Set, (app::SqlInt32Storage * this_ptr, int32_t record, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02859B40, void, SetCapacity, (app::SqlInt32Storage * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02859C40, Object *, ConvertXmlToObject, (app::SqlInt32Storage * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x02859F90, String *, ConvertObjectToXml, (app::SqlInt32Storage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0285A2F0, Object *, GetEmptyStorage, (app::SqlInt32Storage * this_ptr, int32_t record_count));
IL2CPP_REGISTER_METHOD(0x0285A370, void, CopyValue, (app::SqlInt32Storage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index));
IL2CPP_REGISTER_METHOD(0x0285A4F0, void, SetStorage, (app::SqlInt32Storage * this_ptr, app::Object * store, app::BitArray * nullbits));
}
