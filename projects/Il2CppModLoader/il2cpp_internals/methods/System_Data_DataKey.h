using namespace app;

namespace app::methods::System::Data::DataKey {
IL2CPP_REGISTER_METHOD(0x001E9F50, void, __ctor, (DataKey__Boxed * __this, DataColumn__Array * columns, bool copyColumns));
IL2CPP_REGISTER_METHODINFO(0x04722508, DataKey__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00107C00, DataColumn__Array *, get_ColumnsReference, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011D880, bool, get_HasValue, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E9F60, DataTable *, get_Table, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E9FB0, void, CheckState, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047973D8, DataKey_CheckState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E9FC0, bool, ColumnsEqual, (DataKey__Boxed * __this, DataKey key));
IL2CPP_REGISTER_METHOD(0x023A0CC0, bool, ColumnsEqual, (DataColumn__Array * column1, DataColumn__Array * column2));
IL2CPP_REGISTER_METHOD(0x001E9FD0, bool, ContainsColumn, (DataKey__Boxed * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x001EA030, int32_t, GetHashCode, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA040, bool, Equals, (DataKey__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001EA050, bool, Equals, (DataKey__Boxed * __this, DataKey value));
IL2CPP_REGISTER_METHOD(0x001EA060, String__Array *, GetColumnNames, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA070, IndexField__Array *, GetIndexDesc, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA080, Object__Array *, GetKeyValues, (DataKey__Boxed * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x001EA090, Index *, GetSortIndex, (DataKey__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA0A0, Index *, GetSortIndex, (DataKey__Boxed * __this, DataViewRowState__Enum recordStates));
IL2CPP_REGISTER_METHOD(0x001EA0B0, bool, RecordsEqual, (DataKey__Boxed * __this, int32_t record1, int32_t record2));
IL2CPP_REGISTER_METHOD(0x001EA0C0, DataColumn__Array *, ToArray, (DataKey__Boxed * __this));
}
