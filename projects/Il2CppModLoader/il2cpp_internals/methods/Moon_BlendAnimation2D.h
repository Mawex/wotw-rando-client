using namespace app;

namespace app::methods::Moon::BlendAnimation2D {
IL2CPP_REGISTER_METHOD(0x00C74EF0, int32_t, get_ValidInputCount, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, BlendAnimation2D_Input__Array *, get_ValidInputs, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x00420230, AnimationType__Enum, get_Type, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B080D0, int32_t, get_BlendTreeSize, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, FloatAnimationParameter *, get_ParameterX, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B081F0, void, set_ParameterX, (BlendAnimation2D * __this, FloatAnimationParameter * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, FloatAnimationParameter *, get_ParameterY, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B082B0, void, set_ParameterY, (BlendAnimation2D * __this, FloatAnimationParameter * value));
IL2CPP_REGISTER_METHOD(0x01B08380, void, add_OnUpdated, (BlendAnimation2D * __this, Action_1_Moon_BlendAnimation2D_ * value));
IL2CPP_REGISTER_METHOD(0x01B08470, void, remove_OnUpdated, (BlendAnimation2D * __this, Action_1_Moon_BlendAnimation2D_ * value));
IL2CPP_REGISTER_METHOD(0x010B5C70, int32_t, get_GridNumX, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B08560, void, set_GridNumX, (BlendAnimation2D * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x010B5C80, int32_t, get_GridNumY, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B08570, void, set_GridNumY, (BlendAnimation2D * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B08580, void, OnEnable, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B08590, void, RecalculateInputs, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B087C0, void, Update, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B08860, bool, IsLooping, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B08980, void, CollectParameters, (BlendAnimation2D * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B08AB0, void, CollectAnimationClips, (BlendAnimation2D * __this, HashSet_1_UnityEngine_AnimationClip_ * clips));
IL2CPP_REGISTER_METHOD(0x01B08BC0, void, CollectAnimations, (BlendAnimation2D * __this, HashSet_1_Moon_MoonAnimation_ * animations));
IL2CPP_REGISTER_METHOD(0x01B08CE0, float, GetFrameRate, (BlendAnimation2D * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B08F40, float, GetDuration, (BlendAnimation2D * __this, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B091A0, void, PrepareRootMotionEvaluation, (BlendAnimation2D * __this));
IL2CPP_REGISTER_METHOD(0x01B092D0, MoonAnimation_RootMotionSample, EvaluateRootMotion, (BlendAnimation2D * __this, float time, AnimationParameterSet * parameterSet));
IL2CPP_REGISTER_METHOD(0x01B09440, void, ComputeCurrentBlendNodes, (BlendAnimation2D * __this, float parameterValueX, float parameterValueY, BlendAnimationMode__Enum mode, Single__Array * * currentBlendWeights, Int32__Array * * currentBlendNodeIndices, int32_t * activeBlendNodesCount));
IL2CPP_REGISTER_METHOD(0x01B0A1C0, void, ClosestPointInterpolation, (BlendAnimation2D * __this, BlendAnimation2D_Input__Array * inputs, float parameterValueX, float parameterValueY, BlendAnimationMode__Enum mode, Single__Array * * currentBlendWeights, Int32__Array * * currentBlendNodeIndices, int32_t * activeBlendNodesCount));
IL2CPP_REGISTER_METHOD(0x01B0A790, Vector3, CalculateBaricentricCoords, (BlendAnimation2D * __this, Vector3 point, Vector3 p1, Vector3 p2, Vector3 p3));
IL2CPP_REGISTER_METHOD(0x01B0AA40, float, InverseLerp, (Vector3 a, Vector3 b, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B0ABA0, Vector2, ClosestPointOnLine, (Vector2 LineStart, Vector2 LineEnd, Vector2 Point));
IL2CPP_REGISTER_METHOD(0x01B0AD70, float, Multiply, (Vector3 A, Vector3 B));
IL2CPP_REGISTER_METHOD(0x01B0ADC0, bool, Approximately, (float number, float value));
IL2CPP_REGISTER_METHOD(0x01B0ADF0, bool, ArePointsCollinear, (Vector2 v1, Vector2 v2, Vector2 v3));
IL2CPP_REGISTER_METHOD(0x01B0B090, void, __ctor, (BlendAnimation2D * __this));
}
