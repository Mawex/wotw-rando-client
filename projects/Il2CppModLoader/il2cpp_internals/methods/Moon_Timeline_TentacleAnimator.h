#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TentacleAnimator {
IL2CPP_REGISTER_METHOD(0x00D0AEB0, void, OnStartPlayback, (TentacleAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D0AEE0, void, OnStopPlayback, (TentacleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0AF00, void, OnUpdateEntity, (TentacleAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D0AF30, void, OnStartTimelineSample, (TentacleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0AF50, void, OnTimelineSample, (TentacleAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D0AFF0, void, OnDrawGizmosSelected, (TentacleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0B1C0, void, __ctor, (TentacleAnimator * __this));
}
