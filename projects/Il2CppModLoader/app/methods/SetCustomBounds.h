#pragma once
#include <interception_macros.h>

namespace app::methods::SetCustomBounds {
    IL2CPP_REGISTER_METHOD(0x005A2580, void, Awake, (app::SetCustomBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A2640, void, LateUpdate, (app::SetCustomBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A26C0, void, OnDrawGizmosSelected, (app::SetCustomBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SetCustomBounds * this_ptr))
}
