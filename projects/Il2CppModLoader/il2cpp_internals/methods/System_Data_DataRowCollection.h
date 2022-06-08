#include <interception_macros.h>

namespace app::methods::System::Data::DataRowCollection {
IL2CPP_REGISTER_METHOD(0x017E0200, void, __ctor, (DataRowCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x017E0400, int32_t, get_Count, (DataRowCollection * __this));
IL2CPP_REGISTER_METHOD(0x017E0490, DataRow *, get_Item, (DataRowCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x017E0570, void, Add, (DataRowCollection * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x017E05B0, void, DiffInsertAt, (DataRowCollection * __this, DataRow * row, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x0474B290, DataRowCollection_DiffInsertAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E08E0, int32_t, IndexOf, (DataRowCollection * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x017E0A80, DataRow *, AddWithColumnEvents, (DataRowCollection * __this, Object__Array * values));
IL2CPP_REGISTER_METHOD(0x017E0BB0, void, ArrayAdd, (DataRowCollection * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x017E0CD0, void, ArrayInsert, (DataRowCollection * __this, DataRow * row, int32_t pos));
IL2CPP_REGISTER_METHOD(0x017E0DB0, void, ArrayClear, (DataRowCollection * __this));
IL2CPP_REGISTER_METHOD(0x017E0E60, void, ArrayRemove, (DataRowCollection * __this, DataRow * row));
IL2CPP_REGISTER_METHODINFO(0x0474A948, DataRowCollection_ArrayRemove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E0F50, void, CopyTo, (DataRowCollection * __this, Array * ar, int32_t index));
IL2CPP_REGISTER_METHOD(0x017E1000, void, CopyTo, (DataRowCollection * __this, DataRow__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x017E10B0, IEnumerator *, GetEnumerator, (DataRowCollection * __this));
}
