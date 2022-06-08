#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::MoonEffectEmissionRateModifier {
IL2CPP_REGISTER_METHOD(0x019809B0, void, Apply, (MoonEffectEmissionRateModifier * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x019811A0, void, Revert, (MoonEffectEmissionRateModifier * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x00B17FD0, void, __ctor, (MoonEffectEmissionRateModifier * __this));
}
