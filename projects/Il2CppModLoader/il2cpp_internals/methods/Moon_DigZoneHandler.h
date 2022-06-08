#include <interception_macros.h>

namespace app::methods::Moon::DigZoneHandler {
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_PassThroughDigZones, (DigZoneHandler * __this));
IL2CPP_REGISTER_METHOD(0x01201430, void, SetPassThroughDigZones, (DigZoneHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012016D0, void, IgnoreDigZone, (DigZoneHandler * __this, DigZone * digZone, bool ignore));
IL2CPP_REGISTER_METHOD(0x012018D0, void, FixedUpdate, (DigZoneHandler * __this));
IL2CPP_REGISTER_METHOD(0x01201A80, void, Awake, (DigZoneHandler * __this));
IL2CPP_REGISTER_METHOD(0x01201B10, void, OnDestroy, (DigZoneHandler * __this));
IL2CPP_REGISTER_METHOD(0x01201BE0, void, __ctor, (DigZoneHandler * __this));
}
