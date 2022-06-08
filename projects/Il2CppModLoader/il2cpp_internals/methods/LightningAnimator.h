using namespace app;

namespace app::methods::LightningAnimator {
IL2CPP_REGISTER_METHOD(0x00FA2ED0, void, Awake, (LightningAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FA3050, void, Start, (LightningAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FA3080, void, FixedUpdate, (LightningAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FA31E0, void, InitiateLightningEvent, (LightningAnimator * __this, LightningAnimator_LightningEvent lightningEvent));
IL2CPP_REGISTER_METHOD(0x00FA32F0, LightningAnimator_LightningEvent, GetNextLightningEvent, (LightningAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FA3580, void, __ctor, (LightningAnimator * __this));
}
