#include <interception_macros.h>

namespace app::methods::Moon::Timeline::Systems::ReplayFastForwardSystem {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateType__Enum, get_UpdateType, (ReplayFastForwardSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D09220, float, get_FastForwardTimeScale, ());
IL2CPP_REGISTER_METHOD(0x00D09260, void, IncreaseReferenceCount, (ReplayFastForwardSystem * __this));
IL2CPP_REGISTER_METHOD(0x00D09270, void, OnUpdate, (ReplayFastForwardSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D093A0, void, __ctor, (ReplayFastForwardSystem * __this));
}
