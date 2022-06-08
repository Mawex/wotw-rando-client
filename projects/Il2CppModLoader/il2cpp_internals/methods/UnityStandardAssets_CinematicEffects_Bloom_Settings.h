using namespace app;

namespace app::methods::UnityStandardAssets::CinematicEffects::Bloom_Settings {
IL2CPP_REGISTER_METHOD(0x00115B30, void, set_thresholdGamma, (Bloom_Settings__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001F0710, float, get_thresholdGamma, (Bloom_Settings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0720, void, set_thresholdLinear, (Bloom_Settings__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001F0810, float, get_thresholdLinear, (Bloom_Settings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02500B30, Bloom_Settings, get_defaultSettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02500B80, Bloom_Settings, Clone, (Bloom_Settings from));
}
