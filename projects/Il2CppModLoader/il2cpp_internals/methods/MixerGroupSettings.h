using namespace app;

namespace app::methods::MixerGroupSettings {
IL2CPP_REGISTER_METHOD(0x00126320, void, MultiplyBlendWith, (MixerGroupSettings__Boxed * __this, MixerGroupSettings settings, float weight));
IL2CPP_REGISTER_METHOD(0x001263C0, void, ApplyGroupSettingsToMixer, (MixerGroupSettings__Boxed * __this, AudioMixer * mixer));
IL2CPP_REGISTER_METHOD(0x001263D0, void, SetFloatConditional, (MixerGroupSettings__Boxed * __this, AudioMixer * mixer, String * str, float val, float * cache));
IL2CPP_REGISTER_METHOD(0x001263E0, void, ApplyGroupSettingsToMixerCached, (MixerGroupSettings__Boxed * __this, AudioMixer * mixer));
IL2CPP_REGISTER_METHOD(0x001263F0, void, Reset, (MixerGroupSettings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0132C750, void, __cctor, (MethodInfo * method));
}
