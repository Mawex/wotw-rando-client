#include <interception_macros.h>

namespace app::methods::Moon::LayeredAnimation {
IL2CPP_REGISTER_METHOD(0x008E77B0, AnimationType__Enum, get_Type, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B16490, int32_t, get_BlendTreeSize, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B165A0, int32_t, get_ValidInputCount, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B16640, LayeredAnimation_Input__Array *, get_ValidInputs, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B16800, bool, IsLooping, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CollectParameters, (LayeredAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B16810, void, CollectAnimationClips, (LayeredAnimation * __this, HashSet_1_UnityEngine_AnimationClip_ * clips));
IL2CPP_REGISTER_METHOD(0x01B16910, void, CollectAnimations, (LayeredAnimation * __this, HashSet_1_Moon_MoonAnimation_ * animations));
IL2CPP_REGISTER_METHOD(0x01B16A20, float, GetFrameRate, (LayeredAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B16B80, float, GetDuration, (LayeredAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B16DE0, void, PrepareRootMotionEvaluation, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B16F10, MoonAnimation_RootMotionSample, EvaluateRootMotion, (LayeredAnimation * __this, float time, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B17000, bool, AllInputsAreLooping, (LayeredAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B170B0, void, __ctor, (LayeredAnimation * __this));
}
