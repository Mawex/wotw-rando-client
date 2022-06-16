#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceTargetIndicator {
    IL2CPP_REGISTER_METHOD(0x00723E70, bool, get_AllowIndicator, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00723F10, app::Vector3, get_TargetPositon, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RotateIndicator, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ScaleByDistance, (app::RaceTargetIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00723FF0, void, ctor, (app::RaceTargetIndicator * this_ptr))
}
