#pragma once
#include <interception_macros.h>

namespace app::methods::GravityDirectionChangerZone {
    IL2CPP_REGISTER_METHOD(0x01082F70, void, OnTriggerEnter, (app::GravityDirectionChangerZone * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GravityDirectionChangerZone * this_ptr))
}
