#include <interception_macros.h>

namespace app::methods::GlobalRecordingTable_RecordableEntry {
IL2CPP_REGISTER_METHOD(0x007FA1D0, void, __ctor, (GlobalRecordingTable_RecordableEntry * __this, RecordableType__Enum recordableType, Component_1 * targetObject, int64_t id, String * assetGuid));
IL2CPP_REGISTER_METHOD(0x007FA210, void, __ctor, (GlobalRecordingTable_RecordableEntry * __this, RecordableIdData idData, Component_1 * targetObject));
IL2CPP_REGISTER_METHOD(0x007FA230, GameObject *, GetRecordableGameObject, (GlobalRecordingTable_RecordableEntry * __this));
IL2CPP_REGISTER_METHOD(0x015EA820, Object *, GetObjectAs, (GlobalRecordingTable_RecordableEntry * __this));
IL2CPP_REGISTER_METHOD(0x015EA820, MoonAnimator *, GetObjectAs, (GlobalRecordingTable_RecordableEntry * __this));
IL2CPP_REGISTER_METHODINFO(0x04738618, GlobalRecordingTable_RecordableEntry_GetObjectAs_1__MethodInfo);
}
