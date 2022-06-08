#include <interception_macros.h>

namespace app::methods::SoundPlayer {
IL2CPP_REGISTER_METHOD(0x00EEB3A0, SoundHost *, get_SoundHost, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00736690, void, set_Position, (SoundPlayer * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00EEB4E0, void, Awake, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEB610, void, Register, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEB710, void, OnPoolSpawned, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEB810, void, Start, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEB850, void, OnDestroy, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEB850, void, RemoveRegisters, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetSoundSize, (SoundPlayer * __this, SoundSize * soundSize));
IL2CPP_REGISTER_METHOD(0x00EEB940, void, WWisePostEvent, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEBC30, void, Play, (SoundPlayer * __this, AudioClip * clip, Vector3 position, float volume, bool loop, bool keepInSync, MixerGroupType__Enum mixerGroup));
IL2CPP_REGISTER_METHOD(0x00EEBD60, void, Play, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEBD70, void, Pause, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEBE10, void, Stop, (SoundPlayer * __this, float time, AkCurveInterpolation__Enum fadeType));
IL2CPP_REGISTER_METHOD(0x00EEBEA0, bool, IsPlaying, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEBEC0, void, FadeOut, (SoundPlayer * __this, float time, bool shouldDestroyOnFadeOut, AkCurveInterpolation__Enum fadeType));
IL2CPP_REGISTER_METHOD(0x00EEBD60, void, FadeIn, (SoundPlayer * __this, float time, bool reset));
IL2CPP_REGISTER_METHOD(0x00EEBED0, bool, SoundShouldFreeze, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC000, bool, get_AllSoundsCanPlay, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC0D0, void, Update, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC230, bool, DestroyIfNeeded, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC270, bool, get_IsSuspended, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC280, void, set_IsSuspended, (SoundPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, (SoundPlayer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00EEC2D0, void, DestroySound, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC3C0, void, DestroyAll, ());
IL2CPP_REGISTER_METHOD(0x0058EE40, void, __ctor, (SoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EEC590, void, __cctor, ());
}
