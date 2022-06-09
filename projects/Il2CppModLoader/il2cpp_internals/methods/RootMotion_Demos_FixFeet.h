#include <interception_macros.h>

namespace app::methods::RootMotion_Demos::FixFeet {
    IL2CPP_REGISTER_METHOD(0x0221E010, void, Start, (app::FixFeet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0221E0A0, void, Sample, (app::FixFeet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0221EA30, void, LateUpdate, (app::FixFeet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (app::FixFeet * this_ptr));
}
