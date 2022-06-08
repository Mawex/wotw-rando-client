#include <interception_macros.h>

namespace app::methods::GenericCastManager_1_UnityEngine::RaycastCommand_ {
IL2CPP_REGISTER_METHOD(0x019F0B80, bool, PerformCastInternal, (RaycastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHODINFO(0x04725880, GenericCastManager_1_UnityEngine_RaycastCommand__PerformCastInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019F1CA0, bool, PerformMultipleCastsInternal, (RaycastCommand__Array * cmds, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t cmdCount, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHODINFO(0x047935F8, GenericCastManager_1_UnityEngine_RaycastCommand__PerformMultipleCastsInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019EE1D0, void, __ctor, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C560, GenericCastManager_1_UnityEngine_RaycastCommand___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E8F60, bool, get_Immediate, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_Buffered, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F80, bool, get_BatchJob, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8FA0, bool, get_SplitScheduleAndComplete, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EE3D0, void, Init, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_ShouldInvokeAsyncRaycastManager, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EE910, void, Dispose, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9910, int32_t, GetRequestID, ());
IL2CPP_REGISTER_METHOD(0x019E9A50, bool, get_IsDoubleFixedUpdate, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A60, void, FixedUpdate, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A70, void, Update, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EED30, bool, AddRequest, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this, int32_t requestID, RaycastCommand cmd));
IL2CPP_REGISTER_METHOD(0x019EF0A0, bool, AddMultipleRequests, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this, int32_t requestID, RaycastCommand__Array * cmds, int32_t cmdCount));
IL2CPP_REGISTER_METHOD(0x019EF470, bool, HasResult, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this, int32_t requestID));
IL2CPP_REGISTER_METHOD(0x019EF530, bool, GetResult, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this, int32_t requestID, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x019EF7B0, void, GetMultipleResults, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this, int32_t requestID, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t hitCount));
IL2CPP_REGISTER_METHOD(0x019EFAE0, void, ScheduleJob, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EFE40, void, CompleteJob, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EAF70, void, CompleteJobs, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB030, void, ScheduleNewJobs, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB150, void, Awake, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB270, void, OnDestroy, (GenericCastManager_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019F01F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x019F03F0, GenericCastManager_1_UnityEngine_RaycastCommand_ *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x019F30D0, void, __cctor, ());
}
