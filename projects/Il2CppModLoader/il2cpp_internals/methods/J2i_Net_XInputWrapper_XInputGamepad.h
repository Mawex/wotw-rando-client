#include <interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XInputGamepad {
IL2CPP_REGISTER_METHOD(0x0024B610, bool, IsButtonPressed, (XInputGamepad__Boxed * __this, int32_t buttonFlags));
IL2CPP_REGISTER_METHOD(0x0024B620, void, Copy, (XInputGamepad__Boxed * __this, XInputGamepad source));
IL2CPP_REGISTER_METHOD(0x0024B680, bool, Equals, (XInputGamepad__Boxed * __this, Object * obj));
}
