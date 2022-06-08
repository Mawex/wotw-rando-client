#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw {
IL2CPP_REGISTER_METHOD(0x023B70F0, uint32_t, EventRegister, (Guid * providerId, UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * enableCallback, Void * callbackContext, int64_t * registrationHandle));
IL2CPP_REGISTER_METHOD(0x023B71C0, uint32_t, EventUnregister, (int64_t registrationHandle));
IL2CPP_REGISTER_METHOD(0x023B7260, int32_t, EventWriteTransferWrapper, (int64_t registrationHandle, EventDescriptor * eventDescriptor, Guid * activityId, Guid * relatedActivityId, int32_t userDataCount, EventProvider_EventData * userData));
IL2CPP_REGISTER_METHOD(0x023B73B0, int32_t, EventWriteTransfer, (int64_t registrationHandle, EventDescriptor * eventDescriptor, Guid * activityId, Guid * relatedActivityId, int32_t userDataCount, EventProvider_EventData * userData));
IL2CPP_REGISTER_METHOD(0x023B7480, int32_t, EventActivityIdControl, (UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum ControlCode, Guid * ActivityId));
IL2CPP_REGISTER_METHOD(0x023B7530, int32_t, EventSetInformation, (int64_t registrationHandle, UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum informationClass, Void * eventInformation, int32_t informationLength));
IL2CPP_REGISTER_METHOD(0x023B75F0, int32_t, EnumerateTraceGuidsEx, (UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum TraceQueryInfoClass, Void * InBuffer, int32_t InBufferSize, Void * OutBuffer, int32_t OutBufferSize, int32_t * ReturnLength));
}
