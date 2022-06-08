#include <interception_macros.h>

namespace app::methods::WideScreenAdjustmentAnimator {
IL2CPP_REGISTER_METHOD(0x00573350, void, CacheOriginals, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00573420, void, Awake, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005735C0, void, OnDestroy, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00573760, void, OnGameReset, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04766138, WideScreenAdjustmentAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00573830, void, SampleValue, (WideScreenAdjustmentAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x005739C0, float, get_Duration, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00573B60, void, RestoreToOriginalState, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (WideScreenAdjustmentAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00573C30, void, __ctor, (WideScreenAdjustmentAnimator * __this));
}
