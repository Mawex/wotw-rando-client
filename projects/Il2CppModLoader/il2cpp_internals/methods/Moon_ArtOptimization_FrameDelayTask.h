#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::FrameDelayTask {
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, __ctor, (FrameDelayTask * __this, int32_t framesDelay));
IL2CPP_REGISTER_METHOD(0x0134BB50, void, Update, (FrameDelayTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB2AE0, void, OnEnterContext, (FrameDelayTask * __this, IOptimizationTask * antecedent, Object * contextData));
}
