#include <interception_macros.h>

namespace app::methods::Moon::Wwise::AudioListenerZoneReference {
IL2CPP_REGISTER_METHOD(0x001FE700, void, __ctor, (AudioListenerZoneReference__Boxed * __this, AudioListenerZone * zone));
IL2CPP_REGISTER_METHOD(0x001FE740, bool, get_IsValid, (AudioListenerZoneReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FE750, bool, Equals, (AudioListenerZoneReference__Boxed * __this, AudioListenerZoneReference other));
IL2CPP_REGISTER_METHOD(0x001FE7C0, bool, Equals, (AudioListenerZoneReference__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001FE8D0, int32_t, GetHashCode, (AudioListenerZoneReference__Boxed * __this));
}
