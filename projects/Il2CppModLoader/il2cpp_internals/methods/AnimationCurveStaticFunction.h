using namespace app;

namespace app::methods::AnimationCurveStaticFunction {
IL2CPP_REGISTER_METHOD(0x004FC620, float, CurveDuration, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x004FC750, bool, IsLooping, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x004FC800, float, EvaluateSlope, (AnimationCurve * curve, float time, float delta));
}
