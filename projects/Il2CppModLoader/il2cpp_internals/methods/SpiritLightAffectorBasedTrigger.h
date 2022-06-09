#include <interception_macros.h>

namespace app::methods::SpiritLightAffectorBasedTrigger {
    IL2CPP_REGISTER_METHOD(0x00D60210, void, FixedUpdate, (app::SpiritLightAffectorBasedTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D60420, app::SpiritLightAffectorBasedTrigger_State__Enum, CalculateCurrentState, (app::SpiritLightAffectorBasedTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D60730, void, __ctor, (app::SpiritLightAffectorBasedTrigger * this_ptr));
}
