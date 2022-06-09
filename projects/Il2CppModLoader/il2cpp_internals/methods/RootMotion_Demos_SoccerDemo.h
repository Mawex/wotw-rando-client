#include <interception_macros.h>

namespace app::methods::RootMotion_Demos::SoccerDemo {
    IL2CPP_REGISTER_METHOD(0x02046410, void, Start, (app::SoccerDemo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02046760, app::IEnumerator *, ResetDelayed, (app::SoccerDemo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SoccerDemo * this_ptr));
}
