#include <interception_macros.h>

namespace app::methods::GhostGenericSoundPlayer {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Id, (GhostGenericSoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (GhostGenericSoundPlayer * __this, int32_t id, GenericPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x00E20180, void, Play, (GhostGenericSoundPlayer * __this, SoundProvider * sound));
IL2CPP_REGISTER_METHOD(0x00E20340, void, PlayInternal, (GhostGenericSoundPlayer * __this, SoundProvider * soundProvider, Vector3 position, Transform * attachTo));
IL2CPP_REGISTER_METHOD(0x00E204C0, void, FadeOut, (GhostGenericSoundPlayer * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E205A0, void, FadeOutInternal, (GhostGenericSoundPlayer * __this, float time));
}
