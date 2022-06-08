#include <interception_macros.h>

namespace app::methods::MusicZone {
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Activated, (MusicZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0087ED10, void, Awake, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F030, void, SetSoundProvider, (MusicZone * __this, SoundProvider * soundProvider));
IL2CPP_REGISTER_METHOD(0x0087F060, void, OnDestroy, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F070, void, OnEnable, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F130, void, OnDisable, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F200, void, ActivateMusicZone, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F3D0, void, DeactiveMusicZone, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F490, void, __ctor, (MusicZone * __this));
IL2CPP_REGISTER_METHOD(0x0087F4B0, void, __cctor, ());
}
