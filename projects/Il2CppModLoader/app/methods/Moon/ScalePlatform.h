#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::ScalePlatform {
    IL2CPP_REGISTER_METHOD(0x00EC6840, void, Awake, (app::ScalePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC68D0, void, Reset, (app::ScalePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScalePlatform * this_ptr))
}
