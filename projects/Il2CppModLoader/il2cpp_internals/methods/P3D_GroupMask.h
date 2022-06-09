#include <interception_macros.h>

namespace app::methods::P3D_GroupMask {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::P3D_GroupMask__Boxed * this_ptr, int32_t new_mask));
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator__1, (app::P3D_GroupMask group_mask));
    IL2CPP_REGISTER_METHOD(0x006CE970, P3D_GroupMask, operator__2, (int32_t mask));
} // namespace app::methods::P3D_GroupMask
