#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::Font {
    IL2CPP_REGISTER_METHOD(0x0319AA50, void, ctor, (app::Font * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319AB30, void, add_textureRebuilt, (app::Action_1_UnityEngine_Font_ * value))
    IL2CPP_REGISTER_METHOD(0x0319AC30, void, remove_textureRebuilt, (app::Action_1_UnityEngine_Font_ * value))
    IL2CPP_REGISTER_METHOD(0x0319AD30, app::Material *, get_material, (app::Font * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319AD80, bool, get_dynamic, (app::Font * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319ADD0, int32_t, get_fontSize, (app::Font * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319AE20, void, InvokeTextureRebuilt_Internal, (app::Font * font))
    IL2CPP_REGISTER_METHOD(0x0319AEE0, bool, HasCharacter_1, (app::Font * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x0319AF40, bool, HasCharacter_2, (app::Font * this_ptr, int32_t c))
    IL2CPP_REGISTER_METHOD(0x0319AFA0, void, Internal_CreateFont, (app::Font * self, app::String * name))
}
