#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::VolumetricCanvas {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::VolumetricCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::VolumetricCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC0790, void, ctor, (app::VolumetricCanvas * this_ptr))
}
