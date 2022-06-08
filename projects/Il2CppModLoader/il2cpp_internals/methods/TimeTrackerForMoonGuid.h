using namespace app;

namespace app::methods::TimeTrackerForMoonGuid {
IL2CPP_REGISTER_METHOD(0x010F1430, void, Awake, (TimeTrackerForMoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x010F14C0, void, OnEnable, (TimeTrackerForMoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x010F1660, void, OnDisable, (TimeTrackerForMoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x010F1800, void, OnRestoreCheckpoint, (TimeTrackerForMoonGuid * __this));
IL2CPP_REGISTER_METHODINFO(0x04794090, TimeTrackerForMoonGuid_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F18B0, void, RegisterGuid, (TimeTrackerForMoonGuid * __this, MoonGuid * guid, float timeout));
IL2CPP_REGISTER_METHOD(0x010F1B00, void, UnregisterGuid, (TimeTrackerForMoonGuid * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x010F1C40, void, RegisterGuid, (TimeTrackerForMoonGuid * __this, GuidOwner * guidowner, float timeout));
IL2CPP_REGISTER_METHOD(0x010F1C60, void, UnregisterGuid, (TimeTrackerForMoonGuid * __this, GuidOwner * guidowner));
IL2CPP_REGISTER_METHOD(0x010F1DB0, bool, IsGuidOnTimeout, (TimeTrackerForMoonGuid * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x010F1EF0, bool, IsGuidOnTimeout, (TimeTrackerForMoonGuid * __this, GuidOwner * guidowner));
IL2CPP_REGISTER_METHOD(0x010F2030, void, LateUpdate, (TimeTrackerForMoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x010F2240, void, __ctor, (TimeTrackerForMoonGuid * __this));
}
