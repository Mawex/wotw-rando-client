using namespace app;

namespace app::methods::Moon::DirectBlendAnimation {
IL2CPP_REGISTER_METHOD(0x01B0D7A0, int32_t, get_ValidInputCount, (DirectBlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0D840, int32_t, get_BlendTreeSize, (DirectBlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, AnimationType__Enum, get_Type, (DirectBlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0D950, bool, IsLooping, (DirectBlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0DA00, void, CollectParameters, (DirectBlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0DC30, void, CollectAnimationClips, (DirectBlendAnimation * __this, HashSet_1_UnityEngine_AnimationClip_ * clips));
IL2CPP_REGISTER_METHOD(0x01B0DD30, void, CollectAnimations, (DirectBlendAnimation * __this, HashSet_1_Moon_MoonAnimation_ * animations));
IL2CPP_REGISTER_METHOD(0x01B0DE40, float, GetDuration, (DirectBlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0DEB0, float, GetFrameRate, (DirectBlendAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0DF20, void, PrepareRootMotionEvaluation, (DirectBlendAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0E050, MoonAnimation_RootMotionSample, EvaluateRootMotion, (DirectBlendAnimation * __this, float time, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0E1C0, void, __ctor, (DirectBlendAnimation * __this));
}
