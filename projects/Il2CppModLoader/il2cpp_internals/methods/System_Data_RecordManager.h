#include <interception_macros.h>

namespace app::methods::System::Data::RecordManager {
IL2CPP_REGISTER_METHOD(0x01E49910, void, __ctor, (RecordManager * __this, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x0471AF58, RecordManager__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E49B50, void, GrowRecordCapacity, (RecordManager * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_LastFreeRecord, (RecordManager * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MinimumCapacity, (RecordManager * __this));
IL2CPP_REGISTER_METHOD(0x01E49DD0, void, set_MinimumCapacity, (RecordManager * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0470F788, RecordManager_set_MinimumCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_RecordCapacity, (RecordManager * __this));
IL2CPP_REGISTER_METHOD(0x01E49E80, void, set_RecordCapacity, (RecordManager * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E49F70, int32_t, NewCapacity, (int32_t capacity));
IL2CPP_REGISTER_METHOD(0x01E49F90, int32_t, NormalizedMinimumCapacity, (RecordManager * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x01E49FD0, int32_t, NewRecordBase, (RecordManager * __this));
IL2CPP_REGISTER_METHOD(0x01E4A0E0, void, FreeRecord, (RecordManager * __this, int32_t * record));
IL2CPP_REGISTER_METHOD(0x01E4A310, void, Clear, (RecordManager * __this, bool clearAll));
IL2CPP_REGISTER_METHOD(0x01E4A710, DataRow *, get_Item, (RecordManager * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x01E4A750, void, set_Item, (RecordManager * __this, int32_t record, DataRow * value));
IL2CPP_REGISTER_METHOD(0x01E4A7D0, int32_t, ImportRecord, (RecordManager * __this, DataTable * src, int32_t record));
IL2CPP_REGISTER_METHOD(0x01E4A7F0, int32_t, CopyRecord, (RecordManager * __this, DataTable * src, int32_t record, int32_t copy));
IL2CPP_REGISTER_METHODINFO(0x04714750, RecordManager_CopyRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4AB00, void, SetRowCache, (RecordManager * __this, DataRow__Array * newRows));
}
