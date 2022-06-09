#include <interception_macros.h>

namespace app::methods::GlobalRecordingTable_RecordableEntry {
IL2CPP_REGISTER_METHOD(0x007FA1D0, void, __ctor_1, (app::GlobalRecordingTable_RecordableEntry * this_ptr, app::RecordableType__Enum recordable_type, app::Component_1 * target_object, int64_t id, app::String * asset_guid));
IL2CPP_REGISTER_METHOD(0x007FA210, void, __ctor_2, (app::GlobalRecordingTable_RecordableEntry * this_ptr, app::RecordableIdData id_data, app::Component_1 * target_object));
IL2CPP_REGISTER_METHOD(0x007FA230, GameObject *, GetRecordableGameObject, (app::GlobalRecordingTable_RecordableEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x015EA820, Object *, GetObjectAs_1, (app::GlobalRecordingTable_RecordableEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x015EA820, MoonAnimator *, GetObjectAs_2, (app::GlobalRecordingTable_RecordableEntry * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04738618, GlobalRecordingTable_RecordableEntry_GetObjectAs_1__MethodInfo);
}
