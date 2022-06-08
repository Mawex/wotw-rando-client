#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::AnimationSample {
IL2CPP_REGISTER_METHOD(0x0133E4D0, void, __ctor, (AnimationSample * __this, float shaderTime));
IL2CPP_REGISTER_METHOD(0x0133E660, void, AddAnimationSample, (AnimationSample * __this, int32_t index, Sample * sample));
IL2CPP_REGISTER_METHODINFO(0x04740480, AnimationSample_AddAnimationSample__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133E8D0, Sample *, GetMasterSample, (AnimationSample * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0133E970, void, CleanUp, (AnimationSample * __this));
}
