#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::usedStandaloneScripts::DeltaTimeManagers::FixedDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::FixedDeltaTimeController * this_ptr, int32_t f_p_s))
    IL2CPP_REGISTER_METHOD(0x03125600, void, Initialize, (app::FixedDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03125670, void, PreTimeManagerUpdate, (app::FixedDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031257E0, void, PostTimeManagerUpdate, (app::FixedDeltaTimeController * this_ptr))
}
