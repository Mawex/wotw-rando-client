#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_GroupMask {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::P3D_GroupMask__Boxed * this_ptr, int32_t new_mask))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Implicit_1, (app::P3D_GroupMask group_mask))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::P3D_GroupMask, op_Implicit_2, (int32_t mask))
}
