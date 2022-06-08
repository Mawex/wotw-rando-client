#include <interception_macros.h>

namespace app::methods::MicroProfiler_MarkerInfo {
IL2CPP_REGISTER_METHOD(0x0024A2C0, void, Begin, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A2D0, void, End, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A2E0, void, Continue, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A2F0, void, Reset, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A300, bool, get_WasBegun, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A310, bool, get_IsActive, (MicroProfiler_MarkerInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A320, bool, get_WasEnded, (MicroProfiler_MarkerInfo__Boxed * __this));
}
