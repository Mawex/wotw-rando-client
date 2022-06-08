using namespace app;

namespace app::methods::Moon::Timeline::CustomTimelineConstraint {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Dirty, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Dirty, (CustomTimelineConstraint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_CachedValue, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_CachedValue, (CustomTimelineConstraint * __this, float value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_EventId, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_EventId, (CustomTimelineConstraint * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A010, EntityId, get_ConstrainedTo, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ConstrainedTo, (CustomTimelineConstraint * __this, EntityId value));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_TimeOffset, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, ConstraintFlag__Enum, get_Flags, (CustomTimelineConstraint * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Flags, (CustomTimelineConstraint * __this, ConstraintFlag__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CustomTimelineConstraint * __this));
}
