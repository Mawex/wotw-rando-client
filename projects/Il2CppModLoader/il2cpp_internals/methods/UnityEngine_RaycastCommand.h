#include <interception_macros.h>

namespace app::methods::UnityEngine::RaycastCommand {
IL2CPP_REGISTER_METHOD(0x00244600, void, __ctor, (RaycastCommand__Boxed * __this, Vector3 from, Vector3 direction, float distance, int32_t layerMask, int32_t maxHits));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_from, (RaycastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_from, (RaycastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_direction, (RaycastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_direction, (RaycastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001F2880, float, get_distance, (RaycastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_distance, (RaycastCommand__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_layerMask, (RaycastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB80, void, set_layerMask, (RaycastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00244640, int32_t, get_maxHits, (RaycastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001542F0, void, set_maxHits, (RaycastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x030AAE60, JobHandle, ScheduleBatch, (NativeArray_1_UnityEngine_RaycastCommand_ commands, int32_t cmdCount, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t resultCount, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x030AB010, JobHandle, ScheduleBatch, (NativeArray_1_UnityEngine_RaycastCommand_ commands, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x030AB090, JobHandle, ScheduleRaycastBatch, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob));
IL2CPP_REGISTER_METHOD(0x030AB150, void, ScheduleRaycastBatch_Injected, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob, JobHandle * ret));
}
