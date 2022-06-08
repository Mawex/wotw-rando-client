#include <interception_macros.h>

namespace app::methods::SoundLog {
IL2CPP_REGISTER_METHOD(0x00EE9DE0, void, AddSoundCall, (String * clipName, String * providerName));
IL2CPP_REGISTER_METHOD(0x00EEA360, void, OnGUI, (SoundLog * __this));
IL2CPP_REGISTER_METHOD(0x00EEA720, void, AddFilter, (String * filter));
IL2CPP_REGISTER_METHOD(0x00EEA920, void, ResetFilters, ());
IL2CPP_REGISTER_METHOD(0x00EEAAB0, void, ResetLog, ());
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SoundLog * __this));
IL2CPP_REGISTER_METHOD(0x00EEAB60, void, __cctor, ());
}
