#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MotionBlurController {
    IL2CPP_REGISTER_METHOD(0x008673C0, float, GetSliceMultiplier, (app::MotionBlurController * this_ptr, int32_t slice_index))
    IL2CPP_REGISTER_METHOD(0x00867470, void, ctor, (app::MotionBlurController * this_ptr))
}
