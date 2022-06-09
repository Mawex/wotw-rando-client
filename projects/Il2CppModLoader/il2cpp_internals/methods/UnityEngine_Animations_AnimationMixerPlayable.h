#include <interception_macros.h>

namespace app::methods::UnityEngine_Animations::AnimationMixerPlayable {
IL2CPP_REGISTER_METHOD(0x00120520, void, __ctor, (app::AnimationMixerPlayable__Boxed * this_ptr, app::PlayableHandle handle));
IL2CPP_REGISTER_METHOD(0x0307D340, AnimationMixerPlayable, Create, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights));
IL2CPP_REGISTER_METHOD(0x0307D430, PlayableHandle, CreateHandle, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights));
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (app::AnimationMixerPlayable__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (app::AnimationMixerPlayable playable));
IL2CPP_REGISTER_METHOD(0x00241950, bool, Equals, (app::AnimationMixerPlayable__Boxed * this_ptr, app::AnimationMixerPlayable other));
IL2CPP_REGISTER_METHOD(0x0307D650, bool, CreateHandleInternal, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights, app::PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307D750, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0307D800, bool, CreateHandleInternal_Injected, (app::PlayableGraph * graph, int32_t input_count, bool normalize_weights, app::PlayableHandle * handle));
}
