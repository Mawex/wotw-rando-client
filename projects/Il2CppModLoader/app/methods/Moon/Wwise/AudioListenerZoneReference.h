#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Wwise::AudioListenerZoneReference {
    IL2CPP_REGISTER_METHOD(0x001FE700, void, ctor, (app::AudioListenerZoneReference__Boxed * this_ptr, app::AudioListenerZone * zone))
    IL2CPP_REGISTER_METHOD(0x001FE740, bool, get_IsValid, (app::AudioListenerZoneReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE750, bool, Equals_1, (app::AudioListenerZoneReference__Boxed * this_ptr, app::AudioListenerZoneReference other))
    IL2CPP_REGISTER_METHOD(0x001FE7C0, bool, Equals_2, (app::AudioListenerZoneReference__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x001FE8D0, int32_t, GetHashCode, (app::AudioListenerZoneReference__Boxed * this_ptr))
}
