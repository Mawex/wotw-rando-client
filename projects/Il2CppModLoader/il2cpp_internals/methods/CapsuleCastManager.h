#include <interception_macros.h>

namespace app::methods::CapsuleCastManager {
IL2CPP_REGISTER_METHOD(0x00B22E80, CapsulecastCommand, get_InvalidCmd, (CapsuleCastManager * __this));
IL2CPP_REGISTER_METHOD(0x00B22F40, JobHandle, ScheduleBatch, (CapsuleCastManager * __this, NativeArray_1_UnityEngine_CapsulecastCommand_ commands, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x00B230B0, bool, PerformImmediateCastStatic, (CapsulecastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x00B23140, bool, PerformImmediateCast, (CapsuleCastManager * __this, CapsulecastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckDuplicate, (CapsuleCastManager * __this, CapsulecastCommand cmd, int32_t idx));
IL2CPP_REGISTER_METHOD(0x00B232B0, bool, PerformCast, (CapsulecastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult, bool forceImmediate));
IL2CPP_REGISTER_METHOD(0x00B23480, void, __ctor, (CapsuleCastManager * __this));
IL2CPP_REGISTER_METHOD(0x00B23520, void, __cctor, ());
}
