#include <interception_macros.h>

namespace app::methods::Steamworks::ScreenshotHandle {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::ScreenshotHandle__Boxed * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (app::ScreenshotHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0020B0F0, bool, Equals_1, (app::ScreenshotHandle__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::ScreenshotHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::ScreenshotHandle x, app::ScreenshotHandle y));
IL2CPP_REGISTER_METHOD(0x027E1CB0, bool, operator____2, (app::ScreenshotHandle x, app::ScreenshotHandle y));
IL2CPP_REGISTER_METHOD(0x006CE970, ScreenshotHandle, operator__1, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator__2, (app::ScreenshotHandle that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::ScreenshotHandle__Boxed * this_ptr, app::ScreenshotHandle other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::ScreenshotHandle__Boxed * this_ptr, app::ScreenshotHandle other));
IL2CPP_REGISTER_METHOD(0x027E1D50, void, __cctor, ());
}
