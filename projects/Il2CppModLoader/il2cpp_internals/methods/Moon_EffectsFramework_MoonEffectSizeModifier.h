#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::MoonEffectSizeModifier {
IL2CPP_REGISTER_METHOD(0x01983600, void, Apply, (MoonEffectSizeModifier * __this, IMoonEffectComponentCache * input, MoonEffectRevertHandle * revertHandle));
IL2CPP_REGISTER_METHOD(0x01984100, void, Revert, (MoonEffectSizeModifier * __this, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x00858E20, void, __ctor, (MoonEffectSizeModifier * __this));
}
