#include <interception_macros.h>

namespace app::methods::GenericCastManager_1_UnityEngine::CapsulecastCommand_ {
IL2CPP_REGISTER_METHOD(0x019EBC30, bool, PerformCastInternal, (CapsulecastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHODINFO(0x0475D698, GenericCastManager_1_UnityEngine_CapsulecastCommand__PerformCastInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019EE1D0, void, __ctor, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04748C28, GenericCastManager_1_UnityEngine_CapsulecastCommand___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E8F60, bool, get_Immediate, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_Buffered, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8F80, bool, get_BatchJob, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8FA0, bool, get_SplitScheduleAndComplete, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E8FB0, void, Init, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_ShouldInvokeAsyncRaycastManager, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E94F0, void, Dispose, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9910, int32_t, GetRequestID, ());
IL2CPP_REGISTER_METHOD(0x019E9A50, bool, get_IsDoubleFixedUpdate, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A60, void, FixedUpdate, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A70, void, Update, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019E9A80, bool, AddRequest, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this, int32_t requestID, CapsulecastCommand cmd));
IL2CPP_REGISTER_METHOD(0x019E9E00, bool, AddMultipleRequests, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this, int32_t requestID, CapsulecastCommand__Array * cmds, int32_t cmdCount));
IL2CPP_REGISTER_METHOD(0x019EA1D0, bool, HasResult, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this, int32_t requestID));
IL2CPP_REGISTER_METHOD(0x019EA290, bool, GetResult, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this, int32_t requestID, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x019EA510, void, GetMultipleResults, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this, int32_t requestID, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t hitCount));
IL2CPP_REGISTER_METHOD(0x019EA840, void, ScheduleJob, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EABA0, void, CompleteJob, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EAF70, void, CompleteJobs, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB030, void, ScheduleNewJobs, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB150, void, Awake, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB270, void, OnDestroy, (GenericCastManager_1_UnityEngine_CapsulecastCommand_ * __this));
IL2CPP_REGISTER_METHOD(0x019EB2A0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x019EB4A0, GenericCastManager_1_UnityEngine_CapsulecastCommand_ *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x019ECD80, bool, PerformMultipleCastsInternal, (CapsulecastCommand__Array * cmds, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t cmdCount, int32_t * requestID, bool guaranteeImmediateResult));
IL2CPP_REGISTER_METHOD(0x019EE1E0, void, __cctor, ());
}
