#include <interception_macros.h>

namespace app::methods::WindZoneVisualizer {
IL2CPP_REGISTER_METHOD(0x0057A6A0, void, Awake, (WindZoneVisualizer * __this));
IL2CPP_REGISTER_METHOD(0x0057A770, void, OnDestroy, (WindZoneVisualizer * __this));
IL2CPP_REGISTER_METHOD(0x0057A810, void, FixedUpdate, (WindZoneVisualizer * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsSuspended, (WindZoneVisualizer * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsSuspended, (WindZoneVisualizer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (WindZoneVisualizer * __this));
IL2CPP_REGISTER_METHOD(0x0057AAD0, void, set_Mask, (WindZoneVisualizer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0057AB80, void, __ctor, (WindZoneVisualizer * __this));
}
