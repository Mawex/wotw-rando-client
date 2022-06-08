using namespace app;

namespace app::methods::Moon::BlendAnimation {
IL2CPP_REGISTER_METHOD(0x00417920, AnimationType__Enum, get_Type, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B06B20, int32_t, get_BlendTreeSize, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B06C40, int32_t, get_ValidInputCount, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B06CF0, BlendAnimation_Input__Array *, get_ValidInputs, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B06EC0, bool, IsLooping, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B06FE0, void, CollectParameters, (BlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B071A0, void, CollectAnimationClips, (BlendAnimation * __this, HashSet_1_UnityEngine_AnimationClip_ * clips));
IL2CPP_REGISTER_METHOD(0x01B072B0, void, CollectAnimations, (BlendAnimation * __this, HashSet_1_Moon_MoonAnimation_ * animations));
IL2CPP_REGISTER_METHOD(0x01B073D0, float, GetFrameRate, (BlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B07670, float, GetDuration, (BlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B07910, void, PrepareRootMotionEvaluation, (BlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B079A0, MoonAnimation_RootMotionSample, EvaluateRootMotion, (BlendAnimation * __this, float time, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B07C60, float, ResolveParameterValue, (BlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B07CD0, void, ComputeCurrentBlendNodes, (BlendAnimation_Input__Array * inputs, float parameterValue, BlendAnimationMode__Enum mode, float * currentBlendWeight, int32_t * currentBlendNodeIndex));
IL2CPP_REGISTER_METHOD(0x01B07F50, void, __ctor, (BlendAnimation * __this));
}
