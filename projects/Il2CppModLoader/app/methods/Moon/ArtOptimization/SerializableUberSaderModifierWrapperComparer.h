#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::SerializableUberSaderModifierWrapperComparer {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, (app::SerializableUberSaderModifierWrapperComparer * this_ptr, float lerp_value))
    IL2CPP_REGISTER_METHOD(0x00CB1E80, int32_t, Compare, (app::SerializableUberSaderModifierWrapperComparer * this_ptr, app::SerializableUberSaderModifierWrapper * x, app::SerializableUberSaderModifierWrapper * y))
}
