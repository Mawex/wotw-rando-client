#include <interception_macros.h>

namespace app::methods::UnityEngine::CapsulecastCommand {
IL2CPP_REGISTER_METHOD(0x00244140, void, __ctor, (CapsulecastCommand__Boxed * __this, Vector3 p1, Vector3 p2, float radius, Vector3 direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_point1, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_point1, (CapsulecastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_point2, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_point2, (CapsulecastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001F2880, float, get_radius, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_radius, (CapsulecastCommand__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x002441A0, Vector3, get_direction, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002441C0, void, set_direction, (CapsulecastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002441D0, float, get_distance, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115A80, void, set_distance, (CapsulecastCommand__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x002441E0, int32_t, get_layerMask, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00116270, void, set_layerMask, (CapsulecastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002441F0, int32_t, get_maxHits, (CapsulecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00116290, void, set_maxHits, (CapsulecastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0309E4C0, JobHandle, ScheduleBatch, (NativeArray_1_UnityEngine_CapsulecastCommand_ commands, int32_t cmdCount, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t resultCount, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x0309E670, JobHandle, ScheduleCapsulecastBatch, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob));
IL2CPP_REGISTER_METHOD(0x0309E730, void, ScheduleCapsulecastBatch_Injected, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob, JobHandle * ret));
}
