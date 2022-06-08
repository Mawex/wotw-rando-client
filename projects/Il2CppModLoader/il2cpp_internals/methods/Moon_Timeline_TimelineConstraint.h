#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineConstraint {
IL2CPP_REGISTER_METHOD(0x0052A010, ConstraintFlag__Enum, get_Flags, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Dirty, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Dirty, (TimelineConstraint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_CachedValue, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x01E83AA0, void, set_CachedValue, (TimelineConstraint * __this, float value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_EventId, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_EventId, (TimelineConstraint * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, EntityId, get_ConstrainedTo, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_TimeOffset, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x01E83AB0, void, ConstrainTo, (TimelineConstraint * __this, EntityId entity, float offset, int32_t constraintType));
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetConstraintToUnsafe, (TimelineConstraint * __this, EntityId id));
IL2CPP_REGISTER_METHOD(0x01E83AD0, void, SetTimeOffset, (TimelineConstraint * __this, float timeOffset));
IL2CPP_REGISTER_METHOD(0x01E83BA0, TimelineConstraint *, Copy, (TimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x01E83D00, void, __ctor, (TimelineConstraint * __this));
}
