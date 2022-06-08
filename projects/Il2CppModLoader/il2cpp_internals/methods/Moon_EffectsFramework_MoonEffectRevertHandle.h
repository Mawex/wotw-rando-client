#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::MoonEffectRevertHandle {
IL2CPP_REGISTER_METHOD(0x01982300, void, AddData, (MoonEffectRevertHandle * __this, IRevertMoonEffectLogic * logic, MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
IL2CPP_REGISTER_METHOD(0x019823D0, void, Revert, (MoonEffectRevertHandle * __this));
IL2CPP_REGISTER_METHOD(0x01982690, void, Reset, (MoonEffectRevertHandle * __this));
IL2CPP_REGISTER_METHOD(0x019828B0, void, __ctor, (MoonEffectRevertHandle * __this));
}
