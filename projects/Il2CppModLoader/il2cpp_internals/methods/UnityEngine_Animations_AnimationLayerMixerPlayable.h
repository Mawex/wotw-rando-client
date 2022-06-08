using namespace app;

namespace app::methods::UnityEngine::Animations::AnimationLayerMixerPlayable {
IL2CPP_REGISTER_METHOD(0x002417B0, void, __ctor, (AnimationLayerMixerPlayable__Boxed * __this, PlayableHandle handle));
IL2CPP_REGISTER_METHODINFO(0x0476DE30, AnimationLayerMixerPlayable__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307C9A0, AnimationLayerMixerPlayable, Create, (PlayableGraph graph, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x0307CA90, PlayableHandle, CreateHandle, (PlayableGraph graph, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (AnimationLayerMixerPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (AnimationLayerMixerPlayable playable));
IL2CPP_REGISTER_METHOD(0x002417D0, bool, Equals, (AnimationLayerMixerPlayable__Boxed * __this, AnimationLayerMixerPlayable other));
IL2CPP_REGISTER_METHOD(0x00241930, void, SetLayerAdditive, (AnimationLayerMixerPlayable__Boxed * __this, uint32_t layerIndex, bool value));
IL2CPP_REGISTER_METHODINFO(0x04700A78, AnimationLayerMixerPlayable_SetLayerAdditive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00241940, void, SetLayerMaskFromAvatarMask, (AnimationLayerMixerPlayable__Boxed * __this, uint32_t layerIndex, AvatarMask * mask));
IL2CPP_REGISTER_METHODINFO(0x0471C9A0, AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307D040, bool, CreateHandleInternal, (PlayableGraph graph, PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307D130, void, SetLayerAdditiveInternal, (PlayableHandle * handle, uint32_t layerIndex, bool value));
IL2CPP_REGISTER_METHOD(0x0307D1A0, void, SetLayerMaskFromAvatarMaskInternal, (PlayableHandle * handle, uint32_t layerIndex, AvatarMask * mask));
IL2CPP_REGISTER_METHOD(0x0307D210, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0307D2E0, bool, CreateHandleInternal_Injected, (PlayableGraph * graph, PlayableHandle * handle));
}
