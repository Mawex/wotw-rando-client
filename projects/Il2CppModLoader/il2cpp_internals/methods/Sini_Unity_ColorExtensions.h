using namespace app;

namespace app::methods::Sini::Unity::ColorExtensions {
IL2CPP_REGISTER_METHOD(0x031144D0, Color, WithAlpha, (Color color, float alpha));
IL2CPP_REGISTER_METHOD(0x03114500, Color, Darkest, (Color color));
IL2CPP_REGISTER_METHOD(0x03114540, Color, EvenDarker, (Color color));
IL2CPP_REGISTER_METHOD(0x03114580, Color, Darker, (Color color));
IL2CPP_REGISTER_METHOD(0x031145E0, Color, Darker, (Color color, float factor));
IL2CPP_REGISTER_METHOD(0x03114620, Color, Brighter, (Color color));
IL2CPP_REGISTER_METHOD(0x031146A0, Color, Brighter, (Color color, float factor));
IL2CPP_REGISTER_METHOD(0x03114730, Color, Brightest, (Color color));
IL2CPP_REGISTER_METHOD(0x031147D0, Color, Desaturate, (Color color, float desaturationAmount, float darkeningAmount));
}
