#include <interception_macros.h>

namespace app::methods::GenericCastManager_1_UnityEngine::SpherecastCommand_ {
IL2CPP_REGISTER_METHOD(0x019F5A80, bool, PerformCastInternal, (SpherecastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHODINFO(0x047227C0, GenericCastManager_1_UnityEngine_SpherecastCommand__PerformCastInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019F6BB0, bool, PerformMultipleCastsInternal, (SpherecastCommand__Array * cmds, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t cmdCount, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHODINFO(0x0471F290, GenericCastManager_1_UnityEngine_SpherecastCommand__PerformMultipleCastsInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019EE1D0, void, __ctor, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04729C20, GenericCastManager_1_UnityEngine_SpherecastCommand___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E8F60, bool, get_Immediate, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_Buffered, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F80, bool, get_BatchJob, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8FA0, bool, get_SplitScheduleAndComplete, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F32C0, void, Init, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_ShouldInvokeAsyncRaycastManager, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F3800, void, Dispose, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9910, int32_t, GetRequestID, ());
IL2CPP_REGISTER_METHOD(0x019E9A50, bool, get_IsDoubleFixedUpdate, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A60, void, FixedUpdate, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A70, void, Update, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F3C20, bool, AddRequest, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this, int32_t requestID, SpherecastCommand cmd));
IL2CPP_REGISTER_METHOD(0x019F3FA0, bool, AddMultipleRequests, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this, int32_t requestID, SpherecastCommand__Array * cmds, int32_t cmdCount));
IL2CPP_REGISTER_METHOD(0x019F4370, bool, HasResult, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this, int32_t requestID));
IL2CPP_REGISTER_METHOD(0x019F4430, bool, GetResult, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this, int32_t requestID, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x019F46B0, void, GetMultipleResults, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this, int32_t requestID, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t hitCount));
IL2CPP_REGISTER_METHOD(0x019F49E0, void, ScheduleJob, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F4D40, void, CompleteJob, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EAF70, void, CompleteJobs, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB030, void, ScheduleNewJobs, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB150, void, Awake, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB270, void, OnDestroy, (GenericCastManager_1_UnityEngine_SpherecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F50F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x019F52F0, GenericCastManager_1_UnityEngine_SpherecastCommand_ *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x019F8000, void, __cctor, ());
}
