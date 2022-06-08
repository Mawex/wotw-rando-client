#include <interception_macros.h>

namespace app::methods::UnityEngine::Font {
IL2CPP_REGISTER_METHOD(0x0319AA50, void, __ctor, (Font * __this));
IL2CPP_REGISTER_METHOD(0x0319AB30, void, add_textureRebuilt, (Action_1_UnityEngine_Font_ * value));
IL2CPP_REGISTER_METHOD(0x0319AC30, void, remove_textureRebuilt, (Action_1_UnityEngine_Font_ * value));
IL2CPP_REGISTER_METHOD(0x0319AD30, Material *, get_material, (Font * __this));
IL2CPP_REGISTER_METHOD(0x0319AD80, bool, get_dynamic, (Font * __this));
IL2CPP_REGISTER_METHOD(0x0319ADD0, int32_t, get_fontSize, (Font * __this));
IL2CPP_REGISTER_METHOD(0x0319AE20, void, InvokeTextureRebuilt_Internal, (Font * font));
IL2CPP_REGISTER_METHOD(0x0319AEE0, bool, HasCharacter, (Font * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x0319AF40, bool, HasCharacter, (Font * __this, int32_t c));
IL2CPP_REGISTER_METHOD(0x0319AFA0, void, Internal_CreateFont, (Font * self, String * name));
}
