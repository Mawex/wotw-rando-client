using namespace app;

namespace app::methods::Moon::Timeline::FloatAnimationParameterAnimator {
IL2CPP_REGISTER_METHOD(0x00763150, void, OnStartPlayback, (FloatAnimationParameterAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (FloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBFA20, void, OnUpdateEntity, (FloatAnimationParameterAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BBFAE0, void, SampleAtTime, (FloatAnimationParameterAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x0076F300, void, SynchronizeData, (FloatAnimationParameterAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BBFB90, void, __ctor, (FloatAnimationParameterAnimator * __this));
}
