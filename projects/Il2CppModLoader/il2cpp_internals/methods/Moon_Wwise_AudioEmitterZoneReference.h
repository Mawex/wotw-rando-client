using namespace app;

namespace app::methods::Moon::Wwise::AudioEmitterZoneReference {
IL2CPP_REGISTER_METHOD(0x001FE500, void, __ctor, (AudioEmitterZoneReference__Boxed * __this, AudioEmitterZone * zone));
IL2CPP_REGISTER_METHOD(0x001FE540, bool, get_IsValid, (AudioEmitterZoneReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C00, AudioEmitterZone *, get_Zone, (AudioEmitterZoneReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_ZoneInstanceId, (AudioEmitterZoneReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C20, int64_t, get_Version, (AudioEmitterZoneReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FE550, bool, Equals, (AudioEmitterZoneReference__Boxed * __this, AudioEmitterZoneReference other));
IL2CPP_REGISTER_METHOD(0x001FE5B0, bool, Equals, (AudioEmitterZoneReference__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001FE6C0, int32_t, GetHashCode, (AudioEmitterZoneReference__Boxed * __this));
}
