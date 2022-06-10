#pragma once
#include <interception_macros.h>

namespace app::methods::AllContainer_1_EnemyStopper_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_EnemyStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A710, AllContainer_1_EnemyStopper__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::EnemyStopper *, get_Item, (app::AllContainer_1_EnemyStopper_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478A288, AllContainer_1_EnemyStopper__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_EnemyStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CA08, AllContainer_1_EnemyStopper__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_EnemyStopper_ * this_ptr, app::EnemyStopper * item))
    IL2CPP_REGISTER_METHODINFO(0x047171D8, AllContainer_1_EnemyStopper__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_EnemyStopper_ * this_ptr, app::EnemyStopper * item))
    IL2CPP_REGISTER_METHODINFO(0x047476F0, AllContainer_1_EnemyStopper__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_EnemyStopper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788F90, AllContainer_1_EnemyStopper___ctor__MethodInfo)
}
