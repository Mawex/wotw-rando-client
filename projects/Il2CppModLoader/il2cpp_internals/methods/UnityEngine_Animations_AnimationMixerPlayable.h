#include <interception_macros.h>

namespace app::methods::UnityEngine::Animations::AnimationMixerPlayable {
IL2CPP_REGISTER_METHOD(0x00120520, void, __ctor, (AnimationMixerPlayable__Boxed * __this, PlayableHandle handle));
IL2CPP_REGISTER_METHOD(0x0307D340, AnimationMixerPlayable, Create, (PlayableGraph graph, int32_t inputCount, bool normalizeWeights));
IL2CPP_REGISTER_METHOD(0x0307D430, PlayableHandle, CreateHandle, (PlayableGraph graph, int32_t inputCount, bool normalizeWeights));
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (AnimationMixerPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (AnimationMixerPlayable playable));
IL2CPP_REGISTER_METHOD(0x00241950, bool, Equals, (AnimationMixerPlayable__Boxed * __this, AnimationMixerPlayable other));
IL2CPP_REGISTER_METHOD(0x0307D650, bool, CreateHandleInternal, (PlayableGraph graph, int32_t inputCount, bool normalizeWeights, PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307D750, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0307D800, bool, CreateHandleInternal_Injected, (PlayableGraph * graph, int32_t inputCount, bool normalizeWeights, PlayableHandle * handle));
}
