#include <interception_macros.h>

namespace app::methods::Moon::Timeline::FloatAnimationParameterAnimator {
    IL2CPP_REGISTER_METHOD(0x00763150, void, OnStartPlayback, (app::FloatAnimationParameterAnimator * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::FloatAnimationParameterAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBFA20, void, OnUpdateEntity, (app::FloatAnimationParameterAnimator * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x01BBFAE0, void, SampleAtTime, (app::FloatAnimationParameterAnimator * this_ptr, float time));
    IL2CPP_REGISTER_METHOD(0x0076F300, void, SynchronizeData, (app::FloatAnimationParameterAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record));
    IL2CPP_REGISTER_METHOD(0x01BBFB90, void, __ctor, (app::FloatAnimationParameterAnimator * this_ptr));
}
