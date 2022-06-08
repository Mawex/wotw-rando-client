#include <interception_macros.h>

namespace app::methods::Core::Sound {
IL2CPP_REGISTER_METHOD(0x00DAEE90, GameObject *, GetAudioObjectsParent, ());
IL2CPP_REGISTER_METHOD(0x00DAEF40, void, LoadAudioParent, ());
IL2CPP_REGISTER_METHOD(0x00DAF2D0, bool, IsWWiseInitialised, ());
IL2CPP_REGISTER_METHOD(0x00DAF360, SoundPlayer *, PlayLooping, (SoundDescriptor * soundDescriptor, Vector3 position, Action * nullify));
IL2CPP_REGISTER_METHOD(0x00DAF4B0, SoundPlayer *, PlayLooping, (SoundDescriptor * soundDescriptor, Vector3 position, float fadeInDuration, Action * nullify));
IL2CPP_REGISTER_METHOD(0x00DAF610, SoundPlayer *, PlayLooping, (AudioClip * audioClip, Vector3 position, float volume, SoundSize * soundSize, bool shouldBePanned, float pitch, LowPassFilterSettings * lowPassFilterSettings, SoundDescriptor * soundDescriptor, Action * nullify, float fadeIn));
IL2CPP_REGISTER_METHOD(0x00DAFB70, SoundPlayer *, Play, (SoundProvider * soundProvider));
IL2CPP_REGISTER_METHOD(0x00DAFDC0, SoundPlayer *, Play, (SoundDescriptor * soundDescriptor, Vector3 position, Action * nullify, SoundHost * soundHost));
IL2CPP_REGISTER_METHOD(0x00DB0090, ArtificialSoundHostReference, Play, (SoundDescriptor * soundDescriptor, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00DB0200, SoundPlayer *, Play, (AudioClip * audioClip, Vector3 position, Action * nullify, float volume, SoundDescriptor * soundDescriptor));
IL2CPP_REGISTER_METHOD(0x00DB0470, SoundPlayer *, PlayGeneric, (IGenericResourceEnumerator * provider, Object * context, SoundHost * soundHost, Vector3 position, bool attach, float volume));
IL2CPP_REGISTER_METHOD(0x00DB0630, SoundPlayer *, GetPooledPlayer, (AudioClip * clip, Vector3 pos, Quaternion rotation, Action * nullify));
IL2CPP_REGISTER_METHOD(0x00DB0AD0, SoundPlayer *, Play, (AudioClip * audioClip, Vector3 position, float volume, SoundSize * soundSize, bool shouldBePanned, float pitch, LowPassFilterSettings * lowPassFilterSettings, SoundDescriptor * soundDescriptor, Action * nullify));
IL2CPP_REGISTER_METHOD(0x00DB0DC0, Vector3, get_SoundListenerPosition, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
