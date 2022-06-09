#include <interception_macros.h>

namespace app::methods::Sini_Unity::ColorExtensions {
IL2CPP_REGISTER_METHOD(0x031144D0, Color, WithAlpha, (app::Color color, float alpha));
IL2CPP_REGISTER_METHOD(0x03114500, Color, Darkest, (app::Color color));
IL2CPP_REGISTER_METHOD(0x03114540, Color, EvenDarker, (app::Color color));
IL2CPP_REGISTER_METHOD(0x03114580, Color, Darker_1, (app::Color color));
IL2CPP_REGISTER_METHOD(0x031145E0, Color, Darker_2, (app::Color color, float factor));
IL2CPP_REGISTER_METHOD(0x03114620, Color, Brighter_1, (app::Color color));
IL2CPP_REGISTER_METHOD(0x031146A0, Color, Brighter_2, (app::Color color, float factor));
IL2CPP_REGISTER_METHOD(0x03114730, Color, Brightest, (app::Color color));
IL2CPP_REGISTER_METHOD(0x031147D0, Color, Desaturate, (app::Color color, float desaturation_amount, float darkening_amount));
}
