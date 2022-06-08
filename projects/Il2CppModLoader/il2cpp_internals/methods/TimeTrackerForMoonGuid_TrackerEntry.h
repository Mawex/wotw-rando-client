using namespace app;

namespace app::methods::TimeTrackerForMoonGuid_TrackerEntry {
IL2CPP_REGISTER_METHOD(0x010F23A0, void, __ctor, (TimeTrackerForMoonGuid_TrackerEntry * __this, MoonGuid * guid, float timeout));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TimeRegistered, (TimeTrackerForMoonGuid_TrackerEntry * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_TimeRegistered, (TimeTrackerForMoonGuid_TrackerEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_TimeToUnregister, (TimeTrackerForMoonGuid_TrackerEntry * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_TimeToUnregister, (TimeTrackerForMoonGuid_TrackerEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x010F23B0, void, SetTimeout, (TimeTrackerForMoonGuid_TrackerEntry * __this, float timeout));
IL2CPP_REGISTER_METHOD(0x010F2490, bool, ShouldRemove, (TimeTrackerForMoonGuid_TrackerEntry * __this));
}
