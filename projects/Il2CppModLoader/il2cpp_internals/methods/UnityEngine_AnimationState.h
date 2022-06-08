#include <interception_macros.h>

namespace app::methods::UnityEngine::AnimationState {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AnimationState * __this));
IL2CPP_REGISTER_METHOD(0x0307C040, void, set_time, (AnimationState * __this, float value));
IL2CPP_REGISTER_METHOD(0x0307C0A0, void, set_normalizedTime, (AnimationState * __this, float value));
IL2CPP_REGISTER_METHOD(0x0307C100, void, set_layer, (AnimationState * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0307C160, AnimationClip *, get_clip, (AnimationState * __this));
}
