#include <interception_macros.h>

namespace app::methods::RayCastManager {
IL2CPP_REGISTER_METHOD(0x0072FBC0, RaycastCommand, get_InvalidCmd, (RayCastManager * __this));
IL2CPP_REGISTER_METHOD(0x0072FC80, JobHandle, ScheduleBatch, (RayCastManager * __this, NativeArray_1_UnityEngine_RaycastCommand_ commands, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x0072FD00, bool, PerformImmediateCastStatic, (RaycastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x0072FE30, bool, PerformImmediateCast, (RayCastManager * __this, RaycastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x0072FF00, void, CheckDuplicate, (RayCastManager * __this, RaycastCommand cmd, int32_t idx));
IL2CPP_REGISTER_METHOD(0x007301B0, bool, PerformCast, (RaycastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult, bool forceImmediate));
IL2CPP_REGISTER_METHOD(0x007302F0, void, PerformMultipleCasts, (RaycastCommand__Array * cmds, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t cmdCount, int32_t * requestID, bool guaranteeImmediateResult, bool forceImmediate));
IL2CPP_REGISTER_METHOD(0x00730500, void, __ctor, (RayCastManager * __this));
IL2CPP_REGISTER_METHOD(0x007305A0, void, __cctor, ());
}
