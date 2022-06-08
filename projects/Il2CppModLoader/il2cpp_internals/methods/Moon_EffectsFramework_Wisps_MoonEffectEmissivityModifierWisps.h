using namespace app;

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectEmissivityModifierWisps {
IL2CPP_REGISTER_METHOD(0x01209C00, void, Apply, (MoonEffectEmissivityModifierWisps * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x0120A030, void, ApplySettingsToRenderer, (MoonEffectEmissivityModifierWisps * __this, Renderer * renderer, Color color, float spreadMulitplier, float intensityMultiplier, Color * oldColor, Vector4 * oldProperties));
IL2CPP_REGISTER_METHOD(0x0120A240, bool, IsValidRenderer, (MoonEffectEmissivityModifierWisps * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x0120A310, void, Revert, (MoonEffectEmissivityModifierWisps * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x0120A4F0, void, __ctor, (MoonEffectEmissivityModifierWisps * __this));
}
