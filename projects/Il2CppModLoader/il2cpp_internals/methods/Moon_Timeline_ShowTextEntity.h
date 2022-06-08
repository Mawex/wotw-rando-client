#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ShowTextEntity {
IL2CPP_REGISTER_METHOD(0x00D04F20, bool, HasFinished, (ShowTextEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D05040, void, OnUpdateEntity, (ShowTextEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D05180, void, SynchronizeData, (ShowTextEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00D05190, void, __ctor, (ShowTextEntity * __this));
}
