using namespace app;

namespace app::methods::Moon::Extensions::AnimationCurveExtensions {
IL2CPP_REGISTER_METHOD(0x031B38E0, float, GetMaxAnimationCurveDuration, (AnimationCurve__Array * curves));
IL2CPP_REGISTER_METHOD(0x031B3980, float, GetMinAnimationCurveDuration, (AnimationCurve__Array * curves));
IL2CPP_REGISTER_METHOD(0x031B3A10, ParticleSystem_MinMaxCurve, AsMinMaxCurve, (AnimationCurve * animationCurve));
IL2CPP_REGISTER_METHOD(0x031B3A30, float, CurveDuration, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x004FC620, float, LastKeyTime, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x031B3C60, void, SetCurveDuration, (AnimationCurve * curve, float start, float duration, bool scaleInnerKeys));
IL2CPP_REGISTER_METHOD(0x031B4800, Keyframe, CopyKeyframeWithTime, (Keyframe frameToCopy, float time));
IL2CPP_REGISTER_METHOD(0x031B4830, Keyframe, KeyframeWithValue, (AnimationCurve * curve, int32_t index, float value));
IL2CPP_REGISTER_METHOD(0x004FC750, bool, IsLooping, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x004FC800, float, EvaluateSlope, (AnimationCurve * curve, float time, float delta));
IL2CPP_REGISTER_METHOD(0x031B4910, void, SetTangent, (AnimationCurve * curve, AnimationCurveExtensions_TangentMode__Enum tangentMode, int32_t keyframe));
IL2CPP_REGISTER_METHOD(0x031B4CD0, void, SynchronizeTransitionInto, (AnimationCurve * pad, AnimationCurve * source));
IL2CPP_REGISTER_METHOD(0x031B5040, void, SynchronizeTransitionFrom, (AnimationCurve * pad, AnimationCurve * source));
IL2CPP_REGISTER_METHOD(0x031B5430, Single__Array *, GetUniqueKeyframeTimes, (AnimationCurve__Array * curves));
IL2CPP_REGISTER_METHOD(0x031B5990, int32_t, GetNewTangentKeyMode, (int32_t currentTangentMode, AnimationCurveExtensions_TangentDirection__Enum leftRight, AnimationCurveExtensions_TangentMode__Enum mode));
}
