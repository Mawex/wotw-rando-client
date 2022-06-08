#include <interception_macros.h>

namespace app::methods::AudioStateZone {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Activated, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_Activated, (AudioStateZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00859150, void, Start, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x00859DB0, void, OnDestroy, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x00859E80, void, OnEnable, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x00859F40, void, OnDisable, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0085A010, bool, ContainsPoint, (AudioStateZone * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0085A3E0, void, ActivateZone, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0085A590, void, DeactivateZone, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0085A740, void, __ctor, (AudioStateZone * __this));
IL2CPP_REGISTER_METHOD(0x0085A950, void, __cctor, ());
}
