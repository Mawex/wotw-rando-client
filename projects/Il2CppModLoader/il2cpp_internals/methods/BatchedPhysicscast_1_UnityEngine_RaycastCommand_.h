#include <interception_macros.h>

namespace app::methods::BatchedPhysicscast_1_UnityEngine::RaycastCommand_ {
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0472AEF8, BatchedPhysicscast_1_UnityEngine_RaycastCommand___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7CF0, void, Init, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x047114B8, BatchedPhysicscast_1_UnityEngine_RaycastCommand__Init__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7E50, void, ScheduleJob, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this, RaycastCommand__Array * commands));
IL2CPP_REGISTER_METHODINFO(0x04719750, BatchedPhysicscast_1_UnityEngine_RaycastCommand__ScheduleJob__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7DF0, bool, get_IsComplete, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04764820, BatchedPhysicscast_1_UnityEngine_RaycastCommand__get_IsComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7EB0, void, CompleteJob, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04722D10, BatchedPhysicscast_1_UnityEngine_RaycastCommand__CompleteJob__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7EC0, void, GetResults, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this, RaycastHit__Array * results));
IL2CPP_REGISTER_METHODINFO(0x04799A48, BatchedPhysicscast_1_UnityEngine_RaycastCommand__GetResults__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019D7F60, void, Dispose, (BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04734440, BatchedPhysicscast_1_UnityEngine_RaycastCommand__Dispose__MethodInfo);
}
