using namespace app;

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectMainColorModifierWisps {
IL2CPP_REGISTER_METHOD(0x0120A510, void, Apply, (MoonEffectMainColorModifierWisps * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x0120B030, void, ApplyColorOnRenderer, (MoonEffectMainColorModifierWisps * __this, Renderer * renderer, Color color, Color * oldColor));
IL2CPP_REGISTER_METHOD(0x0120B1C0, void, Revert, (MoonEffectMainColorModifierWisps * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x0120B570, void, __ctor, (MoonEffectMainColorModifierWisps * __this));
}
