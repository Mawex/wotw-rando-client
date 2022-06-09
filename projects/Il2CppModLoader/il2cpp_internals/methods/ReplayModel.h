#include <interception_macros.h>

namespace app::methods::ReplayModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::ReplayModel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EA24F0, void, __ctor_2, (app::ReplayModel * this_ptr, app::String* player, int32_t duration, app::String* replay));
    IL2CPP_REGISTER_METHOD(0x002FA280, String*, get_Player, (app::ReplayModel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Duration, (app::ReplayModel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, String*, get_ReplayData, (app::ReplayModel * this_ptr));
} // namespace app::methods::ReplayModel
