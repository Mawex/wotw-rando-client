#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventProvider {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174D480, void, Register, (EventProvider * __this, Guid providerGuid));
IL2CPP_REGISTER_METHODINFO(0x0477BCE8, EventProvider_Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174D720, int32_t, SetInformation, (EventProvider * __this, UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum eventInfoClass, Void * data, int32_t dataSize));
IL2CPP_REGISTER_METHOD(0x0174D8E0, void, Dispose, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174D990, void, Dispose, (EventProvider * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0174DBC0, void, Finalize, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174DC40, void, Deregister, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174DD00, void, EtwEnableCallBack, (Guid * sourceId, int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR * filterData, Void * callbackContext));
IL2CPP_REGISTER_METHODINFO(0x04770DF8, EventProvider_EtwEnableCallBack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174DE60, void, EtwEnableCallBackImpl, (EventProvider * __this, int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR * filterData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnControllerCommand, (EventProvider * __this, ControllerCommand__Enum command, IDictionary_2_System_String_System_String_ * arguments, int32_t sessionId, int32_t etwSessionId));
IL2CPP_REGISTER_METHOD(0x004F4CE0, EventLevel__Enum, get_Level, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, EventKeywords__Enum, get_MatchAnyKeyword, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174E3A0, int32_t, FindNull, (Byte__Array * buffer, int32_t idx));
IL2CPP_REGISTER_METHOD(0x0174E3F0, List_1_System_Tuple_2_ *, GetSessions, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174ED20, void, GetSessionInfoCallback, (int32_t etwSessionId, int64_t matchAllKeywords, List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * * sessionList));
IL2CPP_REGISTER_METHOD(0x0174F0D0, void, GetSessionInfo, (EventProvider * __this, Action_2_Int32_Int64_ * action));
IL2CPP_REGISTER_METHOD(0x0174F330, int32_t, IndexOfSessionInList, (List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * sessions, int32_t etwSessionId));
IL2CPP_REGISTER_METHOD(0x0174F410, bool, GetDataFromController, (EventProvider * __this, int32_t etwSessionId, UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR * filterData, ControllerCommand__Enum * command, Byte__Array * * data, int32_t * dataStart));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, IsEnabled, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x0174F540, bool, IsEnabled, (EventProvider * __this, uint8_t level, int64_t keywords));
IL2CPP_REGISTER_METHOD(0x0174F580, EventProvider_WriteEventErrorCode__Enum, GetLastWriteEventError, ());
IL2CPP_REGISTER_METHOD(0x0174F660, void, SetLastError, (int32_t error));
IL2CPP_REGISTER_METHOD(0x0174F7C0, Object *, EncodeObject, (Object * * data, EventProvider_EventData * * dataDescriptor, uint8_t * * dataBuffer, uint32_t * totalEventSize));
IL2CPP_REGISTER_METHOD(0x01750370, bool, WriteEvent, (EventProvider * __this, EventDescriptor * eventDescriptor, Guid * activityID, Guid * childActivityID, Object__Array * eventPayload));
IL2CPP_REGISTER_METHODINFO(0x0478C148, EventProvider_WriteEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01751130, bool, WriteEvent, (EventProvider * __this, EventDescriptor * eventDescriptor, Guid * activityID, Guid * childActivityID, int32_t dataCount, void * data));
IL2CPP_REGISTER_METHOD(0x01751240, bool, WriteEventRaw, (EventProvider * __this, EventDescriptor * eventDescriptor, Guid * activityID, Guid * relatedActivityID, int32_t dataCount, void * data));
IL2CPP_REGISTER_METHOD(0x01751350, uint32_t, EventUnregister, (EventProvider * __this));
IL2CPP_REGISTER_METHOD(0x01751400, int32_t, bitcount, (uint32_t n));
IL2CPP_REGISTER_METHOD(0x01751500, int32_t, bitindex, (uint32_t n));
IL2CPP_REGISTER_METHOD(0x01751520, void, __cctor, ());
}
