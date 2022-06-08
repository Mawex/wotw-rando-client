#include <interception_macros.h>

namespace app::methods::Moon::ClipAnimation {
IL2CPP_REGISTER_METHOD(0x00420EE0, AnimationType__Enum, get_Type, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BlendTreeSize, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0C920, float, get_ClampedSpeed, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0C9E0, bool, IsLooping, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CollectParameters, (ClipAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0CB00, void, CollectAnimationClips, (ClipAnimation * __this, HashSet_1_UnityEngine_AnimationClip_ * clips));
IL2CPP_REGISTER_METHOD(0x01B0CBF0, float, GetDuration, (ClipAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B0CD20, float, GetFrameRate, (ClipAnimation * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrepareRootMotionEvaluation, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0CE50, MoonAnimation_RootMotionSample, EvaluateRootMotion, (ClipAnimation * __this, float time, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshRootMotionData, (ClipAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B0D070, void, __ctor, (ClipAnimation * __this));
}
