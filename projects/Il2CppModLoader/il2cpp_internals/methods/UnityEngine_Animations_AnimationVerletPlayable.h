#include <interception_macros.h>

namespace app::methods::UnityEngine::Animations::AnimationVerletPlayable {
IL2CPP_REGISTER_METHOD(0x00241FC0, void, __ctor, (AnimationVerletPlayable__Boxed * __this, PlayableHandle handle));
IL2CPP_REGISTER_METHODINFO(0x0477F550, AnimationVerletPlayable__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00241FE0, void, set_configuration, (AnimationVerletPlayable__Boxed * __this, AnimationVerletPlayableConfiguration value));
IL2CPP_REGISTER_METHOD(0x0307E820, AnimationVerletPlayable, Create, (PlayableGraph graph));
IL2CPP_REGISTER_METHOD(0x0307E990, PlayableHandle, CreateHandle, (PlayableGraph graph));
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (AnimationVerletPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (AnimationVerletPlayable playable));
IL2CPP_REGISTER_METHOD(0x00242040, bool, Equals, (AnimationVerletPlayable__Boxed * __this, AnimationVerletPlayable other));
IL2CPP_REGISTER_METHOD(0x002421A0, void, AddChain, (AnimationVerletPlayable__Boxed * __this, Transform__Array * transforms, AnimationVerletPlayableParametersAsset * parametersAsset));
IL2CPP_REGISTER_METHOD(0x00241FE0, void, SetConfiguration, (AnimationVerletPlayable__Boxed * __this, AnimationVerletPlayableConfiguration config));
IL2CPP_REGISTER_METHOD(0x002421B0, int32_t, BeginGroup, (AnimationVerletPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242210, void, EndGroup, (AnimationVerletPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242270, void, SetGroupWeight, (AnimationVerletPlayable__Boxed * __this, int32_t groupIndex, float weight));
IL2CPP_REGISTER_METHOD(0x0307EC00, bool, CreateHandleInternal, (PlayableGraph graph, PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307EAD0, void, AddChainInternal, (PlayableHandle * handle, Transform__Array * transforms, AnimationVerletPlayableParametersAsset * parametersAsset));
IL2CPP_REGISTER_METHOD(0x0307EC60, void, SetConfigurationInternal, (PlayableHandle * handle, AnimationVerletPlayableConfiguration config));
IL2CPP_REGISTER_METHOD(0x0307ECC0, int32_t, BeginGroupInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307EB40, void, EndGroupInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307EB90, void, SetGroupWeightInternal, (PlayableHandle * handle, int32_t groupIndex, float weight));
IL2CPP_REGISTER_METHOD(0x0307ED10, bool, CreateHandleInternal_Injected, (PlayableGraph * graph, PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307ED70, void, SetConfigurationInternal_Injected, (PlayableHandle * handle, AnimationVerletPlayableConfiguration * config));
}
