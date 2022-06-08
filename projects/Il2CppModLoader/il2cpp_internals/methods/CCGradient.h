#include <interception_macros.h>

namespace app::methods::CCGradient {
IL2CPP_REGISTER_METHOD(0x0315B1B0, Color, get_Item, (CCGradient * __this, float p));
IL2CPP_REGISTER_METHOD(0x0315B640, void, WriteToTexture, (CCGradient * __this, float minimum, float maximum, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x0315B830, void, OnEnable, (CCGradient * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (CCGradient * __this));
}
