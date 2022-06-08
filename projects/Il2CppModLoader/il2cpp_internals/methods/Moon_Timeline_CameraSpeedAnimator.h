#include <interception_macros.h>

namespace app::methods::Moon::Timeline::CameraSpeedAnimator {
IL2CPP_REGISTER_METHOD(0x010CA270, void, OnStartPlayback, (CameraSpeedAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010CA430, void, OnUpdateEntity, (CameraSpeedAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010CA5A0, void, OnStopPlayback, (CameraSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CA6A0, void, SynchronizeData, (CameraSpeedAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x010CA710, void, SynchronizePad, (CameraSpeedAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x010CA8E0, void, __ctor, (CameraSpeedAnimator * __this));
}
