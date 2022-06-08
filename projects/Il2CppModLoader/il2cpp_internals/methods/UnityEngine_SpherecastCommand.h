using namespace app;

namespace app::methods::UnityEngine::SpherecastCommand {
IL2CPP_REGISTER_METHOD(0x00244720, void, __ctor, (SpherecastCommand__Boxed * __this, Vector3 origin, float radius, Vector3 direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_origin, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_origin, (SpherecastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_radius, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B40, void, set_radius, (SpherecastCommand__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00244760, Vector3, get_direction, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00124A20, void, set_direction, (SpherecastCommand__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002446A0, float, get_distance, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00122E20, void, set_distance, (SpherecastCommand__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00244640, int32_t, get_layerMask, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001542F0, void, set_layerMask, (SpherecastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00229300, int32_t, get_maxHits, (SpherecastCommand__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00116250, void, set_maxHits, (SpherecastCommand__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x030AF7D0, JobHandle, ScheduleBatch, (NativeArray_1_UnityEngine_SpherecastCommand_ commands, int32_t cmdCount, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t resultCount, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x030AF980, JobHandle, ScheduleBatch, (NativeArray_1_UnityEngine_SpherecastCommand_ commands, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x030AFA00, JobHandle, ScheduleSpherecastBatch, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob));
IL2CPP_REGISTER_METHOD(0x030AFAC0, void, ScheduleSpherecastBatch_Injected, (JobsUtility_JobScheduleParameters * parameters, Void * commands, int32_t commandLen, Void * result, int32_t resultLen, int32_t minCommandsPerJob, JobHandle * ret));
}
