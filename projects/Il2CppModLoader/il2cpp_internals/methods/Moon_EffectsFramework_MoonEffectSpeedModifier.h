#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::MoonEffectSpeedModifier {
IL2CPP_REGISTER_METHOD(0x01984540, void, Apply, (MoonEffectSpeedModifier * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x01985E30, void, Revert, (MoonEffectSpeedModifier * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x019865D0, void, __ctor, (MoonEffectSpeedModifier * __this));
}
