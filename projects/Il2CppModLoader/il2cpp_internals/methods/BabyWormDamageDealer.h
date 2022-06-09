#include <interception_macros.h>

namespace app::methods::BabyWormDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_BypassPlayerInvincibility, (app::BabyWormDamageDealer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F7FE20, void, SetBypassPlayerInvincibility, (app::BabyWormDamageDealer * this_ptr, bool bypass));
    IL2CPP_REGISTER_METHOD(0x00F7FE30, void, __ctor, (app::BabyWormDamageDealer * this_ptr));
}
