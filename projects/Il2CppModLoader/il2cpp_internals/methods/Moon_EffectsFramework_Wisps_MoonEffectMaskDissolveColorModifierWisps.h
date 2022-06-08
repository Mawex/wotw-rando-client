using namespace app;

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectMaskDissolveColorModifierWisps {
IL2CPP_REGISTER_METHOD(0x0120B580, void, Apply, (MoonEffectMaskDissolveColorModifierWisps * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x0120B900, bool, IsValidRenderer, (MoonEffectMaskDissolveColorModifierWisps * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x0120B9D0, void, ApplyColorOnRenderer, (MoonEffectMaskDissolveColorModifierWisps * __this, Renderer * renderer, Color color, Color * oldColor));
IL2CPP_REGISTER_METHOD(0x0120BB60, void, Revert, (MoonEffectMaskDissolveColorModifierWisps * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x0120B570, void, __ctor, (MoonEffectMaskDissolveColorModifierWisps * __this));
}
