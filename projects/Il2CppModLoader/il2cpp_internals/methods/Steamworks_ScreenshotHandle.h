using namespace app;

namespace app::methods::Steamworks::ScreenshotHandle {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (ScreenshotHandle__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (ScreenshotHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0020B0F0, bool, Equals, (ScreenshotHandle__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (ScreenshotHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (ScreenshotHandle x, ScreenshotHandle y));
IL2CPP_REGISTER_METHOD(0x027E1CB0, bool, operator___, (ScreenshotHandle x, ScreenshotHandle y));
IL2CPP_REGISTER_METHOD(0x006CE970, ScreenshotHandle, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (ScreenshotHandle that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (ScreenshotHandle__Boxed * __this, ScreenshotHandle other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (ScreenshotHandle__Boxed * __this, ScreenshotHandle other));
IL2CPP_REGISTER_METHOD(0x027E1D50, void, __cctor, (MethodInfo * method));
}
