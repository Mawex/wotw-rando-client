using namespace app;

namespace app::methods::SphereCastManager {
IL2CPP_REGISTER_METHOD(0x00952390, SpherecastCommand, get_InvalidCmd, (SphereCastManager * __this));
IL2CPP_REGISTER_METHOD(0x00952450, JobHandle, ScheduleBatch, (SphereCastManager * __this, NativeArray_1_UnityEngine_SpherecastCommand_ commands, NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t minCommandsPerJob, JobHandle dependsOn));
IL2CPP_REGISTER_METHOD(0x009524D0, bool, PerformImmediateCastStatic, (SpherecastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x00952610, bool, PerformImmediateCast, (SphereCastManager * __this, SpherecastCommand cmd, RaycastHit * hit));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckDuplicate, (SphereCastManager * __this, SpherecastCommand cmd, int32_t idx));
IL2CPP_REGISTER_METHOD(0x009526E0, bool, PerformCast, (SpherecastCommand cmd, RaycastHit * hit, int32_t * requestID, bool guaranteeImmediateResult, bool forceImmediate));
IL2CPP_REGISTER_METHOD(0x00952830, void, PerformMultipleCasts, (SpherecastCommand__Array * cmds, RaycastHit__Array * hits, Boolean__Array * hitResults, int32_t cmdCount, int32_t * requestID, bool guaranteeImmediateResult, bool forceImmediate));
IL2CPP_REGISTER_METHOD(0x00952A50, void, __ctor, (SphereCastManager * __this));
IL2CPP_REGISTER_METHOD(0x00952AF0, void, __cctor, (MethodInfo * method));
}
