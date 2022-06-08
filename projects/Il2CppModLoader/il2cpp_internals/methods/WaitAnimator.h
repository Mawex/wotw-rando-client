#include <interception_macros.h>

namespace app::methods::WaitAnimator {
IL2CPP_REGISTER_METHOD(0x00420EE0, Func_2_IContext_Boolean_ *, get_CodeCondition, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x008C5510, bool, get_ConditionSpecified, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x008C55F0, void, SampleValue, (WaitAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x008C58F0, BaseAnimator *, GetRootAnimator, (WaitAnimator * __this, BaseAnimator * baseAnimator));
IL2CPP_REGISTER_METHOD(0x008C5920, bool, EvaluateCondition, (WaitAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (WaitAnimator * __this));
IL2CPP_REGISTER_METHOD(0x008C5A70, void, __ctor, (WaitAnimator * __this));
}
