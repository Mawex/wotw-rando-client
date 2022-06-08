using namespace app;

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectTintColorModifierWisps {
IL2CPP_REGISTER_METHOD(0x0120BD20, void, Apply, (MoonEffectTintColorModifierWisps * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x0120C090, void, ApplyColorOnRenderer, (MoonEffectTintColorModifierWisps * __this, Renderer * renderer, Color color, Color * oldColor));
IL2CPP_REGISTER_METHOD(0x0120C220, bool, IsValidRenderer, (MoonEffectTintColorModifierWisps * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x0120C2F0, void, Revert, (MoonEffectTintColorModifierWisps * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x0120B570, void, __ctor, (MoonEffectTintColorModifierWisps * __this));
}
