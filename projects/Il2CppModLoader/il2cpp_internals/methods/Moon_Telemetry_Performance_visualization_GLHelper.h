using namespace app;

namespace app::methods::Moon::Telemetry::Performance::visualization::GLHelper {
IL2CPP_REGISTER_METHOD(0x010A3D60, void, DrawRect, (float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x010A3DF0, void, DrawNumber, (int32_t x, int32_t y, int32_t num, bool isLeading));
IL2CPP_REGISTER_METHOD(0x010A4010, void, DrawDot, (int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x010A40E0, void, DrawTimeWithBackgroundPadded, (int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y, float scale));
IL2CPP_REGISTER_METHOD(0x010A4520, void, DrawIntWithBackground, (int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y, float scale));
IL2CPP_REGISTER_METHOD(0x010A4B40, void, DrawIntWithBackgroundPadded, (int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y, float scale));
IL2CPP_REGISTER_METHOD(0x010A4FD0, void, DrawFloatWithBackground, (float value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x010A5300, void, DrawStringWithBackground, (String * str, int32_t xOffset, int32_t yOffset, Color backgroundColor, Color stringColor));
IL2CPP_REGISTER_METHOD(0x010A5550, void, DrawString, (String * str, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x010A5660, void, DrawLetter, (uint16_t c, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x010A5730, void, DrawLetter, (int32_t letter, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x010A5A10, int32_t, LetterOffset, (int32_t letter));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GLHelper * __this));
IL2CPP_REGISTER_METHOD(0x010A5AC0, void, __cctor, (MethodInfo * method));
}
