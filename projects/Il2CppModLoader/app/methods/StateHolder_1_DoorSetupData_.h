#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateHolder_1_DoorSetupData_ {
    IL2CPP_REGISTER_METHOD(0x01D19450, app::DoorSetupData *, ResolveCurrent, (app::StateHolder_1_DoorSetupData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753590, StateHolder_1_DoorSetupData__ResolveCurrent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D195E0, void, GetSetupStates, (app::StateHolder_1_DoorSetupData_ * this_ptr, app::List_1_IIndexedItem_ * to_populate))
}
