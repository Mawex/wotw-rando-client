#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ScenePreloading {
IL2CPP_REGISTER_METHOD(0x00784150, FixedDurationSceneEntity *, GetNextSceneEntity, (MoonTimeline * timeline, TimelineEntity * preloadingEntity));
IL2CPP_REGISTER_METHOD(0x00784210, FixedDurationSceneEntity *, GetNextSceneEntity, (MoonTimeline * timeline, List_1_Moon_Timeline_FixedDurationSceneEntity_ * entities, TimelineEntity * preloadingEntity));
IL2CPP_REGISTER_METHOD(0x00784800, List_1_Moon_Timeline_TimelineEntityRecord_ *, GetFixedDurationSceneEntities, (MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00784A80, TimelineEntityRecord *, GetSceneEntityOfClip, (MoonTimeline * timeline, TimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00784D70, FixedDurationSceneEntity *, ReturnResult, (TimelineEntityRecord * entityRecord));
IL2CPP_REGISTER_METHOD(0x00784EA0, void, __cctor, ());
}
