#include <interception_macros.h>

namespace app::methods::Frameworks::Shader {
IL2CPP_REGISTER_METHOD(0x01643ED0, void, ConvertColorsToTexture, (Texture2D * texture, Color__Array * gradient));
IL2CPP_REGISTER_METHOD(0x01643F90, void, ConvertGradientToTexture, (Texture2D * texture, Gradient * gradient, int32_t resolution));
IL2CPP_REGISTER_METHOD(0x01644150, void, ConvertLerpedGradientToTexture, (Texture2D * texture, Gradient * gradientA, Gradient * gradientB, float time, int32_t resolution));
IL2CPP_REGISTER_METHOD(0x01644480, Gradient *, ConvertTextureToGradient, (Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x016448D0, void, __cctor, ());
}
