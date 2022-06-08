using namespace app;

namespace app::methods::SoundDescriptor {
IL2CPP_REGISTER_METHOD(0x00EE9200, void, __ctor, (SoundDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00EE96F0, void, __ctor, (SoundDescriptor * __this, AudioClip * audioClip, float volume));
IL2CPP_REGISTER_METHOD(0x00EE9C10, void, SetSoundSize, (SoundDescriptor * __this, SoundSize * size));
IL2CPP_REGISTER_METHOD(0x00EE9C30, void, SetLowPassFilter, (SoundDescriptor * __this, LowPassFilterSettings * settings));
IL2CPP_REGISTER_METHOD(0x00EE9C50, void, Reset, (SoundDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, GetGenericResource, (SoundDescriptor * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetGenericResourceId, (SoundDescriptor * __this, Object * context));
}
