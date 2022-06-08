#include <interception_macros.h>

namespace app::methods::Utils {
IL2CPP_REGISTER_METHOD(0x02C6A720, float, get_TimeScale, ());
IL2CPP_REGISTER_METHOD(0x02C6A770, void, set_TimeScale, (float value));
IL2CPP_REGISTER_METHOD(0x03118E00, String *, FormatBytes, (int64_t _size));
IL2CPP_REGISTER_METHOD(0x03118EB0, String *, FormatBytes, (int64_t _size, String__Array * _orderLabels));
IL2CPP_REGISTER_METHOD(0x03119100, String *, FormatPixels, (int64_t _pixelCount));
IL2CPP_REGISTER_METHOD(0x031191B0, void, __cctor, ());
}
